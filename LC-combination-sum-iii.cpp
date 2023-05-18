class Solution {
public:
    
    void helper(int k, int n, int i, vector<vector<int>>& ans, vector<int>& v) {
        if(k == 0 && n==0) {
            ans.push_back(v);
            return;
        }
        if(n <= 0) return;
        if(k <= 0) return;
        if(i > 9) return;
        
        for(int j=i; j<=9; j++) {
            v.push_back(j);
            helper(k-1, n-j, j+1, ans, v);
            v.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum3(int k, int n) {
        
        vector<vector<int>> ans;
        vector<int> v;
        helper(k, n, 1, ans, v);
        return ans;
    }
};
