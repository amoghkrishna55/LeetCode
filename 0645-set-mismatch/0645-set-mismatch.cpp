class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans;
        vector<int> freq(nums.size()+1,0);
        for(auto num : nums){
            freq[num]++;
        }
        for(int i=1;i<freq.size();i++){
            if(freq[i]>1){
                ans.push_back(i);
            }
        }
        for(int i=1;i<freq.size();i++){
            if(freq[i]==0){
                ans.push_back(i);
            }
        }
        return ans;
    }
};