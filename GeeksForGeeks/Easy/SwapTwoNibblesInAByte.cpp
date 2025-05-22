class Solution {
  public:
    int swapNibbles(int n) {
        int temp=n&15;
        int temp2=(n&240);
        temp=temp<<4;
        temp2=temp2>>4;
        return temp2+temp;
    }
};