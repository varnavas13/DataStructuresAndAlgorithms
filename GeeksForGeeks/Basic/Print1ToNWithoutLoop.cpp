class Solution{
    public:
    //Complete this function
    void printNos(int N)
    {
        if(N==0){}
        else{
        printNos(N-1);
        cout<<N<<' ';
        }
    }
};