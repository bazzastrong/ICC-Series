#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double U0(1.0);
    double Ux;
    double Uint;
    double Vn;
    double Vx(1.0);
    for (int i(0); i <= 10; ++i) {
        Ux = U0 / (i + 1);
        U0 = Ux;
        cout << "U" << i << " = " << Ux << endl;
        Vn = Vx + Ux;
        Vx = Vn;
    }
    cout << Vx << endl;

return 0;
}