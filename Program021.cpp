// Write a program to print factorial of n no.
#include <iostream>
using namespace std;
int main(){
    int n;
    int fact =1;
    cout<<"enter n:";
    cin>> n;
    if(n<0){
        cout<<"error"<<endl;
    }else{
        for(int i=1; i<=n; i++){
            fact *=i;
        }
        cout<<"fact of n = "<< fact<< endl;
    }
    return 0;
}
    