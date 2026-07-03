class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int target) {
        int row = arr.size();
        int col = arr[0].size();

        int s = 0;       
        int e = col - 1; 

        while (s < row && e >= 0) {
            int ele = arr[s][e];

            if (ele == target) {
                return true;
            }
            else if (ele < target) {
                s++;     
            }
            else {
                e--;      
            }
        }
        return false;
    }
};
