#include <iostream>
#include <array>
using namespace std;
  
constexpr size_t DIM(10);
  
bool remplitGrille(array<array<bool, DIM>, DIM>& grille,
                   unsigned int ligne, unsigned int colonne,
                   char direction, unsigned int longueur)
{
  int dx, dy;
  
  switch (direction) {
  case 'N': dx = -1; dy =  0; break;
  case 'S': dx =  1; dy =  0; break;
  case 'E': dx =  0; dy =  1; break;
  case 'O': dx =  0; dy = -1; break;
  }
  
  unsigned int i(ligne);     
  unsigned int j(colonne);   
  unsigned int l;             
  
  bool possible(true); 
  for (l = 0; (possible) and (i < grille.size()) and (j < grille[0].size()) 
         and (l < longueur);  ++l, i += dx, j += dy) {
    if (grille[i][j]) {
      possible = false;
    }
  }
  possible = possible and (l == longueur); 
  
  if (possible) {
    for (l = 0, i = ligne, j = colonne; l < longueur; 
         ++l, i += dx, j += dy) {
      grille[i][j] = true;
    }
  }
  
  return possible;
}
  
void initGrille(array<array<bool, DIM>, DIM>& grille) 
{
  for (auto& ligne : grille) 
    for (auto& cell : ligne) 
      cell = false;
}
  
void ajouterElements(array<array<bool, DIM>, DIM>& grille)
{
  int x, y;
  do {
    cout << "Entrez coord. x : ";
    cin >> x;
  
    if (x >= 0) {
      cout << "Entrez coord. y : ";
      cin >> y;
  
      if (y >= 0) {
  
        char dir;
        do {
          cout << "Entrez direction (N,S,E,O) : ";
          cin >> dir;
        } while ((dir != 'N') and (dir != 'S') and
                 (dir != 'E') and (dir != 'O'));
  
        cout << "Entrez taille : ";
        unsigned int l;
        cin >> l;
  
        cout << "Placement en (" << x << "," << y << ") direction "
             << dir << " longueur " << l << " -> ";
  
        if (remplitGrille(grille, x, y, dir, l))
          cout << "succès";
        else
          cout << "ECHEC";
        cout << endl;
  
      }
    }
  } while ((x >= 0) and (y >= 0));
}
void afficheGrille(const array<array<bool, DIM>, DIM>& grille)
{
  for (auto ligne : grille) {
    for (auto cell : ligne) {
      if (cell) cout << '#';
      else      cout << '.';
    }
    cout << endl;
  }
}
int main()
{
  array<array<bool, DIM>, DIM> grille;
  initGrille(grille);
  ajouterElements(grille);
  afficheGrille(grille);
  return 0;
}