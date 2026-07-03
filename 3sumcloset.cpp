class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int res;
         int min=INT_MAX;   

        for(int i=0;i<nums.size()-2;i++)
        {
            int left = i+1;
            int right = nums.size()-1;
           
            while(left < right)
            {
                int sum= nums[i]+nums[left] + nums[right];
                int diff=abs(sum-target);
                if(diff<min)
                {
                    min=diff;
                    res=sum;
                }

                if(sum == target)
                {

                    left++;
                    right--;
                    

                }

                else if(sum < target)
                    left++;

                else
                    right--;
            }
        }

        return res;
    }
};