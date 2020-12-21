#include <iostream>

using namespace std;

int simpleMultiplication(int a){
    return a & 1 ? a * 9 : a * 8;
}

int main(){

    cout << "Hello World" << endl;

    return 0;
}