#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int c[n];
    for(int i=0;i<n;i++)
    cin>>c[i];
int count = 0;
    for(int i=0; i<n; i++){
        if(c[i]!=0){
             for(int j=i+1; j<n; j++){
                if(c[i]==c[j]){
                    count++;
                    c[j]=0;
                    break;
                    }
                }           
        }
    }
    printf("%d", count);
}
