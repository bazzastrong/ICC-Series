#include <iostream>
using namespace std;

int main() {
    int age;
    int annee;
    cout << "Quel âge avez-vous?" 
         << endl;
    cin >> age;
    annee = int(2021 - age);
    cout << "Vous avez " 
         << age 
         << " et vous êtes né en " 
         << annee 
         << endl;
    return 0;
    }

