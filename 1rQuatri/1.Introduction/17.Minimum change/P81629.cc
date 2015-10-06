#include <iostream>
using namespace std;

int main() {

    //Pre: L’entrada consistex en dos naturals: el nombre d’euros e i el nombre de cèntims c. Assumiu c<100.
    //Post: Escriviu quants bitllets i quantes monedes de cada tipus calen per representar
    // la quantitat de l’entrada, tot minimitzant el nombre total de bitllets i monedes.

    /*
     Bitllets de 500 euros: 19
     Bitllets de 200 euros: 2
     Bitllets de 100 euros: 0
     Bitllets de 50 euros: 1
     Bitllets de 20 euros: 2
     Bitllets de 10 euros: 0
     Bitllets de 5 euros: 1
     Monedes de 2 euros: 2
     Monedes de 1 euro: 0
     Monedes de 50 centims: 1
     Monedes de 20 centims: 2
     Monedes de 10 centims: 0
     Monedes de 5 centims: 1
     Monedes de 2 centims: 2
     Monedes de 1 centim: 0

     */

    int euros, centims;

    cin>>euros>>centims;

    int cinccents, doscents, cent, cinquanta, vint, deu, cinc, dos, cinquantacentims, vintcentims, deucentims, cinccentims, doscentims;

    cinccents = euros/500;
    cout<<"Bitllets de 500 euros: "<<cinccents<<endl;
    euros -= cinccents * 500;

    doscents = euros/200;
    cout<<"Bitllets de 200 euros: "<<doscents<<endl;
    euros -= doscents*200;

    cent = euros/100;
    cout<<"Bitllets de 100 euros: "<<cent<<endl;
    euros -= cent*100;

    cinquanta = euros/50;
    cout<<"Bitllets de 50 euros: "<<cinquanta<<endl;
    euros -= cinquanta*50;

    vint = euros/20;
    cout<<"Bitllets de 20 euros: "<<vint<<endl;
    euros -= vint*20;

    deu = euros/10;
    cout<<"Bitllets de 10 euros: "<<deu<<endl;
    euros -= deu*10;

    cinc = euros/5;
    cout<<"Bitllets de 5 euros: "<<cinc<<endl;
    euros -= cinc*5;

    dos = euros/2;
    cout<<"Monedes de 2 euros: "<<dos<<endl;
    euros -= dos*2;

    cout<<"Monedes de 1 euro: "<<euros<<endl;

    cinquantacentims = centims/50;
    cout<<"Monedes de 50 centims: "<<cinquantacentims<<endl;
    centims -= cinquantacentims*50;

    vintcentims = centims/20;
    cout<<"Monedes de 20 centims: "<<vintcentims<<endl;
    centims -= vintcentims*20;

    deucentims = centims/10;
    cout<<"Monedes de 10 centims: "<<deucentims<<endl;
    centims -= deucentims*10;

    cinccentims = centims/5;
    cout<<"Monedes de 5 centims: "<<cinccentims<<endl;
    centims -= cinccentims*5;

    doscentims = centims/2;
    cout<<"Monedes de 2 centims: "<<doscentims<<endl;
    centims -= doscentims*2;

    cout<<"Monedes de 1 centim: "<<centims<<endl;

    return 0;
}
