#include <bits/stdc++.h>

// https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2014f1ps_cartas

using namespace std;

int main(){
    ios::sync_with_stdio(false);

    vector<int> cartas(5);

    int numCresc=0, numDecresc=14;
    bool cresc = true, decresc = true;

    for(int i=0; i<5; i++){
        cin >> cartas[i];
    }

    for(int i=0; i<5; i++){
        if(cartas[i] > numCresc)
            numCresc = cartas[i];
        else
            cresc = false;
        if(cartas[i] < numDecresc)
            numDecresc = cartas[i];
        else
            decresc = false;
        
        if(!(cresc || decresc)){
            cout << "N" << "\n";
            break;
        }
    }

    if(cresc) cout << "C" << "\n";
    if(decresc) cout << "D" << "\n";


    return 0;
}