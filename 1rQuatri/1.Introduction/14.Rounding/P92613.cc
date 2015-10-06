#include <iostream>
using namespace std;

int main() {

    //Pre: L’entrada consisteix en un real x ≥ 0.
    //Post: Escriviu la part entera inferior de x, la part entera superior de x, i l’enter més proper a x (⌈ x ⌉ en cas d’empat).

    double numero;
    int entera, enteraSuperior, arrodoniment;

    cin>>numero;

    entera = (int)numero;
    enteraSuperior = entera;
    arrodoniment = entera;

    double decimals = numero - entera;
    if (decimals != 0) {
        enteraSuperior += 1;
    }

    if (decimals >= 0.5) {
        arrodoniment += 1;
    }

    cout<<entera<<" "<<enteraSuperior<<" "<<arrodoniment<<endl;

    return 0;
}
