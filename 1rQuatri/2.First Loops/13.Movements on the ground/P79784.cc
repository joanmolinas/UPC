#include <iostream>
using namespace std;

const char NORTE = 'n';
const char SUR = 's';
const char ESTE = 'e';
const char OESTE = 'w';

int main() {

    //Pre: Input consists of a sequence of characters ‘n’, ‘s’, ‘e’, or ‘w’.
    //Post: Print the final position of an object initially located at (0, 0).

    string coordenadas;
    cin>>coordenadas;

    int esteOeste = 0, norteSur = 0;

    for (int i = 0; i<coordenadas.length(); i++) {
        char coordenada = coordenadas[i];

        if (coordenada == NORTE) norteSur-=1;
        else if(coordenada == SUR) norteSur+=1;
        else if(coordenada == ESTE) esteOeste+=1;
        else if (coordenada == OESTE) esteOeste-=1;
    }

    cout<<"("<<esteOeste<<", "<<norteSur<<")"<<endl;

    return 0;
}
