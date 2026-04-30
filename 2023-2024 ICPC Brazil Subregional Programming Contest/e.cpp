#include <bits/stdc++.h>
using namespace std;

int valores[1000001] = {}; //v[5] = 2 -> 2 flores c 5 polen

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, aux, resto, total; 
    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        cin >> aux;
        valores[aux]++;
    }

    int soma = 0;

    for (int i = 1000000; i > 0; --i) {
        if (valores[i] > 0) { //tem flor
            resto = i; //qnt polen
            total = 0;
            while(resto > 0){
                total+= resto % 10;
                resto /= 10;
            }
            
            if (k <= valores[i]) {
                soma = total;
                k = 0; //coletou
                break;
            }

            k -= valores[i]; //tira qnt de abelhas que pegaram polen

            if (i - total > 0) { //sobroou polen
                valores[i - total] += valores[i]; //flor c qnt nova de polen
            }
            soma = total;
        }
    }

    if (k > 0) cout << 0 << "\n"; 
    else cout << soma << "\n";

    return 0;
}