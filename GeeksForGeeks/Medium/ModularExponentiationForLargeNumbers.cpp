class Solution
{
	public:
		long long int PowMod(long long int x,long long int y,long long int p)
		{
 int res = 1;      
 
    x = x % p;
    if (x == 0) return 0;
    while (y > 0) 
    { 
         
        if (y & 1) 
            res = (res*x) % p; 
 
        y = y>>1; 
        x = (x*x) % p; 
    } 
    return res; 		}
};