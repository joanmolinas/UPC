#include <iostream>
using namespace std;

int main() {

    //Pre: Input consists of a natural number
    //Post: Print the number of digits of n.
    //Invariant: maxim conté el número de paraules  de la seqüència.

    string paraula, primeraParaula;
    int contador = 1, maxim = 1;
    cin>>primeraParaula;

    while (cin>>paraula) {
        if (paraula == primeraParaula) {
            contador++;
        } else {
            contador = 0;
        }

        if(contador > maxim ){
            maxim = contador;
        }
    }

    cout<<maxim<<endl;

    return 0;
}
