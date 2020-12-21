#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int testCase = 0;
    int N = 0;
    int budget = 0;

    cin >> testCase;
    for(int i = 0; i < testCase; i++){
        cin >> N >> budget;
        vector<int> prices;
        for(int j = 0; j < N; j++){
           int c = 0;
           cin >> c;
           prices.push_back(c);
        } 
        sort(prices.begin(), prices.end());
        int spend = 0;
        int numHouses = 0;
        int counter = 0;
        while(spend <= budget && counter < N){
            if(prices[counter] > budget){
                break;
            }
            if(prices[counter] + spend > budget){
                break;
            }
            spend+=prices[counter];
            numHouses++;
            counter++;
        }
        std::cout << "Case #" << i+1 << ": " << numHouses << "\n"; 
    } 
    


    return 0;
}
