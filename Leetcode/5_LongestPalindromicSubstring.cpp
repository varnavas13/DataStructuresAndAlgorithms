class Solution {
public:
    string longestPalindrome(string s) {
     int n=s.size();
     int arr[n][n];
     for(int i=0;i<n=;i++)
     {
        for(int j=0;j<=n;j++)
        {
            arr[i][j]=0;
        }
     }
        for(int i=0;i<=n;i++)
        {
            for(int j=n;j>=0;j--)
            {
                if(i==j)
                arr[i][j]=1;
                else if(s[i]==s[j])
                {
                    arr[i][j]=arr[i+1][j-1]+2;
                }
                else{
                    arr[i][j]=max(arr[i+1][j],arr[i][j-1]);
                }
            }
        }
        for(int i=0;i<=n;i++)
        {
            for(int k=0;k<=n;k++)
            {
                cout<<arr[i][k]<<" ";
            }
            cout<<endl;
        }    
    }
};
