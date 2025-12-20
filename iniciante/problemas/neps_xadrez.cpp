#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);

    int L, C;

    cin >> L >> C;

    // vector<vector<int>> mapa(L, vector<int>(C, 1));

    if(L%2!=0 && C%2==0) 
        cout << 0 << "\n";
    else if(L%2==0 && C%2!=0)
        cout << 0 << "\n";
    else
        cout << 1 << "\n";

    return 0;
}