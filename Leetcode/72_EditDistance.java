class Solution {
    public int minDistance(String word1, String word2) {
        int n=word1.length();
        int m=word2.length();
        int arr[][]=new int [n+1][m+1];
        arr[0][0]=0;
        for(int i=1;i<=n;i++)
        {
            arr[i][0]=i;
        }
        for(int i=1;i<=m;i++)
        {
            arr[0][i]=i;
        }
        for(int i=1;i<=n;i++)
        {
            for(int k=1;k<=m;k++)
            {
                if(word1.charAt(i-1)==word2.charAt(k-1))
                {
                    arr[i][k]=arr[i-1][k-1];
                }
                else
                {
                    arr[i][k]=Math.min(arr[i-1][k],Math.min(arr[i-1][k-1],arr[i][k-1]))+1;
                }
            }
        }
        return arr[n][m];
    }
}
