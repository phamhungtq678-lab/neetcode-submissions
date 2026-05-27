class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int,int>hash_table;
        for(int i=0;i<nums.size();i++){
            hash_table[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++){
        if(hash_table[nums[i]]>1) return true;
        }
        return false;
    }
};