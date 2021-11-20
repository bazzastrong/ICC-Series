#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<bool> supprimes(100,false); // array<bool,100> serait une bonne option

    supprimes[0] = true;   // 0 n'est pas premier
    supprimes[1] = true;   // 1 n'est pas premier

    for(size_t i(2); i < supprimes.size(); ++i) {
        if (not supprimes[i]) {
            size_t multiple(2 * i);
            while (multiple < supprimes.size()) {
                supprimes[multiple] = true;
                multiple = multiple + i;
            }
        }
    }

    for(size_t i(0); i <  supprimes.size(); ++i) {
        if (not supprimes[i]) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}