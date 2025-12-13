#include <bits/stdc++.h>

// https://moj.naquadah.com.br/new/treino/problem/?id=problemas-apc.vetor5

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int N, x;

    cin >> N;

    vector<int> vetor(N);

    for(int i=0; i<N; i++){
        cin >> vetor[i];
    }

    sort(vetor.begin(), vetor.end());

    cin >> x;

    cout << (binary_search(vetor.begin(), vetor.end(), x) ? "pertence\n" : "nao pertence\n");

    return 0;
}