class Solution {
    public int isPrefixOfWord(String sentence, String searchWord) {
     String a[]=sentence.split(" ");
     for(int i=0;i<a.length;i++)
     {
        boolean check=true;
        if(searchWord.length()<=a[i].length())
        for(int k=0;k<searchWord.length();k++)
        {
            if(searchWord.charAt(k)!=a[i].charAt(k))
            {
                check=false;
                break;
            }
        }
        if(searchWord.length()<=a[i].length()&&check)
        return i+1;
     }   
     return -1;
    }
}