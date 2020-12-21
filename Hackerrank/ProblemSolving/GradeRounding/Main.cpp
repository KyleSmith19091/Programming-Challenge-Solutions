#include <iostream>

using namespace std;

int main(){


    int num = 0;
    cin >> num;

    for(int i = 0; i < num; i++){
        int grade = 0;
        cin >> grade;
        
        if(grade >= 38){
            int mod = grade % 10;
            if(mod > 5){
                if(10-mod < 3){
                    grade = (grade/10) * 10 + 10;
                }
            }else if(mod < 5){
                if(5-mod < 3){
                    grade = (grade/10) * 10 + 5;
                }
            }
        }

        cout << grade << endl;
    }

    return 0;
}
