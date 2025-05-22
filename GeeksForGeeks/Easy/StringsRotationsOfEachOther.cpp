class Solution {
  public:
    // Function to check if two strings are rotations of each other or not.
    bool areRotations(string &s1, string &s2) {
       string temp=s1;
       temp+=s1;
       int index1=0,index2=0;
       while(index1<temp.size()&&index2<s2.size())
       {
           if(temp[index1]==s2[index2])
           {
               index1++;
               index2++;
           }
           else
           {
               index1++;
           }
       }
       return index2==s2.size();
    }
};