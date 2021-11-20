#include <iostream>
using namespace std;

int main () {
    double S0;
    do {
        cout << "Quel est le montant du pret que vous souhaitez avoir ?" << endl;
        cin >> S0; }
    while (S0 < 0);
    double r;
    do {
        cout << "Combien devez vous remboursez à la banque chaque mois ?" << endl;
        cin >> r; }
    while (r <= 0);
    double ir;
    do {
        cout << "Quel est le montant de l'intéret ?" << endl;
        cin >> ir; }
    while ((ir < 0) and (ir >= 1));

    int S_restante (S0);
    int duree(1);
    double S_ir;
    while(S_restante != 0 ) {
        ++duree; 
        ir = ir * S_restante;
        S_restante -= r;
        S_ir += ir;
        r +=  r;   
    }
cout << "La somme des intérêts encaissés (sur " << duree << " mois) est alors de " << S_ir << endl;

return 0;
}