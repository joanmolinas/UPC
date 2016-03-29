#include <iostream>
#include <stack>
#include <sstream>
using namespace std;

int calculate(int a, int b, string operacio) {
  int resultat = 0;
  if (operacio == "+") {
    resultat = a+b;
  } else if(operacio == "-") {
    resultat = a-b;
  } else if(operacio == "*") {
    resultat = a*b;
  }
  return resultat;
}

int parse_expression(string expression) {
  istringstream iss(expression);
  string s;

  stack<int> pila;

  while(iss>>s) {
    if(s == "+" || s == "-" || s == "*") {
      int a = pila.top();
      pila.pop();
      int b = pila.top();
      pila.pop();
      pila.push(calculate(b,a,s));
    } else {
      int num = stoi(s);
      pila.push(num);
    }
  }
  return pila.top();
}

int main() {
  string s;
  while(getline(cin, s)) {
    cout<<parse_expression(s)<<endl;
  }
}
