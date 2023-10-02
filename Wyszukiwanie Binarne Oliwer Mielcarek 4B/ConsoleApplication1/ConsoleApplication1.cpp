#include<iostream>
using namespace std;
int main()
{
   
    short i, numer, prawa, lewa, sr;
    short arr[15] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47 };
    cout << "Give number:" << endl;
    cin >> numer;
    prawa = 0;
    lewa = 15;
    sr = (prawa + lewa) / 2;
    while (prawa <= lewa)
    {
        if (arr[sr] < numer)
            prawa = sr + 1;
        else if (arr[sr] == numer)
        {
            cout << "Number: " << numer << " Is on positon: " << sr + 1 << " \nOn list his index it: " << sr;
            break;
        }
        else
            lewa = sr - 1;
        sr = (prawa + lewa) / 2;
    }
    if (prawa > lewa)
        cout << "\n Number:  " << numer << " Is not on list ";
    return 0;
}