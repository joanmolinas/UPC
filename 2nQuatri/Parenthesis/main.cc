#include <iostream>
#include <sstream>
#include <stack>
#include <map>
using namespace std;

bool check_expression(string expression) {

  istringstream iss(expression);
  stack<char> pila;

  map<char, char> right_opossite;
  right_opossite.insert(pair<char,char>(')','('));
  right_opossite.insert(pair<char,char>(']','['));

  char c;
  bool correcta = true;

  while(iss>>c && correcta) {
    if (c == '(' || c == '[') {
        pila.push(c);
    } else if (!pila.empty() && pila.top() == right_opossite[c]) {
        pila.pop();
    } else {
      correcta = false;
    }
  }

  return pila.empty() && correcta;
}

int main(){

  string s;
  while(getline(cin, s)) {

    bool is_correct = check_expression(s);
    if (is_correct) {
      cout<<s<<" es correcta"<<endl;
    } else {
      cout<<s<<" es incorrecta"<<endl;
    }
  }
  return 0;
}
