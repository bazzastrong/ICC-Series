#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main () {
    double x;
    double Exp_1;
    double Exp_2;
    double Exp_3;
    double Exp_4;

    cout << "Choisissez un réel x !" << endl;
    cin >> x;

    Exp_1 = (x / (1-exp(x)));
    if (x == 0) {
        cout << "Votre fonction est indefinie pour votre réel choisi..." << endl;
    }
    cout << Exp_1 << endl;

    Exp_2 = (x * log(x) * exp(2)) / (x - 1);
    if ((x <= 0) or (x == 1)) {
        cout << "Votre fonction est indefinie pour votre réel choisi..." << endl;
    }
        cout << Exp_2 << endl;

    Exp_3 = ((-x - sqrt(x * x - 8 *x)) / (2 - x));
    if (((x * x - 8 * x) == 0) or (x == 2)){
        cout << "Votre fonction est indefinie pour votre réel choisi..." << endl;
    }
    cout << Exp_3 << endl;

    Exp_4 = sqrt((sin(x) - (x / 20)) * (log(x * x - (1 / x))));
    if ((((sin(x) - (x / 20)) * (log(x * x - (1 / x)))) < 0) || (x * x - (1 / x) <= 0)) {
        cout << "Votre fonction est indefinie pour votre réel choisi..." << endl;
    }
    cout << Exp_4 << endl;

    return 0;
}
