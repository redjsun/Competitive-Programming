#include <bits/stdc++.h>

// https://neps.academy/br/exercise/86

using namespace std;

int main(){
    ios::sync_with_stdio(false);

    float A, B;
    cin >> A >> B;

    float media = (A+B)/2;

    if(media>=7) cout << "Aprovado\n";
    else if(media>=4) cout << "Recuperacao\n";
    else cout << "Reprovado\n";

    return 0;
}