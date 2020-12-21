#include <iostream>

using namespace std;

bool isDivisible(int n, int x, int y){
    return ( n % x == 0) && (n % y == 0) ? 1 : 0;
}


int main(){

    cout << "Hello World" << endl;

    return 0;
}