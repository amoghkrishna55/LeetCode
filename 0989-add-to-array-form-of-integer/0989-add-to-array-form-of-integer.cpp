class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int anchor = num.size()-1;
        while(k!=0){
            if(anchor>=0){
                k = k+num[anchor];
                num[anchor--] = k%10;
                k = k/10;
            }
            else{
                num.insert(num.begin(),k%10);
                k = k/10;
            }
        }
        return num;
    }
};