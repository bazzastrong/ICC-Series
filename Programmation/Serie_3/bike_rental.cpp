#include <iostream>
using namespace std;

int main()
{
  cout << "Donnez l'heure de début de la location (un entier) : ";
  int debut;
  cin >> debut;

  cout << "Donnez l'heure de fin de la location (un entier) : ";
  int fin;
  cin >> fin;

    if (debut > fin) {
        cout << "Bizarre, le début de la location est après la fin ..." << endl;
    }
    if (((debut or fin) < 0) or ((debut or fin) > 24)){
        cout << "Les heures doivent être comprises entre 0 et 24 !" << endl;
    }
    if (debut == fin) {
        cout << "Bizarre, vous n'avez pas loué votre vélo bien longtemps !" << endl;
    }
    int tps;
    tps = fin - debut;
    if (((0 <= debut) and (debut < 7)) and ((debut < fin) and (fin <= 7))) {
        cout << "Vous avez loué votre vélo pendant" << tps << " heure(s) au tarif horaire de 1 franc(s)" << endl;
        cout << "Le montant total à  payer est de " << tps << " franc(s)." << endl;
    }
    else if ((7 <= debut) and (debut < fin) and (fin <= 17)){
        cout << "Vous avez loué votre vélo pendant" << tps << " heure(s) au tarif horaire de 2 franc(s)" << endl;
        cout << "Le montant total à  payer est de " << tps * 2 << " franc(s)." << endl;
    }
    else if ((0 <= debut) and (debut < 7) and (7 <= fin) and (fin <= 17)) {
        cout << "Vous avez loué votre vélo pendant" <<  7 - debut << " heure(s) au tarif horaire de 1 franc(s)" << endl;
        cout << "Vous avez loué votre vélo pendant" << 17 - fin << " heure(s) au tarif horaire de 2 franc(s)" << endl;
        cout << "Le montant total à  payer est de " << (7 - debut) + 2 * (17 - fin) << " franc(s)." << endl;
    }
    else if ((0 <= debut) and (debut < 7) and (17 <= fin) and (fin <= 24)) {
        cout << "Vous avez loué votre vélo pendant" << 7 - debut + 17 - fin << " heure(s) au tarif horaire de 1 franc(s)" << endl;
        cout << "Vous avez loué votre vélo pendant" << 10 << " heure(s) au tarif horaire de 2 franc(s)" << endl;
        cout << "Le montant total à  payer est de " << (7 - debut + 17 - fin) + 2 * 10 << " franc(s)." << endl;
    }
    else if ((7 <= debut) and (debut < 17) and (17 <= fin) and (fin < 24)) {
        cout << "Vous avez loué votre vélo pendant" << 17 - debut  << " heure(s) au tarif horaire de 2 franc(s)" << endl;
        cout << "Vous avez loué votre vélo pendant" <<  24 -fin << " heure(s) au tarif horaire de 1 franc(s)" << endl;
        cout << "Le montant total à  payer est de " << (17 - debut) * 2 + (24 -fin) << " franc(s)." << endl;
    }

  return 0;

}