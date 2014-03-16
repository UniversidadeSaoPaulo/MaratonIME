// http://www.urionlinejudge.com.br/judge/en/problems/view/1047

#include <iostream>

using namespace std;

int main()
{
    // um int para cada variavel que sera lida
    int shour = 0,
        ehour = 0,
        smin = 0,
        emin = 0,
        min, // intervalo de minutos
        hour; // intervalo de horas

    // le a entrada do usuario
    cin >> shour;
    cin >> smin;
    cin >> ehour;
    cin >> emin;

    // limita a diferenca de horas para 23, e dos minutos para 59
    hour = (ehour-shour)%24;
    min = (emin-smin)%60;

    if( hour == 0 )// ou seja, ou foram 24h ou 0h de duracao
        emin > smin ? hour = 0 : hour = 24 ;// descobre qual o caso comparando os minutos
    else if( hour < 0 )// a hora que terminou eh menor que a hora que comecou
        hour = 24 + hour;// corrige esse erro

    if( min < 0 )// o minuto que terminou eh menor que o minuto que comecou
    {
        // diminui uma hora e adiciona aos minutos
        min = 60 + min;
        hour--;
    }
    // Imprime a saida
    cout << "O JOGO DUROU " << hour  <<" HORA(S) E " << min << " MINUTO(S)" << endl;
}
