#include <bits/stdc++.h>

// https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2025f2pj_placar

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int p;
    cin >> p;
    vector<int> paulo(p);

    for(int i=0; i<p; i++){
        cin >> paulo[i];
    }

    int c;
    cin >> c;
    vector<int> camila(c);

    for(int i=0; i<c; i++){
        cin >> camila[i];
    }

    int x = 0, y = 0;

    for(int i=0; i<(p+c+1); i++){
        cout << x << " " << y << "\n";

        if(paulo[i]<camila[i]) x++;
        else y++;


    }

    return 0;
}