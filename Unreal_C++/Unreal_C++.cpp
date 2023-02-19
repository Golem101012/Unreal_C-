

#include <iostream>
#include "Math.h"

using namespace std;


class MyPlayer{
private:	
	string PlayerName;

	int Score;

public:
	MyPlayer() : PlayerName("NULL"), Score(0)
	{

	}

	MyPlayer(string newName, int newScore) : PlayerName(newName), Score(newScore)
	{

	}

	void SetName(string newName)
	{
		PlayerName = newName;
	}

	void SetScore(int newScore)
	{
		Score = newScore;
	}

	string GetName() 
	{
		return PlayerName;
	}

	int GetScore() 
	{
		return Score;
	}

	void Show()
	{
		cout << "Имя " << PlayerName << " Кол-во очков " << Score;
	}

};


void Show(MyPlayer *arr, int x)
{
		for (int i = 0; i < x; i++)
		{

		  arr[i].Show();
		  cout << "\n";

	    }
}





int main()
{
	setlocale(LC_ALL, "ru");
	int x,nSCORE;
	string sNAME;

	cout << "Кол-во игроков\n";
	cin >> x;
	MyPlayer *arr = new MyPlayer[x];

	for (int i = 0; i < x; i++)
	{
		cout << "Имя игрока\n";
		cin >> sNAME;
		arr[i].SetName(sNAME);
		cout << "Кол-во очков\n";
		cin >> nSCORE;
		arr[i].SetScore(nSCORE);
	}

	cout << "\n";

	Show(arr,x);

	
	for (int i = 0; i < x; i++) 
	{



		for (int j = 0; j < x - 1; j++)
		{
			if (arr[j].GetScore() < arr[j + 1].GetScore())
			{
				swap(arr[j], arr[j+1]);
			}

		}
	}

	Show(arr, x);
	
	delete[] arr;


}


