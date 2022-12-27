#include <iostream>
#include <vector>
using namespace std;

#define ll long long

int main(){
	cin.tie(0);
    int N; cin >> N;
    vector<ll int> arr;
    ll int moves = 0;
    while(N--){
        ll int n; cin >> n;
        arr.push_back(n);
    }
    for(int i = 1; i < arr.size(); i++){
        if(arr[i-1] > arr[i]){
            ll int diff = arr[i-1] - arr[i];    
            moves+=diff;
            arr[i] += diff;
        }
    }
    cout << moves << "\n";
	return 0;
}
