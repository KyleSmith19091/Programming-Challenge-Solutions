#include <iostream>

using namespace std;

int main(){

    int n,k,ans = 0;

    cin >> n >> k;

    while(n--){
        int v;
        cin >> v;
        if(v > k) ans++;
    }

    cout << ans << "\n";

    return 0;
}
