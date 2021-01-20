#include <iostream>
using namespace std;

int factorial(int n){
    if(n <= 1) return 1;
    
    return n * factorial(n-1);
}

int combination(int n, int r){

    if(n < r) return 1;

    return factorial(n)/(factorial(r) * factorial(n-r));
}

int main(int argc, char* argv[]){
	cin.tie(0);

    if(argc==1) exit(0);

    string n(argv[1]);
    string r(argv[2]);

    cout << argc << "\n";
    cout << n << " " << r << "\n";

    //cout << combination(stoi(n),stoi(r)) << "\n";;

	return 0;
}
