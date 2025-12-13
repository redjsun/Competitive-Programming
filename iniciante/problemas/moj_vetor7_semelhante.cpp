#include <bits/stdc++.h>

// https://moj.naquadah.com.br/new/treino/problem/?id=problemas-apc.vetor7

using namespace std;

int main(){
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<int> vetor(n);

    for(int i=0; i<n; i++){
        cin >> vetor[i];
    }

    int x, i;

    for(i=0; i<n; i++){
        cin >> x;
        if(vetor[i] != x) break;
    }

    cout << (i==n ? "sim":"nao");


    return 0;
}
