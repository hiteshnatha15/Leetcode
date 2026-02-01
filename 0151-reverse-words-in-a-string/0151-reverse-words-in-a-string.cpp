class Solution {
public:
    string reverseWords(string s) {
        vector<string> ans;
        for (int i = 0; i < s.size(); i++) {
            string temp = "";
            while (i < s.size() && s[i] != ' ') {
                temp += s[i];
                i++;
            }
            if (temp != "")
                ans.push_back(temp);
        }
        string st = "";
        for (int i = ans.size() - 1; i >= 0; i--) {
            st += ans[i];
            if (i != 0)
                st += ' ';
        }
        return st;
    }
};