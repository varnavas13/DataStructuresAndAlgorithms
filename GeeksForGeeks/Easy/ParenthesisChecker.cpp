
class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack<char> s;
        for(int i=0;i<x.size();++i)
        {
            if(x[i]=='('||x[i]=='{'||x[i]=='[')
            s.push(x[i]);
            else
            {
                if(s.empty())
                return false;
                if(s.top()=='{'&&x[i]=='}')
                s.pop();
                else if(s.top()=='('&&x[i]==')')
                s.pop();
                else if(s.top()=='['&&x[i]==']')
                s.pop();
                else
                return false;
                
            }
        }
        return s.empty();
    }

};