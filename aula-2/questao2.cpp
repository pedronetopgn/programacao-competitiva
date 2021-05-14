// Seleção em Vetor I
#include <bits/stdc++.h>

using namespace std;

int main() {
    double val;
    for(int i=0; i<100; i++){
        cin >> val;
        if(val <= 10) cout << "A[" << i <<"] = " << fixed << setprecision(1) << val << endl;
    }
}