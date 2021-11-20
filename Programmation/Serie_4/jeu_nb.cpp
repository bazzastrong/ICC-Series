#include <iostream>
using namespace std;

int main()
{
  int debut(0);
  do {
    cout << "de (>= 1) ? ";
    cin >> debut;
  } while (debut < 1);

  int fin(0);
  do {
    cout << "a (>= " << debut << ") ? ";
    cin >> fin;
  } while (fin < debut);
  
  for (int i(0), d(0); (debut + i) <= fin; ++i, d = 0) {
    int nb(debut +i);
    while (nb > 0) {
      if (nb % 3 == 0) {
        nb = nb + 4;
      }
      else if ((nb % 4 == 0) and (nb % 3 != 0)) {
        nb = nb / 2;
      }
      else {
        nb = nb - 1;
      }
      d++;
    }
    cout << debut + i << "->" << d << endl;
  }
  

  return 0;
}