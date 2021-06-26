class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> st;
        string s = "";
        addingst(st,s,n,0);
        return st;
    }

    void addingst(vector<string> &v,string s,int n, int m)
    {
        if(n==0&&m==0)
        {
            v.push_back(s);

        }
        if(m>0){addingst(v,s + ")",n,m-1);}
        if(n>0){addingst(v,s + "(",n-1,m+1);}
    }
};
