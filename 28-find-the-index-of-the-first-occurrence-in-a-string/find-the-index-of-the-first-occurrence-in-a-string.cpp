class Solution {
public:
    int strStr(string haystack, string needle) {
    if (haystack.length() < needle.length())
        return -1;

    int idx = haystack.find(needle);
    
    if (idx == string::npos)
        return -1;
    else
        return idx;
}
};