class Solution {
public:
    bool isHappy(int m) {
        int n = m;
        set<int> seen;
        while(true){
            int temp = 0;
            while(n!=0){
                temp += pow((n%10),2);
                n = n/10;
            }
            if(temp==1){
                return true;
            }
            else if(seen.count(temp)){
                break;
            }
            else{
                seen.insert(temp);
                n = temp;
            }
        }
        return false;
    }
};