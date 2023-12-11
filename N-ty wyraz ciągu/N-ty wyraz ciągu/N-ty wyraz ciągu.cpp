#include <iostream>
using namespace std;
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;

    cout << "Podaj numer wyrazu w ciagu Fibonacciego: ";
    cin >> n;

    if (n < 0) {
        cout << "Numer wyrazu musi byc nieujemny." << endl;
    }
    else {
        int result = fibonacci(n);
       cout << "Wyraz o numerze " << n << " w ciagu Fibonacciego to: " << result << endl;
    }

    return 0;
}