#import <iostream>
#import <vector>
using namespace std;

void bubble_sort(vector<double>& v) {

  if (v.size() < 2) return;

  for(int i = 1; i < v.size(); i++) {
    for (int j = 0; j < v.size() - i; j++) {
      if (v[j] > v[j+1]) {
        int aux = v[j];
        v[j] = v[j+1];
        v[j+1] = aux;
      }
    }
  }
}


void mostrat_vector(vector<double> v) {
  for (int i = 0; i < v.size(); i++) {
    cout<<v[i]<<" ";
  }
  cout<<endl;
}
int main() {

  int size = 15;
  vector<double> vector(size);

  vector[0] = 3;
  vector[1] = 2;
  vector[2] = 5;
  vector[3] = 7;
  vector[4] = 1;
  vector[5] = 0;
  vector[6] = 10;
  vector[7] = 3;
  vector[8] = 6;
  vector[9] = 4;
  vector[10] = 3;
  vector[11] = 7;
  vector[12] = 8;
  vector[13] = 11;
  vector[14] = 12;

  bubble_sort(vector);
  mostrat_vector(vector);
}
