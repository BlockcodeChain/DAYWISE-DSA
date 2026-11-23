class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // array is sorted  and we have to remove duplicate 
        // 1 option is to do using set and we can try to do it in less and effcient time complexity 

        int pos=0;
        for(int i=1;i<nums.size();i++){
            if(nums[pos]!=nums[i]){
                nums[++pos]=nums[i];
            }
        }
             return pos+1;
    }
};