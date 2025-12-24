#include <bits/stdc++.h>

using namespace std;

#define MaiorAB(a,b) (a+b+abs(a-b))/2;

int main(){
    int A, B, C;
    cin >> A >> B >> C;

    int maior = MaiorAB(A, B);
    int maiorT = MaiorAB(A, C);

    maior = MaiorAB(maior, maiorT);

    cout << maior << " eh o maior\n";


    return 0;
}