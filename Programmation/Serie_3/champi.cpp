#include <iostream>
using namespace std;
int main() {
int Q1, Q2, Q3, Q4, Q5, Q6;    
cout << "Pensez à  un champignon : amanite tue-mouches, pied bleu, girolle, cépe de Bordeaux, coprin chevelu ou agaric jaunissant." << endl;
  cout << "Est-ce que votre champignon a un anneau (1 : oui, 0 : non) ? ";
  cin >> Q1;
  if (Q1 == 1) {
    cout << "Est-ce que votre champignon a un chapeau convexe (1 : oui, 0 : non) ? ";
    cin >> Q2;
    if (Q2 == 1) {
      cout << "Est-ce que votre champignon vit en forêt (1 : oui, 0 : non) ? ";
      cin >> Q3;
      if (Q3 == 1) {
        cout << "Votre champignon est l'amanite tue-mouches" << endl;
      }
      else {
        cout << "Votre champignon est l'agaric jaunissant" << endl;
      }
    }
    else {
      cout << "Votre champignon est le coprin chevelu" << endl;
    }
  }
  else {
    cout << "Est-ce que votre champignon a un chapeau convexe (1 : oui, 0 : non) ? " << endl;
    cin >> Q4;
    if (Q4 == 1) {
        cout << "Votre champignon est le pied bleu" << endl;
    }
    else {
      cout << "Est-ce que votre champignon a des lamelles (1 : oui, 0 : non) ? " << endl;
      cin >> Q5;
      if (Q5 == 1) {
        cout << "Votre champignon est la girolle" << endl;
    }
      else {
        cout << "Votre champignon est la cèpe" << endl;
      }
    }
  }
return 0;
}