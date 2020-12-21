#include <algorithm>
#include <ios>
#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main(){

    double num = 0;
    cin >> num;
    vector<int> values;
    values.reserve(num);
    
    for(int i = 0; i < num; i++){
        int j = 0;
        cin >> j;
        values.emplace_back(j);    
    }
    
    double neg = 0;
    double pos = 0;
    double zero = 0;

    for_each(values.begin(), values.end(), [&](int i){
        if(i < 0){ neg++; }
        else if(i > 0){ pos ++;}
        else { zero ++; }
    }); 
    
    cout << fixed;

    cout << setprecision(6) << (neg/num) << endl;
    cout << setprecision(6) << (pos/num) << endl;
    cout << setprecision(6) << (zero/num) << endl;

    return 0;
}  
