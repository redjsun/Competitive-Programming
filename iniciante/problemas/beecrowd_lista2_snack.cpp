#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);

    vector<double> cardapio(6);

    cardapio[1] = 4;
    cardapio[2] = 4.5;
    cardapio[3] = 5;
    cardapio[4] = 2;
    cardapio[5] = 1.5;

    int X, Y;
    cin >> X >> Y;

    cout << fixed << setprecision(2);
    cout << "Total: R$ " << cardapio[X]*Y << "\n";

    return 0;
}