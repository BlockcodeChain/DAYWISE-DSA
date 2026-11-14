class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        
        int n = nums.size();
        int pos = 0;
        for(int i=n;i<2*n;i++){
            nums.push_back(nums[pos]);
            pos++;
        }
     return nums;      
    }
};

// time c =o(n)
// sc=o(n)


        // for(int i = 0; i < n; i++) {
        //     ans[i] = nums[i];
        //     ans[i+n] = nums[i];
        // }