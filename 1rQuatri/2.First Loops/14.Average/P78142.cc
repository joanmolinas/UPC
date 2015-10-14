#include <iostream>
using namespace std;

int main() {

    //Pre: Input consists of a non-empty sequence of strictly positive real numbers.
    //Post: Print the average of the numbers with 2 digits after the decimal point.

    int nums = 0;
    double suma = 0.0, num = 0.0;
    while (cin>>num) {
        suma+=num;
        nums++;
    }
    cout << fixed;
    cout.precision(2);
    cout<<suma/nums<<endl;


    return 0;
}
