// http://www.urionlinejudge.com.br/judge/en/problems/view/1048

#include <iostream> 
#include <stdio.h> // para imprimir os floats com um numero fixo de casa decimais
#include <algorithm> // para usar o lower_bound
#include <vector> // para usar vector<int>

using namespace std;

int main()
{
    float classes[5] = {0,400,800,1200, 2000}; // As classes da tabela
    float raise[5] = { 0.15, 0.12, 0.10, 0.07, 0.04}; // os aumentos
    vector<int> v(classes, classes+5); // transforma as classes num vetor
    float salary; // entrada do usuario
    int lb = 0; // localiza o raise nas listas
    
    cin >> salary;

    // Caso especial quando o salario eh 0
    // ( nao faz sentido, mas eh um input esperado pelo programa )
    if(salary == 0)
        lb = 0;
    else
        // lower_bound encontra a classe certa para qualquer salario
        // e fica salvo em lb o index do aumento correspondente
        lb = lower_bound(v.begin(), v.end(), salary) - v.begin() - 1;

    // Imprime as saidas de acordo com o enunciado
    printf("Novo salario: %.2f\n", ( (1 + raise[lb])*salary ) );
    printf("Reajuste ganho: %.2f\n", (raise[lb])*salary );
    cout << "Em percentual: " << raise[lb]*100 << " %\n" ;

    return 0;
}
