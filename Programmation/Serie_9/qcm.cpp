#include <iostream>
#include <vector>
using namespace std;

struct  QCM{
    string question;
    vector <string> reponses;
    int sol;
};
typedef vector<QCM> Examen;

void affiche(QCM qcm);
int demander_nombre(int a, int b);
int poser_question(QCM qcm);
Examen creer_examen();

int main(){
    Examen exam(creer_examen());
    int resultat(0);
    for (int i(0); i < exam.size(); ++i){
        if (poser_question(exam[i]) == exam[i].sol)
        ++resultat;
    }
    cout << "Vous avez répondu juste à " 
    << resultat << " questions ! votre note est de " << resultat << "/" << exam.size() << endl;
return 0;
}

void affiche(QCM qcm){
    cout << qcm.question << endl;
    for (int i(0); i < qcm.reponses.size(); ++i){
        cout << i + 1 << "- " << qcm.reponses[i] << endl;
    }
}

int demander_nombre(int a, int b){
    int res;
    do {
		cout << "Entrez un nombre entier ";
		if (a >= b)
			cout << "supérieur ou égal à  " << a;
		else
			cout << "compris entre " << a << " et " << b;
		cout << " : ";
		cin >> res;
    } while ((res < a) || ((a < b) & (res > b)));
return res;
}

int poser_question(QCM qcm){
    affiche(qcm);
return demander_nombre(1, qcm.reponses.size());
}

Examen creer_examen(){
    return {
      { "Combien de dents possède un éléphant adulte",
      { "32", "de 6 à 10", "beaucoup", "24", "2" },
      2
    },
    { "Laquelle des instructions suivantes est un prototype de fonction",
      { "int f(0);"     ,
        "int f(int 0);" ,
        "int f(int i);" ,
        "int f(i);"     },
      3
    },
    { "Qui pose des questions stupides",
      { "le prof. de math",
        "mon copain/ma copine",
        "le prof. de physique",
        "moi",
        "le prof. d'info",
        "personne, il n'y a pas de question stupide",
        "les sondages" } ,
      6 
    }
};
}