

#include <iostream>
#include <time.h>



using namespace std;





int main()
{
	struct tm buf;
	time_t t = time(NULL);
	localtime_s(&buf, &t);
	const int N = 5;
	setlocale(LC_ALL, "Russian");
	
	int arr[N][N];

	for (int i = 0; i < N; i++)

	{
		for (int j = 0; j < N; j++)
		{
			arr[i][j] = i + j;
			cout << arr[i][j] << "  ";
		}
		cout << "\n";

	}

	cout << "\n";

	for (int j = 0; j < N; j++)
	{
		cout << arr[buf.tm_mday%5][j] << "  ";
	}

}
