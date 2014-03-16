// http://www.urionlinejudge.com.br/judge/en/problems/view/1019

#include <iostream>

using namespace std;

int main()
{
    int seconds, // segundos colocados pelo usuario
        interval = 3600; // intervalo de segundos em 1h

    cin >> seconds;

    // Irei diminuindo o intervalo ate ele ser 0
    while( interval > 0 )
    {
        cout << seconds/interval; // Imprime os segundos divididos pelo intervalo
        seconds %= interval; // desconta dos segundos o que ja foi impresso
        // Se não tiver impresso segundos, imprime ":", se estiver, termina a linha
        (interval != 1)? cout << ":" : cout << endl ;
        interval /= 60;// Divide o intervalo por 60, passando de horas -> minutos e de minutos -> segundos
    }
    
    return 0;

}
