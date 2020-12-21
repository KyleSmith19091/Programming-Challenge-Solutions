#include <iostream>

using namespace std;

// Board
// M * N --> 1 <= M <= N <= 16
// domino: 2 x 1
//

int main(){

    int b,l;

    cin >> b >> l;

    cout << ((l*b)/2) << "\n";
    
    return 0;
}
