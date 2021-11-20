#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main () {
    double a0, a1, a2;
    double Q, R, D;
    double theta;
    double z1, z2, z3;
    double S, T;
    cout << "Entrez a2, puis a1, puis a0 :" << endl;
    cin >> a1 >> a2 >> a2;
    Q = (3 * a1 - (a2 * a2)) / (9);
    R = (9 * a1 * a2 - 27 * a0 - 2 * a2 * a2 * a2) / (54);
    D = pow(Q,3) + pow(R,2);
    if (D < 0) {
        theta = acos(R / sqrt(-Q*Q*Q));
        z1 = 2 * sqrt(-Q) * cos(theta / 3) - (a2 / 3);
        z2 = 2 * sqrt(-Q) * cos((theta + 2 * M_PI) / 3) - (a2 / 3);
        z3 = 2 * sqrt(-Q) * cos((theta + 4 * M_PI) / 3) - (a2 / 3);
        cout << z1 << z2 << z3 << endl;
    }
    else {
        S = cbrt(R + sqrt(D));
        T = cbrt(R - sqrt(D));
        if ((D == 0) and (S + T != 0)) {
            z1 = (-a2 / 3) + (S + T);
            z2 = (-a2 / 3) - ((S + T) / 2);
            cout << z1 << z2 << endl;
        }
        else {
            z1 = (-a2 / 3) + (S + T);
            cout << z1 << endl;
        }
    }
    return 0;

}