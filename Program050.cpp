// WAF to check if a number is prime or not.
#include <iostream>
using namespace std;
void checkPrime(int n){
    if(n<=1){
        cout << "Not Prime\n";
        return;
    }
    for(int i=2; i<n; i++){
        if(n%i==0){
            cout  << "Not Prime\n";
            return;
        }
    }
    cout<< "Prime\n";
}
int main(){
    checkPrime(9);
    return 0;
}