#include <iostream>
using namespace std;

int main() {

    const int centinella = -1;
    int n;

    while (cin>>n) {
        int m, contador = 1;
        cin>>m;
        bool trobat = false;
        while (m != centinella) {
            if (contador == n) {
                trobat = true;
                cout<<"A la posicio "<<n<<" hi ha un "<<m<<"."<<endl;
            }
            cin>>m;
            contador++;

        }

        if (!trobat) {
            cout<<"Posicio incorrecta."<<endl;
        }
    }



    return 0;
}
