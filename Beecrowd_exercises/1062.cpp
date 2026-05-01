#include <stdio.h>
#include <iostream>

using namespace std;

#include <vector>
 
int main() {
 
    int n, aux;
    int maior = 0;
    vector<int> trem;
    vector<int> station;
    vector<int>::iterator inicio;
    
    int prox;
    while(true){

        cin >> n;
        cin >> aux;
        maior = aux;
        if(n == 0 && aux == 0)
            break;

        trem.push_back(aux);

        for(int i = 0; i < n-1; i++){
            cin >> aux;
            if(aux > maior)
                maior = aux;
            trem.push_back(aux);
        }
        inicio = trem.begin();

        while(inicio != trem.end()){
            prox = *inicio;

            station.push_back(prox);
            cout <<"INICIO" << *inicio << endl;

            cout << "MAIOR " << maior << endl;

            if(station.back() == maior){
                maior--;
                station.pop_back();
            }
            inicio++;
            cout << "VAZIO "<< station.empty() << endl;
        }

        while (!station.empty())
        {
            if(station.back() < maior){

                cout << "No\n";
                break;
            }
            else{
                maior--;
                station.pop_back();
            }

         
        }
        cout << "MAIOR " << maior << endl; 
        if(maior == 0){
            cout << "Yes\n";
        }
        
        trem.clear();
    }
    
 
    return 0;
}