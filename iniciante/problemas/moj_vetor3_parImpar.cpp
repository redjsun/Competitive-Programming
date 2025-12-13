#include <bits/stdc++.h>

// https://moj.naquadah.com.br/new/treino/problem/?id=problemas-apc.vetor3

using namespace std;

int main(){
    ios::sync_with_stdio(false);

    int N;
    cin >> N;

    vector<int> vetor(N);

    // otimiza depois

    // preenche vetor
    for(int i=0; i<N; i++){
        cin >> vetor[i];
    }

    for(int i=0; i<N; i++){
        if(vetor[i]%2==0)
            cout << vetor[i] << " ";
    }
    cout << "\n";

    for(int i=0; i<N; i++){
        if(vetor[i]%2!=0)
            cout << vetor[i] << " ";
    }
    return 0;
}