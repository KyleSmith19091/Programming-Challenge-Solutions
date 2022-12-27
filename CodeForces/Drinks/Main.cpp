#include <iostream>
using namespace std;

int main(){
	cin.tie(0);

    double N; cin >> N;
    double NN = N;
    double total = 0;

    while(N--){
        double p; cin >> p;
        total += p;
    }

    cout << (total/NN) << "\n";

	return 0;
}
