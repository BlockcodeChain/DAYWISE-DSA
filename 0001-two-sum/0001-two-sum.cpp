class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size=nums.size();
        // i can't change index thhere will be no sorting in this 
        // we will use a map to count frequency too
        unordered_map<int,int>mp;
        for(int i=0;i<size;i++){
            int val=target-nums[i];
        if(mp.find(val)!=mp.end()){
            return {mp[val],i};
        }
        mp[nums[i]]=i;
        }
   return {};
    }
};


// tc :0(n)
// sc :0(n)  extra data structure i am using 