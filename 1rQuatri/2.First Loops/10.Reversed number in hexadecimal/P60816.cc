#include <iostream>
using namespace std;

int main() {

    //Pre: Input consists of a natural number
    //Post: Print, reversed, the hexadecimal representation of the number, with as many zeros at its left as required.

    int number;
      cin>>number;

      string numberString;

      if(number == 0) { numberString = "0"; }

      while(number>0) {
          int residu = number%16;
          string residuString;

          //Seria millor fer servir un switch case
          if(residu == 10) { residuString = "A"; }
          else if (residu == 11) { residuString = "B"; }
          else if (residu == 12) { residuString = "C"; }
          else if (residu == 13) { residuString = "D"; }
          else if (residu == 14) { residuString = "E"; }
          else if (residu == 15) { residuString = "F"; }
          else { numberString += to_string(residu); }

          numberString += residuString;
          number/=16;
      }

      cout<<numberString<<endl;

    return 0;
}
