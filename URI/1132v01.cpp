// http://www.urionlinejudge.com.br/judge/pt/problems/view/1132

#include <iostream>

using namespace std;

int main(){
    int first, second, sum;
    cin >> first >> second; // salva os numeros

    // caso o primeiro seja maior que o segundo, troca os valores
    if( first > second )
    {
        sum = second;
        second = first;
        first = sum;
    }

    // Percorre linearmente todos os valores entre first e second
    for( sum = 0 ; first <= second ; first++ )
        if(first%13 != 0) sum += first;//adiciona os nao multiplos

    cout << sum << endl;// retorna saida
}
