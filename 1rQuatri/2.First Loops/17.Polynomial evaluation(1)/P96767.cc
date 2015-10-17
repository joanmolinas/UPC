#include <iostream>
#include <math.h>

using namespace std;

int main() {

    int i = 0;
    double suma = 0, num, n;
    cin>>n;

    while (cin>>num) {
        double n2 = num * pow(n, i);
        suma += n2;
        i++;
    }
    cout<<fixed;
    cout.precision(4);
    cout<<suma<<endl;


    return 0;
}
