// http://www.urionlinejudge.com.br/judge/pt/problems/view/1153
#include <iostream>

using namespace std;

int factorial( int n ){
    if( (n==0)||(n==1) ) return 1; // casos base
        return n*factorial(n-1); // retorna n*(n-1)!
    }

int main(){
    int in;
    
    cin >> in;

    cout << factorial(in) << endl;
}
