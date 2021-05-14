// Menor e Posição
#include <bits/stdc++.h>

using namespace std;

int main() {
    int N; 
    int menor = 99999999;
    int val;
    int indexMenor;
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> val;
        if(val < menor){
            menor = val;
            indexMenor = i;
        } 
    }
    cout << "Menor valor: " << menor << endl;
    cout << "Posicao: " << indexMenor << endl;
}
