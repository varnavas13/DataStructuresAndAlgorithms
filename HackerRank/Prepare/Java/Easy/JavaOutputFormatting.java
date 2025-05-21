import java.util.Scanner;

 class Solution {

    public static void main(String[] args) {
            Scanner sc=new Scanner(System.in);
            System.out.println("================================");
            for(int i=0;i<3;i++){
                String s1=sc.next();
                String x=sc.next();
                System.out.print(s1);
                for(int k=0;k<15-s1.length();++k)
                System.out.print(" ");
                if(x=="0")
                System.out.println("000");
                else if(x.length()==1)
                System.out.println("00"+x);
                else if(x.length()==2)
                System.out.println("0"+x);
                else
                System.out.println(x);
            }
            System.out.println("================================");

    }
}



