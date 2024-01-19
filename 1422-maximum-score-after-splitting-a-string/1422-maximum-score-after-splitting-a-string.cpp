class Solution {
public:
    int maxScore(string s) {
        int one = count(s.begin(),s.end(),'1');
        int zero = 0;
        int ans = 0;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]=='1') one--;
            else zero++;
            ans = max(ans,one+zero);
        }
        return ans;
    }
};