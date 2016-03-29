#include <iostream>
#include <stack>
#include <sstream>
using namespace std;

stack<int> inversion(stack<int> s) {
  stack<int> even, odd, total;

  while (!s.empty()) {
    int top = s.top();
    top%2 == 0 ? even.push(top) : odd.push(top);
    s.pop();
  }

  while (!odd.empty()) {
    total.push(odd.top());
    odd.pop();
  }

  while (!even.empty()) {
    total.push(even.top());
    even.pop();
  }
  return total;
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
    bool first_elemement = true;
    stack<int> elements = inversion(line_to_stack(s));
    while (!elements.empty()) {
      if (!first_elemement) cout<<" ";
      else first_elemement = false;
      cout<<elements.top();
      elements.pop();
    }
    cout<<endl;
  }
  return 0;
}
