class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(),s.end(),s.begin(),::tolower);
        string s2= "";
        for(int i = 0;i<s.length();i++)
        {
            if(isalnum(s[i]))
            {
                s2 += s[i];
            }
        }
        int n = s2.length();
        for(int i = 0;i<n;i++)
        {
            if(s2[i]!=s2[n-i-1])
            {
                return false;
            }
        }
        return true;
    }
};
