#include <iostream>
using namespace std;

int main () {
    int n;
    cout << "Combien de lignes souhaitez vous que votre triangle fasse ?" << endl;
    cin >> n;
   for (int i(1), k(0); i<=n; i++, k=0) {
      for (int j=1; j<=n-i; j++ )
      cout << "  ";
      for (int k(0); k!= 2*i -1; ++k) {
        cout << "* ";
      }
      cout << endl;
    }

return 0;
}