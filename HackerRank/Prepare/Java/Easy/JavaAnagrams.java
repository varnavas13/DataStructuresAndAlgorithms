import java.util.Scanner;

public class Solution {

 static boolean isAnagram(String a, String b) {
    if (a.length() != b.length())
        return false;
    
    a = a.toLowerCase(); // Convert to lowercase for case-insensitive comparison
    b = b.toLowerCase(); // Convert to lowercase for case-insensitive comparison
    
    int[] n1 = new int[26]; // Array to count occurrences of each letter in string a
    int[] n2 = new int[26]; // Array to count occurrences of each letter in string b
    
    for (int i = 0; i < a.length(); ++i) {
        n1[a.charAt(i) - 'a']++;
        n2[b.charAt(i) - 'a']++;
    }
    
    for (int i = 0; i < 26; ++i) {
        if (n1[i] != n2[i])
            return false;
    }
    
    return true;
}

    public static void main(String[] args) {
    
        Scanner scan = new Scanner(System.in);
        String a = scan.next();
        String b = scan.next();
        scan.close();
        boolean ret = isAnagram(a, b);
        System.out.println( (ret) ? "Anagrams" : "Not Anagrams" );
    }
}