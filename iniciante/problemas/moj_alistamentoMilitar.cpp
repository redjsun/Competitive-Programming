#include <bits/stdc++.h>

// https://moj.naquadah.com.br/new/treino/problem/?id=moj-problems.edson-1080

using namespace std;

int main(){
    ios::sync_with_stdio(false);

    int I; // idade
    cin >> I;

    if(I>70) cout << "Alistamento facultativo\n";
    else if(I>=18) cout << "Alistamento obrigatorio\n";
    else if(I>=16) cout << "Alistamento facultativo\n";
    else cout << "Nao pode se alistar\n";

    return 0;
}