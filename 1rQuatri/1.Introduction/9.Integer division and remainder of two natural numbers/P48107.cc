#include <iostream>
using namespace std;

int main() {
  //Pre: Llegir 2 (a i b) nombres amb b > 0
  //Post: Mostrar la divisió i el residu

  int a, b;
  cin>>a>>b;

  int cocient = 0, residu = 0;
  if (b>0) {
    cocient = a/b;
    residu = a%b;
  }

  cout<<cocient<<" "<<residu<<endl;

  return 0;
}
