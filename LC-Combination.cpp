//Question Link : https://leetcode.com/problems/combinations/

class Solution {
public:
    
    /*
    Basically in this problem we have to generate all the subsets having constraint that the size of each subset  = K.
    */
    
    void helper(int i, int n, int k, vector<int>& subset, vector<vector<int>>& ans) {
        
        //base condition
        if(k == 0) {
            ans.push_back(subset);
            return;
        }
        if(k > n-i+1) return;
        if(i > n) {
            
            return;
        }
        
        //take the ith element
        subset.push_back(i);
        helper(i+1, n, k-1, subset, ans);
        
        //ignore the ith element
        subset.pop_back();
        helper(i+1, n, k, subset, ans);
    }
    
    
    vector<vector<int>> combine(int n, int k) {
        
        vector<vector<int>> ans;
        vector<int> subset;
        
        helper(1, n, k, subset, ans);
        return ans;
        
    }
};
