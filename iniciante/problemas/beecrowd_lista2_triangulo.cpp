#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);

    double A, B, C;
    cin >> A >> B >> C;

    cout << fixed << setprecision(1);

    if(A+B > C && A+C > B && B+C > A)
        cout << "Perimetro = " << A+B+C << "\n";
    else
        cout << "Area = " << (A+B)*C/2 << "\n";

    return 0;
}