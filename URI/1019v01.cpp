// http://www.urionlinejudge.com.br/judge/en/problems/view/1019

#include <iostream>

using namespace std;

int main()
{
    int seconds, interval = 3600;

    cin >> seconds;

    while( interval > 0 )
    {
        cout << seconds/interval;
        seconds %= interval;
        (interval != 1)? cout << ":" : cout << endl ;
        interval /= 60;
    }
    
    return 0;

}
