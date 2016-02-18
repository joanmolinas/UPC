#include <iostream>
using namespace std;

int main() {

    //Pre: Input consists of a natural number
    //Post: Print, reversed, the binary representation of the number, with as many zeros at its left as required.

    int number;
    cin>>number;

    string numberString;

    if(number == 0) { numberString = "0"; }

    while(number>0) {
        numberString += to_string(number%2);
        number/=2;
    }
    

    cout<<numberString<<endl;
    return 0;
}
