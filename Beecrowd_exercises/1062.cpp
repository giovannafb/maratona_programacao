#include <iostream>
#include <vector>

#include <iterator>
using namespace std;

int alo;

int main(){

    int n, aux, greater, current;
    int last = -1;

    vector<int>::iterator it;
    while(true){
        cin >> n;

        if(n == 0){
            break;
        }
        while(true){

            vector<int> train(n);
            vector<int> station(n);
            cin >> aux;

        
            if(aux == 0){
                cout << "\n";
                break;
            }
            greater = n;
            train.push_back(aux);

            for(int i = 0; i < n-1; i++){
                cin >> aux;

                train.push_back(aux);
            }
        
            station.push_back(train.back());
            train.pop_back();

            while(!station.empty() && !train.empty()){

                current = station.back();
                if(current == greater){
                    greater--;
                    station.pop_back();
                    last = station.back();
                
                }
                else{
                    if(current < last){
                        cout << "No\n";
                        break; 
                    }
                    last = current; 
                    if(!train.empty()){
                        station.push_back(train.back());
                        train.pop_back();
                    }
                }
            }
            if(greater == -1)
                cout << "Yes\n";
            train.clear();
            station.clear();
            last = -1;
        }
        
    }
    return 0;
}