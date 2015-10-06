#include <iostream>
using namespace std;

int main() {

    //Pre: L’entrada consisteix en quatre enters a1, b1, a2, b2 que representen els intervals [a1,b1] i [a2,b2]. Assumiu a1≤ b1 i a2≤ b2.
    //Post: Cal escriure “[]” si els intervals no tenen intersecció, o bé “[x,y]” si aquesta és la seva intersecció no buida.

    int a1, b1, a2, b2;

    cin>>a1>>b1>>a2>>b2;

    if (b1 < a2 || a1 > b2) {
        cout<<"[]"<<endl;
    } else {
        int maxA, maxB;

        if(a1 >= a2) maxA = a1;
        else maxA = a2;

        if(b1 >= b2 ) maxB = b2;
        else maxB = b1;

//        maxA = (a1>=a2) ? a1 : a2;
//        maxB = (b1>=b2) ? b2 : b1;


        cout<<"["<<maxA<<","<<maxB<<"]"<<endl;
    }

    return 0;
}
