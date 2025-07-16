class Solution {
public:
    bool isPalindrome(string s) {
        if(s==" "){
            return 1;
        }
        string s2 ="";
        
        for(int i= 0;i<s.length();i++){
            if(s[i]>='A' && s[i]<='Z'){
                s2+=char(int(s[i]) + 32);
            }
            else if(s[i]>='a' && s[i]<='z'){
                s2+=s[i];
            }
            else if(s[i]>='0' && s[i]<='9'){
                s2+=s[i];
            }
        }
        int start = 0, end = s2.length()-1;
        while(start<=end){
            if(s2[start]!=s2[end]){
                return 0;
            }
            else{
                start++;
                end--;
            }
        }
        return 1;
    }
};