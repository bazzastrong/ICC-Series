#include <iostream>
#include <vector>
#include <utility> // pour swap
using namespace std;

typedef int type_el;
typedef vector<type_el> Tableau;

void affiche(const Tableau&  tab)
{
    for (auto el : tab) cout << el << " ";
}

void tri_bulle(Tableau& tab)
{
    const size_t k(tab.size()-1);
    for (size_t i(0); i < k; ++i) {
        for (size_t j(k); j > i; --j) {
            if (tab[j-1] > tab[j]) {
                swap(tab[j-1], tab[j]);
                // affiche(tab);
            }
        }
    }
}

int main()
{
    Tableau tab = { 3, 5, 12, -1, 215, -2, 17, 8, 3,
                    5, 13, 18, 23, 5, 4, 3, 2, 1
                  };
    cout << "A trier  : ";
    affiche(tab);
    cout << endl;
    tri_bulle(tab);
    cout << "Résultat : ";
    affiche(tab);
    cout << endl;
    return 0;
}