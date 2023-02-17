

#include <iostream>


using namespace std;


void CoutNumber(int N,int j )
{
	for (int i = j; i < N + 1; i+=2)
	{

		cout << i<<"\n";

	}

}


int main()
{
	setlocale(LC_ALL, "Russian");
	const int N = 10;
	cout << "Вывод четных чисел\n";
	CoutNumber(N,0);
	cout << "Вывод нечетных чисел\n";
	CoutNumber(N, 1);
	

}

