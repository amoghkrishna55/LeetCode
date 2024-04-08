class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int anchor = 0;
        while (true) {
            bool flag = false;
            for (int i = 0; i < students.size(); i++) {
                if (students[i] == sandwiches[anchor]) {
                    students.erase(students.begin() + i);
                    anchor++;
                    flag = true;
                    break;
                }
            }
            if (!flag || students.size() == 0)
                break;
        }
        return students.size();
    }
};