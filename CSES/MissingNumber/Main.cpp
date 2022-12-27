#include <iostream>
#define ll long long
using namespace std;

int main(){
	cin.tie(0);
    ll int N; cin >> N;
    ll int sumWant = N * (N+1) >> 1;
    ll int sum = 0;
    while(--N){
        ll int n;cin >> n;
        sum += n;
    }
    cout << (sumWant-sum) << "\n";

	return 0;
}
