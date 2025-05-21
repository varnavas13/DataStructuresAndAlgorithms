class Solution {
public:
    bool canAliceWin(int n) {
     int cnt=0;
     int temp=10;
     while(n>=temp&&temp>0)
     {
        n-=temp;
        cnt++;
        --temp;
     }   
     if(cnt%2==0)
     return false;
     return true;
    }
};