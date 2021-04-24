#include <bits/stdc++.h>

using namespace std;

int main (){

    int quant;
    double x;
    double y;

    cin >> quant;

    for(int i=0; i<quant; i++){
        cin >> x >> y;
        if(y==0){
            cout << "divisao impossivel" << endl;
            continue;
        } else{
            cout << fixed << setprecision(1) << (x/y) << endl;
        }
    }
    return 0;
}