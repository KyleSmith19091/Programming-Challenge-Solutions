#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

static bool comp(std::vector<int>&a, std::vector<int>&b) {

      int counter = 0;
      for(size_t i = 0; i < a.size(); i++){
          std::cout << "Comparing: " << a[i] << " " << b[i] << "\n";
          if((a[i]/b[i]!=1 && a[i]/b[i]==b[i] && a[i]%b[i]==0) || (b[i]/a[i]!=1 && b[i]/a[i]==a[i] && b[i]%a[i]==0)){
              counter++;
          }
      }
      
      std::cout << "Counter: " << counter << "\n";
      return counter==a.size() ? true : false;
}

int main(){
    std::vector<int> a = {121, 144, 19, 161, 19, 144, 19, 11};
    std::vector<int >b = {14641, 20736, 361, 25921, 361, 20736, 362, 121};
    bool t = comp(a,b);
    std::cout << t << "\n"; 
    return 0;
}
