#include <iostream>
using namespace std;

int main () {
    int nb_p;
    cout << "Pensez à un nombre premier !" << endl;
    cin >> nb_p;
    int D;
    if ((nb_p % ((D != nb_p) or (D != 1))) != 0 ) {
        cout << "Je crois fortement que votre nombre est premier !" << endl;
    }
    else {
        for (int i(2); i < nb_p; ++i) {
            int R;
            R = nb_p % i;
            if (R == 0) {
                cout << "Le nombre n'est pas premier, car il est divisible par " << i << endl;
            }
        }
    }
return 0;
}