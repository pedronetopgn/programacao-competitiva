#include <bits/stdc++.h>

using namespace std;

int main (){

    int X;
    int Y;
    int menor;
    int maior;
    int somatorio = 0;

    cin >> X;
    cin >> Y;

    if(X<Y){
        menor = X;
        maior = Y;
    }
    else{
        menor = Y;
        maior = X;
    }

    for(int i=menor+1; i<maior; i++){
        if(i%2!=0){
            somatorio += i;
        }
    }

    cout << somatorio << endl;
    
    return 0;
}