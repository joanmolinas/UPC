#include <iostream>
#include <string>
using namespace std;

int main() {

    //Pre: Número natural n
    //Post: Cal escriure el nou temps definit per h, m i s més un segon en el format “HH:MM:SS”

    int hores, minuts, segons;

    cout.precision(2);

    cin>>hores>>minuts>>segons;
    segons += 1;

    if (segons == 60) {
        segons = 00;
        minuts += 1;

    }

    if (minuts == 60) {
        minuts = 0;
        hores += 1;
    }

    if (hores == 24) {
        hores = 0;
    }

    if (hores < 10) {
        cout<<"0";
    }

    cout<<hores<<":";

    if (minuts < 10) {
        cout<<"0";
    }

    cout<<minuts<<":";

    if (segons < 10 ) {
        cout<<"0";
    }

    cout<<segons<<endl;

    return 0;
}
