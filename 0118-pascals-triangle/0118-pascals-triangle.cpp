class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=1;i<=numRows;i++){
            if(i==1){
                ans.push_back({1});
            }
            else if(i==2){
                ans.push_back({1,1});
            }
            else{
                vector<int> sub = ans.back();
                vector<int> temp;
                temp.push_back(1);
                for(int i=0;i<sub.size()-1;i++){
                    temp.push_back(sub[i]+sub[i+1]);
                }
                temp.push_back(1);
                ans.push_back(temp);
            }
        }
        return ans;
    }
};