#include <iostream>
using namespace std;

int main(){
	cin.tie(0);

    int n; cin >> n;
    int a=0,b=0; // a leave b enter
    int maxVal = 0;
    int capacity = 0;

    while(n--){
        cin >> a >> b;
        capacity -= a;
        capacity += b;
        if(capacity > maxVal){
            maxVal = capacity;
        }
    }
    
    cout << maxVal << "\n";


	return 0;
}
