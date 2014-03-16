// http://www.urionlinejudge.com.br/judge/en/problems/view/1018

#include <iostream>

using namespace std;

int main()
{
    int number, // numero que o programa ira ler
        count, // contador para repeticoes
        notes; // quantas notas sao necessarias

    int noteValues[6] = {50, 20, 10, 5, 2, 1}; // lista dos valores de notas, exceto a centena

    cin >> number;

    cout << number << endl;
    
    /* Para qualquer numero maior de 100, a forma mais rapida eh usar apenas as notas
     * de 100; logo basta dividir o number por 100 para se obter a quantidade de notas
     * necessarias */
    notes = number/100; 
    cout << notes <<" nota(s) de R$100,00" << endl; 
    number %= 100; // salva o resto no number, descontando a quantidade ja utilizada

    // Para cada tipo de nota
    for( count = 0; count < 6 ; count++ )
    {
        notes = 0;
        while(number >= noteValues[count] )
        {
            number -= noteValues[count]; // Se desconta o valor de uma nota
            notes++;// e adiciona ele ao contador de notas utilizadas
        }
        // e por fim imprime a quantidade de notas utilizada
        cout << notes << " nota(s) de R$" << noteValues[count] << ",00"<< endl;
    }
}
