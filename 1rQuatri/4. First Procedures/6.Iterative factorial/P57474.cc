#include <iostream>
using namespace std;

int factorial(int n) {
    int resultat = 1;
    //Invariant: n = n * n-1
    while(n > 0) {
        resultat *= n;
        n--;
    }


    return resultat;
}

int main() {

    //Pre: Calculate factorial from n number
    //Post: Print the factorial number.

    int n;
    cin>>n;
    cout<<factorial(n)<<endl;

    return 0;
}
