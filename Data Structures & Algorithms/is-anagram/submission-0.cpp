class Solution {
public:
    bool isAnagram(string s, string t) {
        map<int,int>hash_table;
        for(char i :s){
            hash_table[i]++;
        }
        if(t.length()!=s.length()){
                return false;
            }
        for(char i :t){
            if(hash_table[i]==0){
                return false;
            }

            hash_table[i]--;
           
        }
        return true;
    }
};