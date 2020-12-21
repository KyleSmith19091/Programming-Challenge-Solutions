#include <iostream>
#include <string>
#include <cmath>
using namespace std;

/*      DESIGN        /
    ! Upper range -> 65 - 90
    ! Lower range -> 97 - 122
    for i in msg length
        if msg[i] is alphabetical:
            c <- msg[i]
            if msg[i] is uppercase:
                c <- c + 13
                if c > 90:
                    c <- 64 + (c-90)
            else:
                c <- c + 13
                if c > 122
                    c <- 96 + (c-122)
        msg[i] <- c
*/


string rot13(string msg){
    
    for (size_t i = 0; i < msg.length(); i++)
    {
        char c = msg[i];
        if(isalpha(c)){
            if(isupper(c)){
                if((c+13)>90){
                    c = c - 13;
                }else{
                    c = c + 13;
                }
            }else{
                if((c+13)>122){
                    c = c - 13;  
                }else{
                    c = c + 13;
                }
            }
        }
        msg[i] = c;
    }
    return msg;
}

int main(){

    cout << rot13("test") << endl;

    return 0;
}