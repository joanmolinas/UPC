#include <iostream>
using namespace std;

int main() {

    //Pre: Input consists of a natural number n.
    //Post: Print in order all natural numbers between 0 and n.

    int number;
    cin>>number;

    for (int i = 0; i<=number; i++) {
        cout<<i<<endl;
    }

    return 0;
}
