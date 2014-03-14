#include <iostream>

using namespace std;

int main()
{
    int number,count, notes;
    int noteValues[6] = {50, 20, 10, 5, 2, 1};

    cin >> number;

    cout << number << endl;
    
    notes = number/100;
    cout << notes <<" nota(s) de R$100,00" << endl; 
    number %= 100;

    for( count = 0; count < 6 ; count++ )
    {
        notes = 0;
        while(number >= noteValues[count] )
        {
            number -= noteValues[count];
            notes++;
        }
        cout << notes << " nota(s) de R$" << noteValues[count] << ",00"<< endl;
    }
}
