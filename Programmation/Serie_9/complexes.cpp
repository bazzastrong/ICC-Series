#include <iostream>
using namespace std;

struct Complexe {
    double Re;
    double Im;
};

Complexe affiche(Complexe z);
Complexe addition(Complexe z1, Complexe z2);
Complexe soustraction(Complexe z1, Complexe z2);
Complexe multiplication(Complexe z1, Complexe z2);
Complexe division(Complexe z1, Complexe z2);

int main() {
    Complexe z1, z2;
    affiche(z1);
    affiche(z2);
    cout << "L'addition des deux complexes " << z1 << " et " << z2 << " de votre choix est " << addition(z1, z2) << "." << endl;
    cout << "La multiplication des deux complexes " << z1 << " et " << z2 << " de votre choix est " << multiplication(z1, z2) << "." << endl;
    cout << "La soustraction des deux complexes " << z1 << " et " << z2 << " de votre choix est " << soustraction(z1, z2) << "." << endl;
    cout << "La division des deux complexes " << z1 << " et " << z2 << " de votre choix est " << division(z1, z2) << "." << endl;
return 0;
}

Complexe affiche(Complexe z){
    cout << "Choisissez un nombre complexe !" << endl;
    cin >> z.Re >> z.Im;
    cout << "Vous avez choisis le nombre complexe suivant : (" << z.Re << "," << z.Im << ") !" << endl;
return z;
}

Complexe addition(Complexe z1, Complexe z2){
    Complexe z3;
    z3.Re = z1.Re + z2.Re;
    z3.Im = z1.Im + z2.Im;
return z3;
}

Complexe soustraction(Complexe z1, Complexe z2) {
    Complexe z3;
    z3.Re = z1.Re - z2.Re;
    z3.Im = z1.Im - z2.Im;
return z3;
}

Complexe multiplication(Complexe z1, Complexe z2) {
    Complexe z3;
    z3.Re = z1.Re * z2.Re - z1.Im * z2.Im;
    z3.Im = z1.Re * z2.Im + z1.Im * z2.Re;
return z3;
}

Complexe division(Complexe z1, Complexe z2) {
    Complexe z3;
    z3.Re = (z1.Re * z2.Re + z1.Im * z2.Im)/(z2.Re * z2.Re + z2.Im  * z2.Im);
    z3.Im = (z1.Im * z2.Re - z1.Re * z2.Im)/(z2.Re * z2.Re + z2.Im  * z2.Im);
return z3;
}