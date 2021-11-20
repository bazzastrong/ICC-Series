#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
  cout << setprecision(4);

  double taux_croissance_lapins(0.3);
  double taux_attaque(0.01);
  double taux_croissance_renards(0.008);
  double taux_mortalite(0.1);
  int duree(50);

  double renards_i(0.0);
  double lapins_i(0.0);

  do{
      cout << "Combien de renards au départ (>= 2) ? " << endl;
      cin >> renards_i;
    } while (renards_i < 2);

  do{
      cout << "Combien de lapins au départ  (>= 5) ? " << endl;
      cin >> lapins_i;
    } while (lapins_i < 5);

    do{
        cout << "taux d'attaque au départ en % (entre 0.5 et 6) ? " << endl;
        cin >> taux_attaque ;
    } while ((taux_attaque < 50) and (taux_attaque > 600));

    do{
        cout << "taux d'attaque à la fin en % (entre 0.5 et 6) ? " << endl;
        cin >> taux_attaque ;
    } while ((taux_attaque < 50) and (taux_attaque > 600));

    for (int i(1); taux_attaque + i < 600; i++) {
        cout <<  endl << "***** Le taux d'attaque vaut "<< taux_attaque << "%" <<  endl;
        cout << "Sur combien de temps souhaitez-vous monitorez la population ?" << endl;
        cin >> duree;
        bool nb1(true);
        bool nb2(true);
        bool nb3(true);
        taux_attaque = taux_attaque / 100;
        for (int i(1); i <= duree; ++i) {
            int nb_renards(renards_i);
            int nb_lapins(lapins_i);
            lapins_i = lapins_i * (1.0 + taux_croissance_lapins - (taux_attaque * nb_renards));
            renards_i = renards_i * (1.0 + (taux_attaque * nb_lapins * taux_croissance_renards) - taux_mortalite);
            nb_renards = renards_i;
            nb_lapins = lapins_i;
            if (lapins_i < 5) {
                nb1 = false;
            }
            if (renards_i < 5) {
                nb2 = false;
            }
            if ((lapins_i < 2) or (renards_i < 2)){
                nb3 = false;
                break;
            }
            if ((lapins_i == 0) or (renards_i == 0)){
                break;
            }
        
        }
        if (nb1 == false) {
            cout << "Les lapins ont été en voie d'extinction" << endl;
            if (lapins_i > 5){
                cout << "mais la population est remontée ! Ouf !" << endl;
            }
            if (nb3 == false) {
                cout << "et les lapins ont disparu :-(" << endl;
            }
        }
        else if (nb2 == false) {
            cout << "Les renards ont été en voie d'extinction" << endl;
            if (renards_i > 5) {
                cout << "mais la population est remontée ! Ouf !" << endl;
            }
            if (nb3 == false) {
                cout << "et les renards ont disparu :-(" << endl;
            }
        }
        else {
            cout << "Les lapins et les renards ont des populations stables." << endl;
        }
        cout << "Après " << duree <<" mois, il y a  " << lapins_i << " lapins et " << renards_i << "renards" << endl;
    }
return 0;
}