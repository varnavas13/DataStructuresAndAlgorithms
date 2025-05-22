//User function Template for C++

class Solution
{
	public:
		string is_palindrome(int n)
		{
		  string temp=to_string(n);
		  string temp2=temp;
		  reverse(temp.begin(),temp.end());
		  if(temp2==temp)
		  return "Yes";
		  return "No";
		}
};