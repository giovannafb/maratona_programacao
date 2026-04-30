#include <iostream>
#include <queue>

using namespace  std;


int main(){

    unsigned long int d, c, r;
    queue<unsigned long int> tiring;
    queue<unsigned long int> invigorating;

    cin >> d >> c >> r;
    unsigned long int aux;

    for(unsigned long int i = 0; i < c; i++){
        cin >> aux;
        tiring.push(aux);
    }

    for(unsigned long int i = 0; i < r; i++){
        cin >> aux;
        invigorating.push(aux);
    }

    //unsigned long int act;
    unsigned long int cont = 0;

    //enquanto n acabarem as atividades
    while(!tiring.empty() || !invigorating.empty()){
        //act = tiring.front();
        if(!tiring.empty() && tiring.front()<= d){ //tem disp p fazer
            d -= tiring.front();
            tiring.pop();
            cont++;
        }
        else{
            if(invigorating.empty())
                break;
            d += invigorating.front();
            invigorating.pop(); 
            cont++;
        }
    }
    cout << cont << "\n";
}