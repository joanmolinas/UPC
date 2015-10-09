#include <iostream>
using namespace std;

int main() {

    //Pre: Input consists of a natural number n.
    //Post: Print a line with 0^3,1^3,…,(n−1)^3,n^3. Separate the numbers with commas.

    int n;
    cin>>n;

    for(int i = 0; i<=n; i++){
        cout<<i*i*i;
        if(i!=n) cout<<",";
        else cout<<endl;
    }
    return 0;
}
