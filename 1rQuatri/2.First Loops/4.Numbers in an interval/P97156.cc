#include <iostream>
using namespace std;

int main() {

    //Pre: Input consists of two natural numbers a and b
    //Post: Print a line with a,a+1,…,b−1,b. Separate the numbers with commas.

    int n1, n2;
    cin>>n1>>n2;

    while (n1<=n2) {
        cout<<n1;

        if(n1<n2) cout<<",";
        n1++;
    }

    cout<<endl;

    return 0;
}
