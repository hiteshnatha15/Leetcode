class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return false;
        map<int, int> mp1;
        map<int, int> mp2;
        for (int i = 0; i < s.size(); i++) {
            mp1[s[i]]++;
            mp2[t[i]]++;
        }
        return mp1 == mp2;
    }
};