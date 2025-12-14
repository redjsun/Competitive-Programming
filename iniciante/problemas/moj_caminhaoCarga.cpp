#include <bits/stdc++.h>

// https://moj.naquadah.com.br/new/treino/problem/?id=moj-problems.edson-1086

using namespace std;

int main(){
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    int total=0, x;

    for(int i=0; i<n; i++){
        cin >> x;
        total+=x;
    }

    cout << "Carga total: " << total << " kilogramas\n";

    return 0;
}