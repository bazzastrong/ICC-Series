#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if ((n < 0) and (n != 0)) {
        cout << "Votre nombre est négatif !" << endl;
        if (n % 2 == 0) {
            cout << "Votre nombre est pair !" << endl;
        }
        else {
            cout << "Votre nombre est impaire !" << endl;
        }
    }
    else if (n == 0) {
        cout << "Votre nombre est 0 !" << endl;
    }
    else {
        cout << "Votre nombre est positif !" << endl;
        if (n % 2 == 0) {
            cout << "Votre nombre est pair !" << endl;
        }
        else {
            cout << "Votre nombre est impaire !" << endl;
        }
    }
    
    return 0;
}