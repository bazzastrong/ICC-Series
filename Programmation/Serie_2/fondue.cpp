#include <iostream>
using namespace std;
int main() {
    const int Base(4);
    double fromage(800.0);
    double eau(2.0);
    double ail(2.0);
    double pain(400.0);
    int nb_convives;
    cout << "Combien de convives serotn à votre table ce soir ?" << endl;
    cin >> nb_convives;
    fromage  = fromage * nb_convives / Base;
    eau = eau * nb_convives / Base;
    ail = ail * nb_convives / Base;
    pain = pain * nb_convives / Base;
    cout << "Pour faire une fondue fribourgeoise pour " << nb_convives << "personnes, il vous faut :" << endl;
    cout << "- "<< fromage << " gr de Vacherin fribourgeois" << endl;
    cout << "- " << eau << "dl d'eau" << endl;
    cout << "- " << ail <<"gousse(s) d'ail" << endl;
    cout << "- " << pain << "gr de pain" << endl;
    cout << "- du poivre à volonté" << endl;

    return 0;
    
}