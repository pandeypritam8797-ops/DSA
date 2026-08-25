// Print this pattern.
//       1
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1

#include <iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=0; i<n; i++){

        //spaces : n-i-1
        for(int j=0; j<n-i-1; j++){
            cout<< " ";
        }

        //number 1
        for(int j=1; j<=i+1; j++){   // j<=i+1  because we have to print till i+1
            cout<< j;
        }
        for(int j=i; j>0; j--){     // else j=i; j>=1; j++
            cout<< j;
        }
        cout<<endl;
    }
    return 0;
}