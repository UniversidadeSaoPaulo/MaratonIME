// http://www.urionlinejudge.com.br/judge/pt/problems/view/1164

#include <iostream>

using namespace std;

int main(){
    int numbers, current, soma, i, n;
    cin >> numbers;// recebe a quantidade de numeros testados
        for( i = 0 ; i < numbers ; i++ ){
            cin >> current;
            soma = 0;
            for( n = 1 ; n < current ; n++ )// para cada numero entre 1 e o numero
                if( current%n == 0 ) soma+= n;// adiciona a soma se for divisor
            if( soma==current)// se a soma dos divisores for o numero,
                cout << current << " eh perfeito\n";
            else
                cout << current << " nao eh perfeito\n";
        }
}
