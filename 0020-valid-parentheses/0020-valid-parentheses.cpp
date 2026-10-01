class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='('||s[i]=='{'||s[i]=='[')
                st.push(s[i]);
            else
            {
                if(st.empty()==false&&balanced(st.top(),s[i]))
                    st.pop();
                else
                    return false;
            }
        }
        if(st.empty()==false)
                return false;
        return true;
    }
    bool balanced(char a,char b)
    {
        if(a=='('&&b==')')
            return true;
        else if(a=='{'&&b=='}')
            return true;
        else if(a=='['&&b==']')
            return true;
        else
            return false;
    }
    
};