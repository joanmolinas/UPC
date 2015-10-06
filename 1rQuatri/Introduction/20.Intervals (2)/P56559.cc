#include <iostream>
using namespace std;

int main() {

    //Pre: L’entrada consisteix en quatre enters a1, b1, a2, b2 que representen els intervals [a1,b1] i [a2,b2]. Assumiu a1≤ b1 i a2≤ b2.
    //Post: Cal escriure ‘=’ si els intervals són iguals, ‘1’ si el primer es troba dins del segon (però no són iguals),
    //z ‘2’ si el segon es troba dins del primer (però no són iguals), o bé ‘?’ altrament.

    int a1, b1, a2, b2;
    char signeFinal;

    cin>>a1>>b1>>a2>>b2;

    if (b1 < a2 || a1 > b2) {
        signeFinal = '?';
    } else {
        if(a1==a2 and b1==b2) {
            signeFinal = '=';
        } else if(a1<=a2 and b1>=b2){
            signeFinal = '2';
        } else if (a1>=a2 and b1<=b2) {
            signeFinal = '1';
        }
        else {
            signeFinal = '?';
        }
    }

    cout<<signeFinal<<endl;

    return 0;
}
