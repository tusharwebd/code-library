class Solution {
public:
    bool backspaceCompare(string S, string T) {
            stack <char> str1;
            for(auto ch:S)
            {
                if(ch!='#')
                {
                    str1.push(ch);
                }
                else if(!str1.empty() && ch=='#')
                {
                    str1.pop();
                }
            }
        stack <char> str2;
            for(auto ch:T)
            {
                if(ch!='#')
                {
                    str2.push(ch);
                }
                else if(!str2.empty() && ch=='#')
                {
                    str2.pop();
                }
            }
        if(str1.empty() && str2.empty())
        {
            return true;
        }
        while(!str1.empty())
        {
            char current = str1.top();
            if(str2.empty()||current!=str2.top())
            {
                return false;
            }
            str1.pop();
            str2.pop();

        }
        return str1.empty() && str2.empty();
    }
};
