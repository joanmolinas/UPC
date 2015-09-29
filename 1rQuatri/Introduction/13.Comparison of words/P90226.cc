#include <iostream>
using namespace std;

int main() {

    //Pre: L’entrada consisteix en dues paraules amb lletres minúscules a i b.
    //Post: Escriviu una línia indicant si a < b, a > b o a = b, seguint exactament el format dels exemples.

    string a, b;
    char simbol;

    cin>>a>>b;

    if (a.compare(b) == 0) {
        simbol = '=';
    } else if(a.compare(b) > 0) {
        simbol = '>';
    } else {
        simbol = '<';
    }

    cout<<a<<" "<<simbol<<" "<<b<<endl;
    return 0;
}
