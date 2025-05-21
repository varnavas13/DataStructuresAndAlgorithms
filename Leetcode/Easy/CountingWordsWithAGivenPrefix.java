class Solution {
    public int prefixCount(String[] words, String pref) {
        int sz=pref.length();
        int ans=0;
        for(int i=0;i<words.length;++i)
        {
            if(words[i].length()<sz){}
            else
            {
                if(words[i].substring(0,sz).equals(pref))
                ++ans;
            }
        }
        return ans;
    }
}
