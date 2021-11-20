#include <iostream>
#include <vector>
using  namespace std;

double scalaire(vector<double>u, vector<double> v);

int main() {
    int n;
    cout << "Quelle sera la taille effective de vos deux vecteurs u et v ?" << endl;
    cin >> n;
    vector<double> u(n), v(n);
    for (int i(0); i < u.size(); ++i) {
        cout << "Choisissez une valeur pour u[" << i << "] !" << endl;
        cin >> u[i];
    }
    for (int i(0); i < v.size(); ++i) {
        cout << "Choisissez une valeur pour v[" << i << "] !" << endl;
        cin >> v[i];
    }
    cout << "Le produit scalaire de u et v est " << scalaire(u, v) << " !" << endl; 

return 0;
}

double scalaire(vector<double>u, vector<double> v) {
    double sca(0);
    for (int j(0); j < u.size(); ++j) {
        sca += u[j]*v[j];
    }
    return sca;
}