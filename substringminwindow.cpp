class Solution {
public:
bool fun(vector<int> &ss, vector<int> &ts)
{
    for(int i=0;i<256;i++)
    {
        if(ss[i]<ts[i])
        return false;
    }
    return true;
}
    string minWindow(string s, string t) {
        int n=s.size();
        int m=t.size();
        vector<int> ss(256,0);
        vector<int> ts(256,0);
        int i;
        // check for if t string is greater than s
        if(n<m)
        return "";
         // add the frequecy of t string character 
        for(i=0;i<m;i++)
         ts[t[i]]++;

        int low=0,high=0;
        int res=INT_MAX;
        int start=-1;
        for(high=0;high<n;high++)
        {
            ss[s[high]]++;

            while(fun(ss,ts)) // till the condition is true
            {
                int len=high-low+1;
                if(len<res) //check len is smaller hai ya nahi hai
                {
                    res=len;
                    start=low;
                }
                ss[s[low]]--;
                low++;
            }
        }
        if(res==INT_MAX)
        return "";
        return s.substr(start,res);
    }
};