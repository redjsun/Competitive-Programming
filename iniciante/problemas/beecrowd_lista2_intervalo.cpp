#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);

    double N;
    cin >> N;

    if(N >= 0 && N<=25)
        cout << "Intervalo [0,25]\n";
    else if(N > 25 && N <= 50)
        cout << "Intervalo (25,50]\n";
    else if(N > 50 && N <= 75)
        cout << "Intervalo (50,75]\n";
    else if(N > 75 && N <=100)
        cout << "Intervalo (75,100]\n";
    else
        cout << "Fora de intervalo\n"; 

    return 0;
}