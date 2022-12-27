#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main(){
	cin.tie(0);

    int N; cin >> N;
    std::vector<int> ref(N);
    std::iota(ref.begin(),ref.end(),1);

    for(int i = 0; i < N; i++){
        int p; cin >> p;
        if(ref[p-1]!=0){
            ref[p-1] = 0;
        }	
    }

    for(int i = 1; i < N; i++){
        int q; cin >> q;
        if(ref[q-1]!=0){
            ref[q-1] = 0;
        }
    }
    
    
    cout << (accumulate(ref.begin(),ref.end(),0)==0 ? "I become the guy." : "Oh, my keyboard!") << "\n";

    
	return 0;
}
