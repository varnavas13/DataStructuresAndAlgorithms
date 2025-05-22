//User function template for C++
class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
    string s2=S;
    reverse(s2.begin(),s2.end());
    if(s2==S)
    return 1;
    return 0;
    }

};