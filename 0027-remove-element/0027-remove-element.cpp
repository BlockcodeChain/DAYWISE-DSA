class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // when we do removing element question we take one pos =0 and we increase position 
    // given integer array nums remove element of val from array 

    int pos=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]!=val){
            nums[pos]=nums[i];
            pos++;
        }
    } 
    return pos;
    }
};