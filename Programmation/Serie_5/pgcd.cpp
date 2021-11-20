#include <iostream>
using namespace std;

int nb_algo(int& a);

int main () {
    int x, y, z(z = x), t(t = y), w, u(1), v(0), q(q = x / y), r(r = x % y);
    int prev_u, new_u, prev_v, new_v;
    nb_algo(x);
    nb_algo(y);
    cout << "Calcul du PGCD de " << x << " et " << y << endl;
    cout << "x          " << "y          " << "u          " << "v          " << endl;
    if (r == 0) {
        cout << "Le PGCD de " << x << " et " << y << "est " << x << endl;
    }
    else {
        while ( x % y != 0) {
            w = x;
            x = y;
            y = w % y;
            new_u = prev_u - u * (z / t);
            new_v = prev_v - v * (z / t);
            prev_u = u;
            prev_v = v;
            cout << x << "          " << y << "          " << u << "          " << v << "          " << endl;
        }
    cout << "PGCD (" << z << ", " << t << ") = " << x << endl;
    }
    
return 0;
}

int nb_algo(int& a) {
    do {
        cout << "Choisissez un nombre entier supérieur ou égal à 1 !" << endl;
        cin >> a;
    } while ((a <= 0));
return a;
}