class Solution {
public:
    
    void help(vector<int>& c, int t, int i, vector<vector<int>>& ans, vector<int>& v) {
        if(t == 0) {
            ans.push_back(v);
            return;
        }
        if(i == c.size() || t < 0) return;
        
        for(int j = i; j<c.size(); j++) {
            v.push_back(c[j]);
            help(c, t-c[j], j, ans, v);
            v.pop_back();
        }
}
    
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> v;
        help(candidates, target, 0, ans, v);
        return ans;
    }
};
