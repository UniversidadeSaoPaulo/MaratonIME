// http://www.urionlinejudge.com.br/judge/en/problems/view/1080

#include <iostream>

using namespace std;

int main()
{
    int number, // numero lindo
        highest=0, // numero mais alto
        hpos = 0, // posicao mais alto
        pos = 1; // contador de posicao
    while(cin >> number)
    {
        if(number >= highest)
        {
            // atualiza o highest e hpos se o number for maior
            highest=number;
            hpos = pos;
        }
        pos++;// atualiza pos
    }
    cout << highest << endl << hpos <<endl;// imprime saida
}
