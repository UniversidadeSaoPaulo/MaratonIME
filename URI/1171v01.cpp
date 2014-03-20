// http://www.urionlinejudge.com.br/judge/pt/problems/view/1171

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, current, i, occ;
    vector<int> numbers;
    vector<int>::iterator it;

    cin >> n;
    
    // recebe os n numeros e salva no vetor numbers
    for( ; n > 0 ; n-- ){
        cin >> current;
        numbers.push_back(current);
    }
                                            
    sort(numbers.begin(), numbers.end()); //coloca o vetor em ordem

    current = numbers.at(0);//comeca a contagem
    occ = 1;

    for( i = 1 ; i < numbers.size() ; i++){
        if( numbers.at(i) == current ) occ++;// se o mesmo numero que o anterior, adiciona as ocorrencias
        else{
            // se nao, imprime a aparencia do ultimo, e recomeca a contagem
            cout << current << " aparece " << occ << " vez(es)\n";
            current = numbers.at(i);
            occ = 1;
        }
    }
    cout << current << " aparece " << occ << " vez(es)\n";// imprime o ultimo numero
}
