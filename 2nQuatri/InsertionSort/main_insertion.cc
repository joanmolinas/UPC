#import <iostream>
#import <vector>
using namespace std;

void insertion_sort(vector<double>& v) {

  if (v.size() < 2) return;

  for (int i = 1; i < v.size(); i++){
		int j = i;
		while (j > 0 && v[j] < v[j-1]){
			  int aux = v[j];
			  v[j] = v[j-1];
			  v[j-1] = aux;
			  j--;
			  }
		}
}

// for (int i = 1; i < v.size(); i++){
//   int j = i;
//   double k = v[i];
//   while (j > 0 && v[j-1] > k){
//       v[j] = v[j-1];
//       --j;
//       }
//       v[j] = k;
//   }
// }


void mostrat_vector(vector<double> v) {
  for (int i = 0; i < v.size(); i++) {
    cout<<v[i]<<" ";
  }
  cout<<endl;
}
int main() {

  int size = 15;
  vector<double> vector(size);

  srand (time(NULL));

  for(int i = 0; i < size-1; i++) {
    vector[i] = rand() % size + 1;
  }


  insertion_sort(vector);
  mostrat_vector(vector);
}
