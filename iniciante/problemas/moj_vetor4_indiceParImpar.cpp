#include <bits/stdc++.h>

// https://moj.naquadah.com.br/new/treino/problem/?id=problemas-apc.vetor4

using namespace std;

int main(){
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<int> vetor(n);

    for(int i=0; i<n; i++){
        cin >> vetor[i];

        if(vetor[i]%2==0) 
            cout << i << " ";
    }
    cout << "\n";
    
    for(int i=0; i<n; i++){
        if(vetor[i]%2!=0) 
            cout << i << " ";
    }

    return 0;
}