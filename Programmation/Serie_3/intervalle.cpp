#include <iostream>
using namespace std;

int main() {
    double x;
    cout << "Choisissez un réel x !" << endl;
    cin >> x;
    if ((x >= -1) and (x < 1)){
        cout << "Votre réel appartient à l'ensemble I !" << endl;
    }
    else {
        cout << "Votre réel n'appartient pas à l'ensemble I..." << endl;
    }

    return 0;
}