class Solution {
public:
    int romanToInt(string s) {
        int res=0;
        for(int i=0;i<s.length();i++)
        {
            if(i<s.length()-1&&s[i]=='I'&&s[i+1]=='V')
                res+=4;
            else if(i<s.length()-1&&s[i]=='I'&&s[i+1]=='X')
                res+=9;
            else if(s[i]=='I')
                res+=1;
            
            if(i<s.length()-1&&s[i]=='X'&&s[i+1]=='L')
                res+=40;
            else if(i<s.length()-1&&s[i]=='X'&&s[i+1]=='C')
                res+=90;
            else if(i!=0&&s[i]=='X'&&s[i-1]=='I')
                continue;
            else if(s[i]=='X')
                res+=10;

            if(i<s.length()-1&&s[i]=='C'&&s[i+1]=='D')
                res+=400;
            else if(i<s.length()-1&&s[i]=='C'&&s[i+1]=='M')
                res+=900;
            else if(i!=0&&s[i]=='C'&&s[i-1]=='X')
                continue;
            else if(s[i]=='C')
                res+=100;

            if(i!=0&&s[i]=='V'&&s[i-1]=='I')
                continue;
            else if(s[i]=='V')
                res+=5;
            
            if(i!=0&&s[i]=='L'&&s[i-1]=='X')
                continue;
            else if(s[i]=='L')
                res+=50;
            
            if(i!=0&&s[i]=='D'&&s[i-1]=='C')
                continue;
            else if(s[i]=='D')
                res+=500;
            if(i!=0&&s[i]=='M'&&s[i-1]=='C')
                continue;
            else if(s[i]=='M')
                res+=1000;
        }
        return res;
    }
};