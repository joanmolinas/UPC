#include <iostream>
using namespace std;

int main() {

    //Pre: L’entrada consisteix en un natural entre 1800 i 9999.
    //Post: Si l’any és de traspàs, cal escriure “YES”, altrament cal escriure “NO”.

    int any;
    cin>>any;

    if ((any%4 == 0 and any%100!=0) or any%400 == 0) {
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }

    return 0;
}
