class Solution {
public:
    bool checkValidString(string s) {
        if(s.empty() || s=="*")
            return true;
        else if(s.size()==1)
            return false;

        int leftc= 0,rightc = 0;
        for(char val:s)
        {
            if(val==')')
            {
                leftc -= 1;
            }
            else
                leftc += 1;

            if(leftc<0)
            {
                return false;
            }
        }
        if(leftc == 0)
            {
            return true;
            }
        reverse(s.begin(),s.end());
        for(char val:s)
        {
            if(val=='(')
            {
                rightc -= 1;
            }
            else
            {
                rightc += 1;
            }
            if(rightc<0)
                return false;
        }
        return true;
    }
};
