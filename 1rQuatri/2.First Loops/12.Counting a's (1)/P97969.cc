#include <iostream>
using namespace std;

const char CARACTER = 'a';

int main() {

    //Pre: Input consists of a sequence of characters ended in a period.
    //Post: Print the number of times that ‘a’ appears in the sequence.

    string texto;
    getline(cin, texto);

    int nAs = 0;

    for (int i = 0; i < texto.length(); i++) {
        if(texto[i] == CARACTER) {
            nAs++;
        }
    }

    cout<<nAs<<endl;

    return 0;
}
