#include <unordered_map>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {

    //     unordered_map<int, int> present;

        
    //     for (int i = 0; i < nums.size(); i++) {
    //         present[nums[i]]++;
    //     }

       
    //     for (auto it = present.begin(); it != present.end(); it++) {
    //         if (it->second == 1) {
    //             return it->first;
    //         }
    //     }

    //     return -1;
    // }

        int res = 0;
      for (int i=0;i<nums.size();i++) {
            res ^= nums[i];
        }

        return res;
    }
};
