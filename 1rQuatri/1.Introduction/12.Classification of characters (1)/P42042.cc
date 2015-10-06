#include <iostream>
using namespace std;

const string ESMAJUSCULA = "uppercase\n";
const string ESMINUSCULA = "lowercase\n";
const string ESVOCAL = "vowel";
const string ESCONSONANT = "consonant";

int main() {

    //Pre: Llegir de teclat una lletra
    //Post: Escriure la lletra majúscula o minúscula i si es consonant o vocal

    char lletra;
    cin>>lletra;

    string textFinal;

    if (isupper(lletra)) {
        textFinal += ESMAJUSCULA;
    } else {
        textFinal += ESMINUSCULA;
    }

    char lletraEnMinuscula = tolower(lletra);
    bool esVocal = (lletraEnMinuscula == 'a') or (lletraEnMinuscula == 'e') or (lletraEnMinuscula == 'i') or (lletraEnMinuscula == 'o') or (lletraEnMinuscula == 'u');

    if (esVocal) {
        textFinal += ESVOCAL;
    } else {
        textFinal += ESCONSONANT;
    }

    cout<<textFinal<<endl;
    return 0;
}
