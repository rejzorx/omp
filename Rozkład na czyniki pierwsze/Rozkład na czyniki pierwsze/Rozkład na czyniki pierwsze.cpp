#include <iostream>
#include <vector>
using namespace std;

void rozkladNaCzynniki(int n) {
   vector<int> czynniki;


    while (n % 2 == 0) {
        czynniki.push_back(2);
        n = n / 2;
    }

    for (int i = 3; i <=sqrt(n); i = i + 2) {
        while (n % i == 0) {
            czynniki.push_back(i);
            n = n / i;
        }
    }

   
    if (n > 2) {
        czynniki.push_back(n);
    }

   
    cout << "Czynniki pierwsze: ";
    for (int czynnik : czynniki) {
        cout << czynnik << " ";
    }
   cout << endl;
}

int main() {
  
    int liczba;
   cout << "Podaj liczbe do rozkladu: ";
    cin >> liczba;


    rozkladNaCzynniki(liczba);

    return 0;
}