#include <iostream>
using namespace std;

bool esMesGran(string a, string b) {
    return a <= b;
}

int main() {

    int n, nfrase = 0;
    bool fraseTrobada = false;

    while (cin>>n) {
        if (fraseTrobada == false) {
            nfrase++;
            string ultimaParaula = " ";
            int repeticions = 0;
            fraseTrobada = true;
            for (int i = 0; i < n; i++) {

                string paraula;
                cin>>paraula;

                if (esMesGran(ultimaParaula, paraula)) {
                    repeticions++;
                } else {
                    fraseTrobada = false;
                }

                if (repeticions == n) {
                    fraseTrobada = true;
                }

                ultimaParaula = paraula;
            }
        }
    }

    if (fraseTrobada) {
        cout<<"La primera linia ordenada creixentment es la "<<nfrase<<"."<<endl;
    } else {
        cout<<"No hi ha cap linia ordenada creixentment."<<endl;
    }
    return 0;
}
