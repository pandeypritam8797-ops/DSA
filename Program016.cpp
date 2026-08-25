#include <iostream>
using namespace std;
int main(){
    int n=5;
    int evenSum=0;
    for(int i=1; i<=n; i++){
        if(i%2==0){
            evenSum+=i;
        }
    }
    cout<<"even sum = "<< evenSum << endl;
    return 0;
}