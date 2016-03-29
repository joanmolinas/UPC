#include <iostream>
#include <queue>
#include <sstream>
using namespace std;

int largest_number(queue<int> cua) {
  int largest = -9999999;
  while (!cua.empty()) {
    if (cua.front() > largest) {
      largest = cua.front();
    }
    cua.pop();
  }

  return largest;
}

void increment_largest_number(queue<int> &cua, int x) {

  queue<int> cua_aux;
  int largest = largest_number(cua);
  bool modified = false;
  while (!cua.empty()) {
    int front = cua.front();
    if (largest == front && !modified)  {
      front += x;
      modified = true;
    }
    cua_aux.push(front);
    cua.pop();
  }
  cua = cua_aux;
}

void decrement_largest_number(queue<int> &cua, int x) {

  queue<int> cua_aux;
  int largest = largest_number(cua);
  bool modified = false;
  while (!cua.empty()) {
    int front = cua.front();
    if (largest == front && !modified)  {
      front -= x;
      modified = true;
    }
    cua_aux.push(front);
    cua.pop();
  }
  cua = cua_aux;
}

void delete_largest_number(queue<int> &cua) {
  if (cua.empty()) return;

  bool deleted = false;
  queue<int> cua_aux;
  int largest = largest_number(cua);
  while (!cua.empty()) {
    if (largest == cua.front() && !deleted) {
      deleted = true;
    } else {
      cua_aux.push(cua.front());
    }
    cua.pop();
  }
  cua = cua_aux;
}

int main() {

  string input;
  queue<int> cua;

  while(getline(cin, input)) {
    istringstream iss(input);
    string element;
    while(iss>>element) {
      if (element == "S") {
        int number;
        iss>>number;
        cua.push(number);
      } else if (element == "A") {
        if (cua.empty()) {
          cout<<"error!"<<endl;
        } else {
          cout<<largest_number(cua)<<endl;
        }
      } else if (element == "R") {
        if (cua.empty()) {
          cout<<"error!"<<endl;
        } else {
          delete_largest_number(cua);
        }
      } else if (element == "I") {
        int number;
        iss>>number;
        if (cua.empty()) {
          cout<<"error!"<<endl;
        } else {
          increment_largest_number(cua, number);
        }
      } else if (element == "D") {
        int number;
        iss>>number;
        if (cua.empty()) {
          cout<<"error!"<<endl;
        } else {
          decrement_largest_number(cua, number);
        }
      }
    }
  }

  return 0;
}
