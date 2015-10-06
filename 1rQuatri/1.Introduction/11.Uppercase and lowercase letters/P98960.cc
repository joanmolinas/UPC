#include <iostream>
using namespace std;

int main() {

  //Pre: Llegir de teclat una lletra
  //Post: Escriure la lletra majúscula o minúscula

  char lletra;
  cin>>lletra;

  lletra = (isupper(lletra)) ? tolower(lletra) : toupper(lletra);

  cout<<lletra<<endl;
  return 0;
}
