#include <iostream>
using namespace std;

int main() {

    //Pre: Input consists of two integer numbers x and y.
    //Post: Print all integer numbers between x and y (or between y and x), in decreasing order.

    int n1, n2, minim, maxim;
    cin>>n1>>n2;

    minim = min(n1, n2);
    maxim = max(n1, n2);

    while(maxim >= minim) {
        cout<<maxim--<<endl;
    }

    return 0;
}
