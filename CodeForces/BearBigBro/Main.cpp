#include <iostream>

using namespace std;

int main(){

    // Limak's weight <= brother weight
    // Limak new year2 weight = year1*3
    // Brother new year2 weight = year1*2

    int a = 0,b = 0;
    cin >> a >> b;
    int counter = 0;

    while(a <= b){
        a *= 3;
        b *= 2;
        counter++;
    }

    cout << counter << "\n";
    
	return 0;
}
