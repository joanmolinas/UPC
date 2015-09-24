#include <iostream>
using namespace std;

int main() {
  int n1, n2, maxim;

  cin>>n1;
  cin>>n2;

  if (n1>=n2) {
    maxim = n1;
  } else {
    maxim = n2;
  }

  cout<<maxim<<endl;
  return 0;
}
