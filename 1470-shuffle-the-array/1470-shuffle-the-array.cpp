class Solution {
public:
 
    vector<int> shuffle(vector<int>& nums, int n) {

        vector<int> ans;

        for(int i = 0; i < n; i++) {
            ans.push_back(nums[i]);
            ans.push_back(nums[i+n]);
        }

        return ans;
    }
};
// Time Complexity (TC): O(n) — loop runs n times.
// Space Complexity (SC): O(n) — extra ans vector stores 2n elements.