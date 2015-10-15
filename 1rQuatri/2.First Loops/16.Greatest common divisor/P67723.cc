#include <iostream>

using namespace std;

int main() {


    int a, b, resultat, copyA, copyB;
    cin>>a>>b;
    copyA = a;
    copyB = b;

    while (a!=b) {
        if (a > b) {
            a = a-b;
        } else {
            b = b-a;
        }
    }
    resultat = a;

    cout<<"The gcd of "<<copyA<<" and "<<copyB<<" is "<<resultat<<"."<<endl;
    return 0;
}
