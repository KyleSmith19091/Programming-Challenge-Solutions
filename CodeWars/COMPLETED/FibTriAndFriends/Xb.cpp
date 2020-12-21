#include <iostream>
#include <vector>
using namespace std;

// signature - first n elements
// int n - number in sequence
std::vector <int> xbonacci(std::vector<int> signature, int n){
    vector <int> seq(n);
    seq = signature;
    seq.resize(n);

    for (size_t i = signature.size(); i < seq.size(); i++)
    {
        int sum = 0;

        for (size_t j = i-signature.size(); j < i; j++)
        {
            sum += seq[j];
        }
        seq[i] = sum;
    }
    
    
    return seq;
    
}

int main(){

   std::vector<int> signature = {0, 1};
   std::vector<int> expected = {0,1,1,2,3,5,8,13,21,34};

    vector<int> x = xbonacci(signature,10);

    for (size_t i = 0; i < x.size(); i++)
    {
        cout << x[i] << endl;
    }
    

    return 0;
}