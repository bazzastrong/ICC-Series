#include <iostream>
using namespace std;

void etoiles(int nb_etoiles);
void espaces(int nb_espaces);

int main () {
    int n, f, g, j, k;
    int nb_etoiles, nb_espaces, total(total = nb_etoiles + nb_espaces);
    cout << "Combiens de lignes souhaitez vous que votre sapin fasse ?" << endl;
    cin >> n;
    for (int k(0); k<n; ++k) {
      for (int j(1);j <= n; ++j) {
        nb_espaces = 2*n - j - k;
        nb_etoiles = 2*(j +k) -1;
        espaces(nb_espaces);
        etoiles(nb_etoiles);
        cout << endl;
    }
  }
  for (int w(0); w<n+1; ++w) {
    cout << " ";
  }
  cout << "|||" << endl;
    
return 0;
}

void etoiles(int nb_etoiles)
{
  for(int i(0); i != nb_etoiles; ++i) {
    cout << '*';
  }
}
 
void espaces(int nb_espaces)
{
  for(int i(0); i < nb_espaces; ++i) {
    cout << ' ';
  }
}