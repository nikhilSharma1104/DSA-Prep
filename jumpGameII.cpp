class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int level = 0, start = 0, end = 0, maxend = 0;
        
        while(end < n-1) {
            level++;
            maxend = end+1;
            for(int i=start; i<= end; i++) {
                maxend = max(maxend, nums[i] + i);
            }
            start = end+1;
            end = maxend;
        }
        
        return level;
         
        
    }
};