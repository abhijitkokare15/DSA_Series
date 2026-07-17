class Solution {
  public:
    int minCost(vector<int>& arr) {
        priority_queue <int,vector<int>,greater<int>> p;
        
        for(int i=0;i<arr.size();i++)
        {
             p.push(arr[i]);
        }
        int count=0;
        
        while(p.size() > 1)
        {
            int a=p.top();
            p.pop();
            
            int b = p.top();
            p.pop();
            
            int sum = a+b;
            
            count+=sum;
            
            p.push(sum);
        }
        
        return count;
        
    }
};