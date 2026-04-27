#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    int mat[n][n];
    int maior = 0, menor = 100001;

    for(int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j){
            cin >> mat[i][j];
        }
    }

    maior = max(max(mat[0][0], mat[0][n-1]), max(mat[n-1][n-1], mat[n-1][0]));
    menor = min(min(mat[0][0], mat[0][n-1]), min(mat[n-1][n-1], mat[n-1][0]));

    int rotacoes = 0, aux;

    while((mat[0][0] != menor) && (mat[n-1][n-1] != maior)){
        aux = mat[0][0];
        mat[0][0] = mat[0][n-1]; mat[0][n-1] = mat[n-1][n-1]; mat[n-1][n-1] = mat[n-1][0]; mat[n-1][0] = aux;
        rotacoes++;
    }

    cout << rotacoes << "\n";
    

    return 0;
}