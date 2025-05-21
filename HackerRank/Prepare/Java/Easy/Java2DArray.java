import java.util.Scanner;
public class Main{
    public static void main(String args[])
    {
        Scanner scan=new Scanner(System.in);
        int mx=-9*7;
        int a[][]=new int [6][6];
        for(int i=0;i<a.length;++i)
        {
            for(int k=0;k<6;++k)
            {
                a[i][k]=scan.nextInt();
            }
        }
        for(int i=1;i<5;++i)
        {
            for(int k=1;k<5;++k)
            {
                int temp=a[i][k];
                temp+=a[i-1][k];
                temp+=a[i+1][k];
                temp+=a[i-1][k-1];
                temp+=a[i-1][k+1];
                temp+=a[i+1][k+1];
                temp+=a[i+1][k-1];
                mx=Math.max(mx, temp);
            }
        }
        System.out.print(mx);
    }
}
