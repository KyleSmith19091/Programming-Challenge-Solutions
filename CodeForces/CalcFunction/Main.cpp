#include <iostream>
#include <cmath>

#define ll long long

using namespace std;

int main(){
	cin.tie(0);
    
    ll int N; cin >> N;

    cout << (N&1 ? -(N+1)/2 : (N/2)) << "\n";
    
	return 0;
}
