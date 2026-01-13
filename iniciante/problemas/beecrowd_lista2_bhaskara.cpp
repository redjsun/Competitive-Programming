#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);

    double A, B, C;
    cin >> A >> B >> C;

    double r1, r2;

    if(((B*B)-4*A*C) > 0 && A != 0){
        r1 = (-B + sqrt((B*B)-4*A*C))/(2*A);
        r2 = (-B - sqrt((B*B)-4*A*C))/(2*A);

        cout << fixed << setprecision(5);
        cout << "R1 = " << r1 << "\n" << "R2 = " << r2 << "\n";
    }
    else{
        cout << "Impossivel calcular\n";
    }
    

    return 0;
}