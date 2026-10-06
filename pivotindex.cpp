class Solution {
public:
    int pivotIndex(vector<int>& a) { 
         
       int sum =0;

       for(int i=0;i<a.size();i++)
       {
           sum+=a[i];
       }

       int left=0;

       for(int i=0; i<a.size(); i++)
       {
           int right=sum-left-a[i];
           if(left==right)
           return i;


           left=left+a[i];
       }
       return -1;
        
    }
};