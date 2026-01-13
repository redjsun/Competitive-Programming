#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);

    double x;
    cin >> x;

    cout << fixed << setprecision(2);

    if(x >= 0 && x <= 2000)
        cout << "Isento\n";
    if(x > 2000 && x <= 3000)
        cout << "R$ " << (x-2000)*0.08 << "\n";
    if(x > 3000 && x <= 4500)
        cout << "R$ " << (x-3000)*0.08 + (x-2000)*0.18 << "\n";
    if(x > 4500)
        cout << "R$ " << (x-2000)*0.28 << "\n";

    return 0;
}