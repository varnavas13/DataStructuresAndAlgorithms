 class Solution {
    int lps(String str) {
        // code here
        int arr[] = LPS(str);
        return arr[str.length()-1];
        
    }
    
     int[] LPS(String str)
	{
	    int n = str.length();
	    int lps[] = new int[n];
	    int i = 1, len = 0;
	    lps[0] = 0; 
	     
	    while (i < n)
	    {
	        if (str.charAt(i) == str.charAt(len))
	        {
	            len++;
	            lps[i] = len;
	            i++;
	        }
	        else
	        {
	           
	            if (len == 0)
	            {
	                lps[i] = 0;
	                i++;
	 
	            }
	            else
	            {
	                len = lps[len - 1];
	            }
	        }
	    }
	     return lps;
	}
}