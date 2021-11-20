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
bool poser_question(QCM qcm);
void creer_examen(Examen exam);

int main(){
    Examen exam;
    creer_examen(exam);
    int resultat(0);
    bool score(false);
    for (int i(0); i < exam.size(); ++i){
        poser_question(exam[i]);
        if (score) {
            resultat += 1;
        }
    }
    cout << "Vous avez répondu juste à " 
    << resultat << "questions ! votre note est de " << resultat << "/" << exam.size() << endl;
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

bool poser_question(QCM qcm){
    int res;
    bool score(false);
    affiche(qcm);
    demander_nombre(1, qcm.reponses.size());
    cout << res << endl;
    if (res == qcm.sol) {
        score = true;
    }
return score;
}

void creer_examen(Examen exam){
    exam[0] = { "Combien de dents possède un éléphant adulte",
      { "32", "de 6 à 10", "beaucoup", "24", "2" },
      2
    },
    exam[1] = { "Laquelle des instructions suivantes est un prototype de fonction",
      { "int f(0);"     ,
        "int f(int 0);" ,
        "int f(int i);" ,
        "int f(i);"     },
      3
    },
    exam[3] ={ "Qui pose des questions stupides",
      { "le prof. de math",
        "mon copain/ma copine",
        "le prof. de physique",
        "moi",
        "le prof. d'info",
        "personne, il n'y a pas de question stupide",
        "les sondages" } ,
      6 
    };
}