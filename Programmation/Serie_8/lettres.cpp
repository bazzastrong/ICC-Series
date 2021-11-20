#include <iostream>
using namespace std;

void genere_lettre();

int main() {
genere_lettre();
return 0;
}

void genere_lettre() {
    bool genre(true);
    char destinataire, sujet, nom;
    int date_jour, date_mois;
    bool politesse(true);
    cout << "Voulez-vous écrire votre lettre à une demoiselle ?" << endl;
    cin >> genre;
    cout << "A qui vous adresserez-vous ?" << endl;
    cin >> destinataire;
    cout << "A quel sujet ?" << endl;
    cin >> sujet;
    cout << "Quel jour, de quel mois?" << endl;
    cin >> date_jour >> date_mois;
    cout << "Doit-on signer avec une marque de politesse ?" << endl;
    cin >> politesse;
    cout << "Par quel nom doit-on signer ?" << endl;
    cin >> nom;
    cout << "Bonjour ";
    if (genre) {
        cout << "chère ";
    }
    else {
        cout << "cher ";
    }
        cout << destinataire << ", " << endl
        << "Je vous écris à propos de votre" << sujet << "." << endl
        << "Il faudrait que nous nous voyons le" << date_jour << "/" << date_mois << " pour en discuter ensemble. " << endl
        << "Donnez-moi vite de vos nouvelles ! " << endl;
        if (politesse) {
            cout << "Sincèrement, ";
        }
        else {
            cout << "Amicalement, ";
        }
        cout << nom << "." << endl;
}