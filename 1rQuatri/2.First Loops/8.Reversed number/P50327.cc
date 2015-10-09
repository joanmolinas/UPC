#include <iostream>
using namespace std;

int main() {

    //Pre: Input consists of a natural number
    //Post: Print the number reversed, with as many zeros at its left as it has at its right.

    int number;
    cin>>number;

    string numberString = to_string(number);
    for (int i = 0; i < numberString.length()/2; i++) {
        char aux = numberString[i];
        numberString[i] = numberString[numberString.length()-i-1];
        numberString[numberString.length()-i-1] = aux;
    }

    cout<<numberString<<endl;

//    - Do the same but unless eficient
//
//    string numberString = to_string(number);
//    string reverse;
//
//    for (int i = 0; i <= numberString.length(); i++) {
//        reverse+=numberString[numberString.length()-i-1];
//    }
    return 0;
}
