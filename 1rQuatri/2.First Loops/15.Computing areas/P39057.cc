#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main() {

    //Pre: Input begins with a number n, followed by n descriptions. If of a rectangle,
    //we have the word “rectangle” followed by two strictly positive real numbers:
    //its length and its width. If of a circle, we have the word “circle”
    //followed by a strictly positive real number: its radius.

    //Post: For each description, print its area with 6 digits after the decimal point.
    int n;
    cin>>n;

    for(int i = 0; i<n; i++) {
        string type;

        double result = 0.0;

        cin>>type;

        if (type == "rectangle") {
            double b, h;
            cin>>b>>h;
            result = b*h;
        } else if(type == "circle"){
            double r;
            cin>>r;
            result = M_PI * r * r;
        }

        cout<<fixed;
        cout.precision(6);
        cout<<result<<endl;
    }

    return 0;
}
