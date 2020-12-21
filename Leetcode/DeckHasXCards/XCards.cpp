#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool hasGroupSizeX(vector<int>& deck){

    if(deck.size() & 1) return 0;
    sort(deck.begin(),deck.end());
    vector<int> groupSums;

    int count = std::count(deck.begin(),deck.end(),deck[0]);
    groupSums.push_back(count);


    for (int i = 1; i < deck.size(); i++){
        int currVal = deck[i];    
        if(currVal != deck[i-1]){ 
            // Set new count 
            count = std::count(deck.begin(),deck.end(),currVal);
            // Push previous count
            groupSums.push_back(count);
        }
    }

    if(equal(groupSums.begin() + 1, groupSums.end(), groupSums.begin())) return 1;

    return 0;
}




int main(){

    vector<int> deck;

    // [1,2,3,4,4,3,2,1]

    deck.push_back(1);
    deck.push_back(2);
    deck.push_back(3);
    deck.push_back(4);
    deck.push_back(4);
    deck.push_back(5);
    deck.push_back(5);
    deck.push_back(3);
    deck.push_back(2);
    deck.push_back(1);

    bool b = hasGroupSizeX(deck);

    cout << "IGNORE: " << b << endl;

    return 0;
}
