class Solution {
public:
    int strStr(string haystack, string needle) {
        for (int i = 0; i < haystack.size(); i++) {
            if (needle[0] == haystack[i]) {
                if (haystack.substr(i, needle.size()) == needle) {
                    return i;
                    break;
                }
            }
        }
        return -1;
    }
};