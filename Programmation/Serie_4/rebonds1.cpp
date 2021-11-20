#include <iostream>
#include <cmath>
using namespace std;

int main () {

    double H0;
    do {
        cout << "De quelle hauteur lachez vous votre balle ?" << endl;
        cin >> H0; }
    while (H0 < 0);
    double eps;
    do {
        cout << "Quel est votre coefficient de rebonds ?" << endl;
        cin >> eps; }
    while ((eps < 0) and (eps >= 1));
    double nbr;
    do {
        cout << "Combien de rebonds va faire votre balle ?" << endl;
        cin >> nbr; }
    while (nbr < 0);
    for (int i(0); i < nbr; ++i) {
        double v;
        v = sqrt(2 * H0 * 9.81);
        double v1;
        v1 = eps * v;
        double H1;
        H1 = (v1 * v1) / (2 * 9.81);
        H0 = H1;
        cout << H1 << endl;
    }
return 0;
}
