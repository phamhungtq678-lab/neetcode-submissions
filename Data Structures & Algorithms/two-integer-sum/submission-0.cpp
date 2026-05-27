class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> hash_table;
        for(int i=0;i<nums.size();i++){
           hash_table[nums[i]]=i;
        }
        for(int i=0;i<nums.size();i++){
            int diff=target-nums[i];
            if(hash_table.count(diff) && hash_table[diff]!=i){
                return {i, hash_table[diff]};
            }
        }
        return {};

    }
};