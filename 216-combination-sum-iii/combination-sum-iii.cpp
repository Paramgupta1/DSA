class Solution {
    
    void solve(int k, int n, vector<vector<int>>& answer,
               vector<int>& temp, int start) {
        
        if(temp.size() == k) {
            if(n == 0)
                answer.push_back(temp);
            return;
        }

        if(n <= 0)
            return;

        for(int i = start; i<=9; i++) {
            if (i > n)
                break;

            temp.push_back(i);

            solve(k, n-i, answer, temp, i+1);

            temp.pop_back();
        }
    }

public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> answer;
        vector<int> temp;

        solve(k, n, answer, temp, 1);

        return answer;
    }
};