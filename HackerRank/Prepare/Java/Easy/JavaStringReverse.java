import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);
        String A=sc.next();
        boolean b=true;
        for(int i=0;i<A.length();++i)
        {
            if(A.charAt(i)!=A.charAt(A.length()-i-1))
            b=false;
        }
        if(b)
        System.out.println("Yes");
        else
        System.out.println("No");
        
        
    }
}



