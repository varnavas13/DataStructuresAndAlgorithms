class Solution {
    public String clearDigits(String s) {
        Stack<Character> stack=new Stack<>();
        for(int i=0;i<s.length();++i)
        {
            if(!(s.charAt(i)>='0'&&s.charAt(i)<='9'))
            {
                stack.push(s.charAt(i));
            }
            else
            {
                if(!stack.isEmpty())
                stack.pop();
            }
        }
        String temp="";
        while(!stack.isEmpty())
        {
            char c=stack.peek();
            stack.pop();
            temp+=c;
        }
        String ans="";
        for(int i=temp.length()-1;i>=0;--i)
        ans+=temp.charAt(i);
        return ans;
    }
}
