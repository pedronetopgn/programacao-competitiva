#include <bits/stdc++.h>

using namespace std;

int main (){

    double n1;
    double n2;
    double n3;
    double n4;
    double media;
    double notaExame;
    double mediaFinal;

    cin >> n1 >> n2 >> n3 >> n4;

    media = ((n1*2)+(n2*3)+(n3*4)+(n4*1))/10;

    if(media>=7.0){
        cout << "Media: " << fixed << setprecision(1) << media << endl;
        cout << "Aluno aprovado." << endl;
    } else if(media>=5 && media<7){
        cin >> notaExame;
        cout << "Media: " << fixed << setprecision(1) << media << endl;
        cout << "Aluno em exame." << endl;
        cout << "Nota do exame: " << fixed << setprecision(1) << notaExame << endl;
        mediaFinal = (media+notaExame)/2;
        if(mediaFinal>=5){
            cout << "Aluno aprovado." << endl;
        }
        else{
            cout << "Aluno reprovado." << endl;
        }
        cout << "Media final: " << fixed << setprecision(1) << mediaFinal << endl;
    } else {
        cout << "Media: " << fixed << setprecision(1) << media  << endl;
        cout << "Aluno reprovado." << endl;
    }
    return 0;
}