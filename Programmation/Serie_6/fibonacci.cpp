#include <iostream>
using namespace std;

unsigned int fibonacci(unsigned int n);

int main() {
    unsigned int n;
    int somme;
    cout << "Jusqu'à quel chiffre souhaitez-vous calculer la suite de Fibonacci ?" << endl;
    cin >> n;
    somme = fibonacci(n);
    cout << "La somme de la suite de Fibonacci jusqu'à la valuer " << n << " est " << somme <<endl;
return 0;
}

unsigned int fibonacci(unsigned int n) {
    if (n == 0) {
        return 0;
    }
    else if (n == 1) {
        return 1;
    }
    else {
        return fibonacci(n-1) + fibonacci(n-2);
    }

}