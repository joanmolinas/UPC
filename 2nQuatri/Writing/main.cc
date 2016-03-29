#include <iostream>
#include <stack>
#include <sstream>
using namespace std;

void escriu_de_cim_a_base(stack<int>& pila) {
  stack<int> pila_aux = pila;
  bool first_elemement = true;
  while (!pila_aux.empty()) {
    if (!first_elemement) cout<<" ";
    else first_elemement = false;
    cout<<pila_aux.top();
    pila_aux.pop();
  }
  cout<<endl;
}

void escriu_de_base_a_cim(stack<int>& pila) {
  stack<int> copy = pila, aux;
  while (!copy.empty()) {
    aux.push(copy.top());
    copy.pop();
  }
  escriu_de_cim_a_base(aux);
}

stack<int> line_to_stack(string line) {
  istringstream iss(line);
  int n;
  stack<int> s;
  while (iss>>n) {
    s.push(n);
  }
  return s;
}

int main() {
  string s;
  while(getline(cin, s)) {
    stack<int> elements = line_to_stack(s);
    escriu_de_cim_a_base(elements);
    escriu_de_base_a_cim(elements);
  }
  return 0;
}
