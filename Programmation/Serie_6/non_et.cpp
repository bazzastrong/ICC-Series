#include <iostream>
using namespace std;

bool non_et(bool A, bool B);
bool not_one(bool A);
bool et(bool A, bool B);
bool ou(bool A, bool B);


int main(){
  bool A, B;
  cout << "Choisissez deux valeurs pour A et B" << endl;
  cin >> A >> B;
  cout << et(A, B);
  cout << ou(A,B) << endl;
return 0;
}

bool non_et(bool A, bool B) {
  return not(A and B);
}

bool not_one(bool A) {
  return non_et(A, true);
}

bool et(bool A, bool B) {
  return not(non_et(A, B));
}

bool ou(bool A, bool B) {
  return not(not(non_et(not A, not B)));
}