class Solution {
    //t.c=>O(n*m)
    // void sliding(int &count, vector<int>& nums, int size, int k)
    // {
    //     int n = nums.size();

     
    //     if(size > n)
    //         return;

    //     int low = 0;
    //     int high = size - 1;

    //     unordered_map<int,int> mp;

      
    //     for(int i = low; i <= high; i++)
    //         mp[nums[i]]++;

       
    //     if(mp.size() == k)
    //         count++;

     
    //     while(high < n - 1)
    //     {
           
    //         mp[nums[low]]--;
    //         if(mp[nums[low]] == 0)
    //             mp.erase(nums[low]);

    //         low++;
    //         high++;

    //         mp[nums[high]]++;

    //         if(mp.size() == k)
    //             count++;
    //     }

      
    //     sliding(count, nums, size + 1, k);
    // }


public:
 int slidingFor(vector<int>& nums, int k)
 {
      int low=0;
       unordered_map<int,int> mp;
       int count = 0;
      
       for(int high=0;high<nums.size();high++)
       {
            mp[nums[high]]++;

            while(mp.size()>k)
            {
                 mp[nums[low]]--;
                 if(mp[nums[low]]==0)
                  mp.erase(nums[low]);
                  low++;
            }

             count=(high-low+1)+count;
       }
             return count;
       
 }

    int subarraysWithKDistinct(vector<int>& nums, int k) {
        
        if(nums.size() < k)
            return 0;

        

      //  sliding(count, nums, k, k);

        return slidingFor(nums,k)-slidingFor(nums,k-1);
    }
};