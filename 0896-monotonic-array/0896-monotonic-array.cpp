class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        if(nums.size()==1) return true;
        bool a=false,b=false;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]) break;
            if(i==nums.size()-2) a=true;
        }
        reverse(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]) break;
            if(i==nums.size()-2) b=true;
        }
        return a || b;
    }
};