class Solution {
    public boolean isInterleave(String s1, String s2, String s3) {
        int n=s1.length();
        int m=s2.length();
        if(n+m!=s3.length())
        return false;
        boolean arr[][]=new boolean[n+1][m+1];
        arr[0][0]=true;
        for(int i=1;i<=n;i++)
        {
            if(s1.charAt(i-1)==s3.charAt(i-1)&&arr[i-1][0])
            arr[i][0]=true;
        }
        for(int i=1;i<=m;i++)
        {
            if(s2.charAt(i-1)==s3.charAt(i-1)&&arr[0][i-1])
            arr[0][i]=true;
        }
        for(int i=1;i<=n;i++)
        {
            for(int k=1;k<=m;k++)
            {
                if(s1.charAt(i-1)==s3.charAt(i+k-1))
                arr[i][k]=arr[i][k]|arr[i-1][k];
                if(s2.charAt(k-1)==s3.charAt(i+k-1))
                arr[i][k]=arr[i][k]|arr[i][k-1];
            }
        }
        return arr[n][m];
    }
}
