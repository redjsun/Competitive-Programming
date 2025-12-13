#include <bits/stdc++.h>

//https://moj.naquadah.com.br/new/treino/problem/?id=problemas-apc.vetor2

using namespace std;

int main(){
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<int> vetor(n);

    int menorN = 1000000;
    int menorI = 0;

    for(int i=0; i<n; i++){
        cin >> vetor[i];

        if(vetor[i] < menorN){
            menorN = vetor[i];
            menorI = i;
        }
    }

    cout << menorI << "\n";

    return 0;
}