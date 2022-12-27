#include <iostream>
#include <vector>
using namespace std;

int FirstFactorial(int num) {

    if(num <= 1) return 1;
  
    return num * FirstFactorial(num-1);
}

int FirstFactorialDynamic(int num){

    if(num <= 1) return 1;

    


}

int main(){
	cin.tie(0);

    cout << FirstFactorial(10) << "\n";

	return 0;
}
