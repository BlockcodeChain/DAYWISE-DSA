class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        // we have to find sinlge number not a missing nnumber here
        for(auto val:nums){
            ans=val^ans;
        }
        return ans;
    }
};