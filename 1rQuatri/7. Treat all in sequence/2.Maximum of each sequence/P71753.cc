#include <iostream>
using namespace std;

int main() {

    //Pre: Input consists of a natural number
    //Post: Print the number of digits of n.
    //Invariant: maxim conté el número màxim de la seqüència.
    int x = 0;
    while (cin>>x) {
      int maxim;
      cin>>maxim;
      for (int i = 1; i < x; i++) {
        int num;
        cin>>num;
        if (num > maxim) {
          maxim = num;
          }
        }
        cout<<maxim<<endl;
       }
       return 0;
}
