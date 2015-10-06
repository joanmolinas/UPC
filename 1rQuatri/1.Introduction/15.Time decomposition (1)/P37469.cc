#include <iostream>
using namespace std;

int main() {

    //Pre: Número natural n
    //Post: Escriviu tres naturals h, m, s tals que 3600h+60m+s=n, amb m<60 i s<60

    int temps = 0;

    cin>>temps;

    int hores, minuts, segons;
    hores = minuts = segons = 0;

    hores = temps/3600;
    minuts = (temps - hores*3600)/60;
    segons = temps - hores*3600 - minuts*60;

    cout<<hores<<" "<<minuts<<" "<<segons<<endl;

    return 0;
}
