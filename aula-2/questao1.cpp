// Preenchimento de Vetor II
#include <bits/stdc++.h>

using namespace std;

int main() {
    int T = 1;
    int N[1000];
    int cont = 0;

    cin >> T;

    for(int i=0; i<1000; i++){
        N[i] = cont;
        cout << "N[" << i <<"] = " << cont << endl;
        if(cont < T) cont++;
        if(cont == T) cont = 0;
    }
}
