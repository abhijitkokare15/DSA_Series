class Solution {
public:
    int celebrity(vector<vector<int>>& mat) {
        stack<int> s;
        int n = mat.size();

        // Push all people
        for(int i = 0; i < n; i++)
            s.push(i);

        // Find candidate
        while(s.size() > 1) {
            int a = s.top(); s.pop();
            int b = s.top(); s.pop();

            if(mat[a][b] == 1) // a knows b
                s.push(b);
            else
                s.push(a);
        }

        int candidate = s.top();

        // Check row (celebrity knows nobody)
        for(int i = 0; i < n; i++) {
            if(i != candidate && mat[candidate][i] == 1)
                return -1;
        }

        // Check column (everyone knows celebrity)
        for(int i = 0; i < n; i++) {
            if(i != candidate && mat[i][candidate] == 0)
                return -1;
        }

        return candidate;
    }
};