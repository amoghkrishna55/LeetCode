class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> hash;
        for(int i : nums){
            if(hash.find(i)==hash.end()){
                hash[i] = i;
            }
            else{
                hash.erase(i);
            }
        }
        int res;
        for(auto &[key,value] : hash){
            res = key;
        }
        return res;
    }
};