
#include<iostream>
using namespace std;

int  pot_szybkie(int a,  int n)//int w którym znajduj¹ siê int "a" i "n"
{
	int  w = 1;

	while (n > 0)
	{
		if (n % 2 == 1) 
			w *= a;

		a *= a; //mono¿one lub równe 
		n /= 2; //dzielone lub równe
	}
	return w;
}

int main()
{
	int n;//wyk³adnik 
	int a;//podstawa 

	cout << "Podaj podstawe: ";
	cin >> a;
	cout << "Podaj wykladnik: ";
	cin >> n;

	cout << a << " do potegi " << n << " wynosi " << pot_szybkie(a, n);

	return 0;
}



