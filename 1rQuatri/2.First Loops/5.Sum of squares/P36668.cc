#include <iostream>
using namespace std;

int main() {

    //Pre: Input consists of a natural number n
    //Post: The summation has a closed formula, so a loop would not be necessary to solve this exercise.

    int n, resultado = 0;
    cin>>n;

    for(int i = 1; i<=n; i++){
        resultado += i*i;
    }
    cout<<resultado<<endl;
    return 0;
}
