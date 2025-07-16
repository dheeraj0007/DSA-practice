class Solution {
public:
    string parseString(const string& s) {
        string parsedString = "";
        for (char c : s) {
            if (isalnum(c)) {
                parsedString += tolower(c);
            }
        }
        return parsedString;
    }
    bool checkPalindrome(string s,int start,int end){
        if(start>end){
            return true;
        }
        if(s[start]!=s[end]){
            return false;
        }
        return checkPalindrome(s, start + 1, end - 1);
    }
    bool isPalindrome(string s) {
        string parsedString = parseString(s);
        int st = 0,e = parsedString.length()-1;
        bool result = checkPalindrome(parsedString,st,e);
        return result;
    }
};