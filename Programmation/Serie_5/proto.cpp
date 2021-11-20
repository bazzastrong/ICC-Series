#include <iostream>
using namespace std;


int f;
int nb;
int demander_nb(int nb);

int main(){
    f = demander_nb(nb);
    cout << "Vous avez choisi le nombre " << f << " !" <<endl;
return 0;
}

int demander_nb(int nb) {
    do {
        cout << "Choisissez un nombre enier compris entre les bornes 0 et 10 !" << endl;
        cin >> nb;
    } while ((nb < 0) and (nb > 10));

return nb;
}