#import <iostream>
#import <vector>
using namespace std;

int first_occurrence(double x, const vector<double> &v) {

  if (v.size() < 1) return -1; 

  int min = 0, max = v.size();
  int mid = 0;

  while (max > min) {
    mid = (min+max)/2;
    if(v[mid] >= x)  max = mid;
    else min = mid+1;

  }
  return (v[min] == x) ? min : -1;
}

int main() {

  int size = 15;
  vector<double> vector(size);
  int n;
  // cin>>n;

  if (n > size) {
    return 0;
  }

  vector[0] = 1;
  vector[1] = 1;
  vector[2] = 2;
  vector[3] = 3;
  vector[4] = 3;
  vector[5] = 3;
  vector[6] = 4;
  vector[7] = 5;
  vector[8] = 5;
  vector[9] = 5;
  vector[10] = 7;
  vector[11] = 7;
  vector[12] = 8;
  vector[13] = 9;
  vector[14] = 10;


  // cout<<first_occurrence(n, vector)<<endl;

}
