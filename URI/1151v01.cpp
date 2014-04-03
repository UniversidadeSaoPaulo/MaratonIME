// http://www.urionlinejudge.com.br/judge/en/problems/view/1151

#include <iostream>
#include <cstring>

using namespace std;

int fibonacci[50]; //define vetor global

// coloca os valores no vetor fibonacci até o dígito n
int fib( int n){
    if( fibonacci[n] != -1 )// se o numero já foi calculado
        return fibonacci[n]; // retorna o numero
    fibonacci[n] = fibonacci[n-2] + fibonacci[n-1]; // se nao, o define e salva no vetor
    return fibonacci[n];
}       
int main(){
    int id, counter;
    memset(fibonacci, -1, sizeof(fibonacci));// limpa o vetor fibonacci
    fibonacci[0] = 1;// define os dois valores iniciais
    fibonacci[1] = 1;

    cin >> id; // recebe o valor que deve ser calculado

    for( counter = 0 ; counter < id ; counter++){
        cout << fib(counter-1); // imprime os numeros
        if(counter+1 != id) cout << " "; // coloca o espaco em todos menos o ultimo
    } cout << endl;// quebra ultima linha
}
