class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int anchor = nums[0];
        int count = 1;
        vector<int> ans;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == anchor)
                count++;
            else {
                if (count > (nums.size() / 3)) {
                    ans.push_back(anchor);
                }
                anchor = nums[i];
                count = 1;
            }
        }
        if (count > (nums.size() / 3)) {
            ans.push_back(anchor);
        }
        return ans;
    }
};