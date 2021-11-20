#include <iostream>
using namespace std;

int echange(int& i, int& j);
double echange(double&i, double&j);
char echange(char& i, char&j);

int main() {
    int    i(10),      j(55);
    char   a('B'),     b('a');
    double x(3.14159), y(1.414);
 
    cout << "Avant: i=" << i << " et j=" << j << endl;
    echange(i,j);
    cout << "Après: i=" << i << " et j=" << j << endl << endl;
 
    cout << "Avant: a=" << a << " et b=" << b << endl;
    echange(a,b);
    cout << "Après: a=" << a << " et b=" << b << endl << endl;
 
    cout << "Avant: x=" << x << " et y=" << y << endl;
    echange(x,y);
    cout << "Après: x=" << x << " et y=" << y << endl;
 
    return 0;
}

int echange(int& i, int& j) {
    int z(i);
    i = j;
    j = z;
return i, j;
}
double echange(double& i, double& j) {
    double z(i);
    i = j;
    j = z;
return i, j;
}
char echange(char&i, char&j) {
    char z(i);
    i=j;
    j=z;
return i, j;
}