#include <iostream>
#include <ctime>
#define ll long long
using namespace std;

int main(){
	cin.tie(0);
    srand(time(0));
    ll int N; cin >> N;
    if(N==1){
        cout << 1 << "\n";
        return 0;
    }
    if(N <= 3){
        cout << "NO SOLUTION\n";
        return 0;
    }
    if(N==4){
        cout << "2 4 1 3\n";
        return 0;
    }
    

    cout << 1 << " ";
    ll int counter = 1;
    for(int i = 1; i < N; i++){
        if(counter+2 > N){
            counter = 2;
            cout << counter << " ";
            continue;
        }

        cout << counter+2 << " "; 
        counter += 2;
    }

    cout << "\n";
	return 0;
}
