class Solution {
public:
    int generateKey(int num1, int num2, int num3) {
          int a=min(min(num1/1000,num2/1000),num3/1000)*1000;
        num1%=1000;
        num2%=1000;
        num3%=1000;
        int b=min(min(num1/100,num2/100),num3/100)*100;
        num1%=100;
        num2%=100;
        num3%=100;
        int c=min(min(num1/10,num2/10),num3/10)*10;
        num1%=10;
        num2%=10;
        num3%=10;
        int d=min(num1,num2);
        d=min(d,num3);
        return a+b+c+d;
        
    }
};