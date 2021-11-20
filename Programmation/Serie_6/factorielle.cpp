#include <iostream>
using namespace std;

unsigned int factorielleIterative(unsigned int& n);
unsigned int factorielleRecursive(unsigned int& n);

int main () {
    unsigned int n(12);
    cout << factorielleIterative(n) << endl;
    cout << factorielleRecursive(n) << endl;
return 0;
}

unsigned int factorielleIterative(unsigned int& n) {
    int fact(1);
    for(int k(1); k <= n; k++){
        fact = fact * k;
    }
    n = fact;
return n;
}

unsigned int factorielleRecursive(unsigned int& n) {
    unsigned int factorial(n);
    if ((n == 0) or (n == 1)) {
        return(1);
    }
    else {
        return factorial * factorielleRecursive(factorial - 1);
    }
}