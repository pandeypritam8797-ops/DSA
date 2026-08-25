// *****
// *****
// *****
// *****
// *****
// Write a progran to print this pattern.

#include <iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=1; i<=n; i++){  //outer loop (controlling N of lines)
        int m=5;
        for(int j=1; j<=m; j++){  //inner loop (controlling har lines mai kya hona chaiye)
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}