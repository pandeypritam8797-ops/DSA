// Write a function to calculate N factorial.
#include <iostream>
using namespace std;
int factN(int n){
    int fact =1;
    for(int i=1; i<=n; i++){   // i=1; i<=n because fact is initialise with 1.
        fact *=i;
    }
    return fact;
}
int main(){
    cout<< factN(6)<< endl;
    cout<< factN(4)<< endl;
    return 0;
}