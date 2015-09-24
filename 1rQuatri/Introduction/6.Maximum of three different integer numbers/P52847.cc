#include <iostream>
using namespace std;

int main() {
  int n1, n2, n3, maxim;

  cin>>n1;
  cin>>n2;
  cin>>n3;

  if (n1 != n2 && n2 != n3) {
    maxim = max(n1, n2);
    maxim = max(maxim, n3);
    cout<<maxim<<endl;
  }

  return 0;
}
