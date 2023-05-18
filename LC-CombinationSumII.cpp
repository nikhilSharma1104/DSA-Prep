class Solution {
public:
    
    void help(vector<int> c, int t, int i, vector<int>& s, set<vector<int>>& ans) {
        
        if(t == 0) {
            ans.insert(s);
            return;
        }
        if(i == c.size() || t < 0) return;
        
        for(int j = i; j<c.size(); j++) {
            if (j > i && c[j] == c[j - 1])
                continue;
            s.push_back(c[j]);
            help(c, t-c[j], j+1, s, ans);
            s.pop_back();
        }
        
    }
    
    
    vector<vector<int>> combinationSum2(vector<int>& c, int t) {
        sort(c.begin(), c.end());
        set<vector<int>> ans;
        vector<int> s;
        
        help(c, t, 0, s, ans);
        
        vector<vector<int>> v;
        for(auto i : ans) {
            v.push_back(i);
        }
        
        return v;
    }
};
