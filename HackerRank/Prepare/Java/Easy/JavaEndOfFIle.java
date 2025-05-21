import java.util.Scanner;
public class Solution {

    public static void main(String[] args) {
        Scanner scan=new Scanner(System.in);
        int cnt=1;
        while(scan.hasNextLine())
        {
            String s=scan.nextLine();
            System.out.println(cnt+" "+s);
            ++cnt;
        }
        
    }
}
s