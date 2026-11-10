class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    // unordered_map<int,int>mp;
    // int size=nums.size();
    // for(int i=0;i<size;i++){
    //    int val=target-nums[i];
    //    if(mp.find(val)!=mp.end()){
    //     return {mp[val],i};
    //    }
    //    mp[nums[i]]=i;
    // }
    // return{};
   int size=nums.size();

    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
          if(target==nums[i]+nums[j]){
            return {i,j};
          }
        }
    }
    return {};
    }
};