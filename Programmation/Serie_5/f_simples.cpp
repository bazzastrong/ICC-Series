#include <iostream>
using namespace std;

double min2(double x, double y);
double min3(double x, double y, double z);
double x, y, z;

int main() {
    double f;
    double h;
    f = min2(x, y);
    cout << "Le minimum de vos deux nombres est " << f << endl;
    h = min3(x, y, z);
    cout << "Le minimum entre vos trois nombres est " << h << endl;

return 0;
}

double min2(double x, double y) {
    cout << " Choisissez deux nombres réels x et y !" << endl;
    cin >> x >> y;
    if (x < y) {
        cout << "Le  minimum entre vos deux nombres x et y est " << x << endl;
        return x;
    }
    else {
        cout << "Le minimum entre vos deux nombres x et y est " << y << endl;
        return y;
    }
}

double min3(double x, double y, double z) {
    cout << "Choisissez trois nombres réels x, y et z" << endl;
    cin >> x >> y >> z;
    if (min2(x, y) < z) {
        return min2(x, y);
    }
    else {
        return z;
    }

}