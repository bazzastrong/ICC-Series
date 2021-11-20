#include <iostream>
#include <math.h>
using namespace std;

double factorielle(int& k);

int main () {
    int x(5);
    factorielle(x);
    cout << x << endl;
return 0;
}

double factorielle(int& k) {
    for (int i(2); i <= k; ++i) {
        k *= i;
    }
return k;
}