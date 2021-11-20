#include <iostream>
using namespace std;

int main() {
    int argent_recu;
    int argent_eco;
    int argent_autre;
    double arg_reste;
    int reste;
    int nb_sat;
    int nb_flash;
    int nb_metro;
    int reste_fleurs;
    cout << "Quelle somme votre tante vous a-t-elle envoyé ?" << endl;
    cin >> argent_recu;
    argent_eco = argent_recu * 0.75;
    cout << "Vous avez mis de côté " << argent_eco << endl;
    argent_autre = (argent_recu - argent_eco) / 3;
    nb_sat = argent_autre / 2;
    nb_flash = argent_autre / 4;
    nb_metro = argent_autre / 3;
    reste = (argent_recu - argent_eco) % 3 + 3 * argent_autre - (3 * nb_metro + 2 * nb_sat + 4 * nb_flash);
    cout << "Vous pouvez ensuite acheter : " << endl;
    cout << "- " << nb_sat << " cafés à Sat" << endl;
    cout << "- " << nb_flash << " numéros de FLash" << endl;
    cout << "- " << nb_metro << " tickets de métro" << endl;
    cout << " Et " << reste << " Francs pour des fleurs pour maman !" << endl;

    return 0;
}