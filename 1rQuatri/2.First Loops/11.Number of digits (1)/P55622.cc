#include <iostream>
using namespace std;

int main() {

    //Pre: Input consists of a natural number
    //Post: Print the number of digits of n.

    int number, digits = 0;
    cin>>number;
    int copyNumber = number;

    if(number == 0) { digits = 1; }
    while(number>0) {
        digits++;
        number/=10;
    }

    cout<<"The number of digits of "<<copyNumber<<" is "<<digits<<"."<<endl;

    return 0;
}
