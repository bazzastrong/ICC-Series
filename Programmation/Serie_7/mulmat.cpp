#include <iostream>
#include <vector>
using namespace std;

vector<vector<double>> lire_matrice();
vector<vector<double>> multiplication(const vector<vector<double>>& Mat1,
                                        const vector<vector<double>>& Mat2);
void  affiche_matrice(const vector<vector<double>> M);

int main() {
    int ligne, colonne;
    vector<vector<double>> Mat1(ligne, vector<double> (colonne));
    vector<vector<double>> Mat2(ligne, vector<double> (colonne));
    cout << "Choisissez comment va s'organiser votre première matrice !" << endl;
    Mat1 = lire_matrice();
    Mat2 = lire_matrice();
    if (Mat1.size() != Mat2[0].size()) {
        cout << "Vos deux matrices ne sont pas compatibles..." << endl;
        return 0;
    }
    multiplication(Mat1, Mat2);
return 0;
}

vector<vector<double>> lire_matrice() {
    int n, m;
    cout << "Combien de lignes aurezvous dans votre matrice ? Combien de colonnes ?" << endl;
    cin >> n >> m;
    vector<vector<double>> u(n, vector<double> (m));
    for (int j(0); j < n; ++j) {
        for (int i(0); i < m; ++i) {
            cout << "Choisissez une valeur pour u[" << i+1 << "] !" << endl;
            cin >> u[j][i];
        }
    }
return u;
}

vector<vector<double>> multiplication(const vector<vector<double>>& Mat1,
                                        const vector<vector<double>>& Mat2) {
    vector<vector<double>> x(Mat1.size(), vector<double>(Mat2[0].size()));
    for (int i(0); i < Mat1.size(); ++i) {
        for (int j(0); j < Mat2[0].size(); ++j) {
            for (size_t k(0); k < Mat2.size(); k++)
                x[i][j] += Mat1[i][k] * Mat2[k][j];
        
        }
    }
    for (int j(0); j < Mat1.size(); ++j) {
        for (int i(0); i < Mat2[0].size(); ++i) {
            cout << x[i][j];
        }
        cout << " " << endl;
    }
return x;
}
