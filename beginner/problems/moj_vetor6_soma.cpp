#include <bits/stdc++.h>

// https://moj.naquadah.com.br/new/treino/problem/?id=problemas-apc.vetor6

using namespace std;


int main(){
    ios::sync_with_stdio(false);

    int N, x;
    cin >> N;

    vector<int> vetor(N);

    for(int i=0; i<N; i++){
        cin >> vetor[i];
    }

    for(int i=0; i<N; i++){
        cin >> x;
        cout << vetor[i]+x << " ";
    }

    return 0;
}