#include <iostream>
using namespace std;

int main() {

    //Pre: Input consists of a natural number n.
    //Post: Print Hn with 4 digits after the decimal point.

    int n;
    double resultado = 0;
    cin>>n;

    for (double i=1; i<=n; i++) {
        resultado+=1/i;
    }
    cout<<fixed;
    cout.precision(4);
    cout<<resultado<<endl;


    return 0;
}
