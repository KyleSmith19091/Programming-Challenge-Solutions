#include <iostream>
#include <vector>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    
    std::string row[5][5];
    pair<int,int> beautPos;
    
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> row[i][j];     
            if(row[i][j]=="1"){
                beautPos.first = i;
                beautPos.second = j;
            }
        }
    }

    std::cout << (abs(2-beautPos.first) + abs(2-beautPos.second)) << "\n";
    
    return 0;
}
