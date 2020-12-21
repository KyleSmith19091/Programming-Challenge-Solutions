#include <iostream>
using namespace std;

// O(n)
int main(){
    cin.tie(0);
    
    // k price first banana, 2k second, 3k fourth
    // n number dollars
    // w amount of bananas to buy
    int k,n,w; cin >> k >> n >> w;

    int totalCost = 0;
    int borrowAmount = 0;

    for(int i = 0; i < w; i++){
        totalCost+=((i+1) * k);
    }

    if(totalCost-n > 0){
       borrowAmount = totalCost - n; 
    }
    
    std::cout << borrowAmount << "\n";
    

	return 0;
}
