class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;
        for(auto digit:num){
            while(!st.empty() && k>0 && st.top()>digit){
                st.pop();
                k--;
            }
            st.push(digit);
        }
        while(k>0 && !st.empty()){
            st.pop();
            k--;
        }
        string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        size_t pos = ans.find_first_not_of('0');
        ans= (pos == string::npos) ? "0" : ans.substr(pos);
        return ans;
    }
};