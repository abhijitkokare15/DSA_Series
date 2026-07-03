class Solution {
private:

    vector<int> nextSmallerElement(vector<int> &arr, int n) {
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);

        for(int i = n - 1; i >= 0; i--) {
            while(s.top() != -1 && arr[s.top()] >= arr[i]) {
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }

    vector<int> prevSmallerElement(vector<int> &arr, int n) {
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);

        for(int i = 0; i < n; i++) {
            while(s.top() != -1 && arr[s.top()] >= arr[i]) {
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }

    int largestRectangleArea(vector<int> &heights) {
        int n = heights.size();

        vector<int> next = nextSmallerElement(heights, n);
        vector<int> prev = prevSmallerElement(heights, n);

        int area = 0;

        for(int i = 0; i < n; i++) {
            int l = heights[i];

            if(next[i] == -1) next[i] = n;

            int b = next[i] - prev[i] - 1;
            int newArea = l * b;

            area = max(area, newArea);
        }
        return area;
    }

public:
    int maxArea(vector<vector<int>> &mat) {
        int n = mat.size();
        int m = mat[0].size();

        vector<int> histogram = mat[0];
        int area = largestRectangleArea(histogram);

        for(int i = 1; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(mat[i][j] != 0)
                    mat[i][j] += mat[i-1][j];
                else
                    mat[i][j] = 0;
            }

            area = max(area, largestRectangleArea(mat[i]));
        }

        return area;
    }
};