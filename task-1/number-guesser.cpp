#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int x, range, ans, counter = 0;;
	srand((unsigned int)time(NULL));
	cout << "Enter the range you want to guess within: ";
	cin >> range;
	x =  rand() % range;
	while (ans != x)
	{
		cout << "Enter your guess: ";
		cin >> ans;
		counter++;
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
			cout << "bingo, you got it. You guessed it in " << counter << " tries. \n";
			return 0;
		}
	}
}
