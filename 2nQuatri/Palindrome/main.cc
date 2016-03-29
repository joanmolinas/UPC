#include <iostream>
#include <stack>
#include <sstream>
using namespace std;

struct stack_extended {
  int n_elements;
  stack<int> elements;
};

bool is_palindrome(stack_extended s) {
  if (s.elements.empty()) return true;
  bool trobat = false;
  stack<int> aux, elements = s.elements;

  for (int i = 0; i < s.n_elements; i++) {
    aux.push(elements.top());
    elements.pop();
  }

  while (!trobat && (!aux.empty() && !s.elements.empty())) {
    if (aux.top() != s.elements.top()) trobat = true;
    
    aux.pop();
    s.elements.pop();
  }

  return !trobat;
}

stack_extended line_to_stack(string line) {
  istringstream iss(line);
  int n, n_elements = 0;
  stack<int> s;
  while (iss>>n) {
    s.push(n);
    n_elements++;
  }

  stack_extended se;
  se.elements = s;
  se.n_elements = n_elements;

  return se;
}

int main() {
  string s;
  while(getline(cin, s)) {
    stack_extended elements = line_to_stack(s);
    if (is_palindrome(elements)) {
      cout<<"Es un palindrom."<<endl;
    } else {
      cout<<"NO es un palindrom."<<endl;
    }
  }
  return 0;
}
