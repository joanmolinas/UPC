#include <iostream>
using namespace std;

const string CALOR = "fa calor\n";
const string FRED = "fa fred\n";
const string ESTABE = "s'esta be\n";
const string BULLIRIA = "l'aigua bulliria\n";
const string GELARIA = "l'aigua es gelaria\n";

int main() {
  //Pre: Llegeix els graus en Celsius
  //Post: Mostra si fa fred, calor o s'esta be i diu si l'aigua bullira o gelaria
  int graus;
  cin>>graus;

  string textFinal;

  if (graus>30) {
    textFinal += CALOR;
    if(graus>=100) {
      textFinal += BULLIRIA;
    }
  } else if(graus<10) {
    textFinal += FRED;
    if(graus<=0) {
      textFinal += GELARIA;
    }
  } else {
    textFinal += ESTABE;
  }

  cout<<textFinal;

  return 0;
}
