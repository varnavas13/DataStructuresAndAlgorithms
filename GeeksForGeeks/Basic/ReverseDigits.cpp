class Solution
{
	public:
		long long int reverse_digit(long long int n)
		{
		   string s=to_string(n);
		   reverse(s.begin(),s.end());
		   long long int ans=stoll(s);
		   return ans;
		}
};