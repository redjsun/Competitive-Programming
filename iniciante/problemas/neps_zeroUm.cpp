#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);

    int A, B, C;
    cin >> A >> B >> C;

    if(A!=B && A!=C) cout << "A\n";
    else if(B!=A && B!=C) cout << "B\n";
    else if(C!=A && C!=B) cout << "C\n";
    else cout << "*\n";

    return 0;
}