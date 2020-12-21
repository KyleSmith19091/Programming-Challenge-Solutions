#include <iostream>
#include <cmath>
using namespace std;

/*
    h - height of the remaining liquid
    d - diameter of the cylinder
    vt - total volume

    FORMUlA -> V = PI * r^2 * h
*/

static int tankVol(int h, int d, int vt);


int main(){

    // V / PI * r^2 = h
    cout << tankVol(40,120,3500) << endl;


    return 0;
}

static int tankVol(int h, int d, int vt){
    if(h==0 || d == 0 || vt == 0) return 0;

    double cylinderHeight = vt/(M_PI * pow(d,2));
    // o^2 = a^2 + r^2
    double o = sqrt(pow((d-h),2) + pow(d,2));

    return (int)(M_PI * pow(o,2) * cylinderHeight);
}
