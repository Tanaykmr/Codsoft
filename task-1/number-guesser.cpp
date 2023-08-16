#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int x, ans;
	srand((unsigned int)time(NULL));
	x =  rand() % 1000;
	while (ans != x)
	{
		cout << "Enter your guess: ";
		cin >> ans;
		if (ans > x)
		{
			cout << "try lower!\n";
		}
		else if(ans < x)
		{
			cout << "try higher!\n";
		}
		else
		{
			cout << "bingo, you got it.\n";
			return 0;
		}
	}
}
