class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<int> st;
        for(char x:s)
        {
            if(st.empty()==false&&oppo(st.top(),x))
                st.pop();
            else
                st.push(x);
        }
        return(st.size());
    }
    bool oppo(char a,char b)
    {
        if(a=='('&&b==')')
            return true;
        else
            return false;
    }
};