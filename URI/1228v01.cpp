// www.urionlinejudge.com.br/judge/pt/problems/view/1228
#include <iostream>
#include <vector>
#include <algorithm> // search_n
using namespace std;
int main() {
     int n, // numero de corredores
         counter = 0, // localizar
         id = 0, // numero do corredor
         current, // id do corredor atual
         overtakes = 0; // numero de ultrapassagem
     vector<int>::iterator startIt; // interador do vetor
     vector<int> startGrid; // grid de largada
     vector<int> endGrid; // grid de chegada
     while(cin >> n)    {
     // limpando variaveis
        overtakes = 0;
        startGrid.clear();
        endGrid.clear();
        for( counter = 0 ; counter < n ; counter++ ){
            cin >> id;
            startGrid.push_back(id); // adicionado ao grid de largada
        }
        for( counter = 0 ; counter < n ; counter++) {
            cin >> id;
            endGrid.push_back(id); // adicionado ao grid de chegada
        }
        for( counter = 0 ; counter < n ; counter++ ) {
            current = endGrid[counter]; // define corredor atual
            startIt = search_n(startGrid.begin(), endGrid.end(), 1, current); // encontra corredor atual no grid de largada
            // atualiza o grid de largada
            startGrid.erase(startIt);
            startGrid.insert((startGrid.begin() + counter),current);
            // somente se a posicao do corredor eh maior que na largada, adiciona ao num de ultrapassagem
            if((startIt - startGrid.begin()) > counter)
                overtakes += (startIt - startGrid.begin()) - counter;
        }
        cout << overtakes << endl;
    }
}
