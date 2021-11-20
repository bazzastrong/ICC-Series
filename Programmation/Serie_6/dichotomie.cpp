#include <iostream>
using namespace std;

unsigned int cherche(unsigned int borneInf, unsigned int borneSup);

int main() {
    unsigned int min(0), MAX(100);
    cout << "Choisissez un nombre entre 0 et 100 !" << endl;
    cherche(min, MAX);
}

unsigned int cherche(unsigned int borneInf, unsigned int borneSup) {
    if (borneSup == borneInf) {
        cout << "Ceci est un ensemble vide..." << endl;
        return 0;
    }
    int comp;
    cout << "Votre nombre est-il plus petit que " << ((borneSup+borneInf)/2) << " ? ((< = 0), (> = 1), (= = 2)) "<< endl;
    cin >> comp;
    if (comp == 0) {
    return cherche(borneInf, (borneSup));
    }
    else if (comp == 1) {
    return cherche(borneSup/2, borneSup);
    }
    else if (comp == 2) {
        cout << "Votre nombre est " << borneSup/2 << " !" << endl;
    return 0;
    }
return 0;
}

