#include <iostream>
using namespace std;

bool nextToken(string const& str, int& len);

int main() {
    string phrase;
    int from, len;
    cout << "Entrez une phrase !" << endl;
    getline(cin, phrase);
    nextToken(phrase, len);
return 0;
}

bool nextToken(string const& str, int& len) {
    len = str.length();
    char separator(' ');
    for (int i(0); i < len; ++i) {
        if (str[i] != separator) {
            cout << str[i];
        }
        else {
            cout << endl;
        }
    }
return true;
}