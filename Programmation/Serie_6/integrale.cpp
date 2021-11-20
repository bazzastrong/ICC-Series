#include <iostream>
#include <cmath>
using namespace std;

double f(double n);
double integrale(double a, double b);
void bornes(double& a, double& b);

int main() {
    double a, b;
    bornes(a, b);
    cout << "L'intégrale de la fonction "<< f << " des bornes " << a << " et " << b << " est " << integrale(a, b) << endl;
return 0;
}

double f(double n) {
    double fun;
    fun = 1 / n; 
return fun;
}

double integrale(double a, double b) {
    double integ;
    integ = ((b-a)/840) * (41 * f(a) + 216 * f((5*a + b)/ 6) + 27 * f((2*a + b) / 3) + 272 * f((a + b)/ 2) + 27 * f((a + 2*b)/3) + 216*f((a + 5*b)/6) +41 *f(b));
return integ;
}

void bornes(double& a, double& b) {
    cout << "D'où à où souhaitez-vous calculez votre intégrale ?" << endl;
    cin >> a >> b;
return;
}
