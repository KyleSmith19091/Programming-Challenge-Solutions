#include <iostream>
#include <vector>

using namespace std;

bool betterThanAverage(std::vector<int> classPoints, int yourPoints){
    
    int sum = 0;
    for (size_t i = 0; i < classPoints.size(); i++)
    {
        sum += classPoints[i];
    }
    return yourPoints > (sum/classPoints.size()) ? true : false;
    
}


int main(){

    cout << "Hello World" << endl;

    return 0;
}