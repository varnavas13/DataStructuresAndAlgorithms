//User function template for C++
class Solution{
public:	
	int print2largest(int arr[], int n) {
	    sort(arr,arr+n);
	    for(int i=n-2;i>=0;--i)
	    if(arr[i]!=arr[n-1])
	    return arr[i];
	    return -1;
	}
};