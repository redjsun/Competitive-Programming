#include <bits/stdc++.h>

// https://moj.naquadah.com.br/new/treino/problem/?id=problemas-apc.vetor8

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    
    int n;
    cin >> n;
    
    vector<int> vetor(n);
    
    long long soma = 0; // Usar long long para evitar overflow
    
    for(int i=0; i<n; i++){
        cin >> vetor[i];
        soma += vetor[i];
    }
    
    int media = soma / n; // A média como inteiro
    
    bool primeiro = true;
    
    for(int i=0; i<n; i++){
        if(vetor[i] > media){
            if(!primeiro) cout << " ";
            cout << vetor[i];
            primeiro = false;
        }
    }
    
    if(primeiro){
        cout << 0;
    }
    
    cout << "\n";
    
    return 0;
}
