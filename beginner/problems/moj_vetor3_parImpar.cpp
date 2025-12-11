#include <bits/stdc++.h>

// https://moj.naquadah.com.br/new/treino/problem/?id=problemas-apc.vetor3

using namespace std;

int main(){
    ios::sync_with_stdio(false);

    int N;
    cin >> N;

    vector<int> vetor(N);

    for(int i=0; i<N; i++){
        int x;
        cin >> x;
    }

    for(int i=0; i<N; i++){
        if(x%2==0) cout << par[i] << " ";
    }
    cout << "\n";

    for(int i=0; i<N; i++){
        cout << impar[i] << " ";
    }

    return 0;
}