#include <iostream>
using namespace std;

int main() {

    //Pre: Input consists of a natural number n between 1 and 9.
    //Post: Print the “multiplication table” of n.

    int n;
    cin>>n;

    for(int i = 1; i<=10; i++){
        cout<<n<<"*"<<i<<" = "<<n*i<<endl;
    }

    return 0;
}
