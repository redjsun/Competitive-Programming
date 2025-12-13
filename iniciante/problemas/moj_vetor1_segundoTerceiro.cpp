#include <bits/stdc++.h>

// https://moj.naquadah.com.br/new/treino/problem/?id=problemas-apc.vetor1

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int N;
    cin >> N;

    vector<int> vetor(N);

    int menorT= 1000000, menor2 = 1000000, menor3 = 1000000;

    for(int i=0; i<N; i++){
        cin >> vetor[i];

        if(vetor[i] < menorT) 
            menorT = vetor[i];
    }

    for(int i=0; i<N; i++){
        if(vetor[i] < menor2 && vetor[i] > menorT)
            menor2 = vetor[i];
    }
    for(int i =0; i<N; i++){
        if(vetor[i] < menor3 && vetor[i] > menor2)
            menor3 = vetor[i];
    }

    cout << menor2 << "\n" << menor3 << "\n";

    return 0; 
}