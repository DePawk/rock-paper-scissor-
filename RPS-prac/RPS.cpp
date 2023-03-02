#include <iostream>
#include <time.h>
using namespace std;
int main()
{
	srand(time(NULL));
	int user = 0;
	int cpu = 0;
	cout << "Rock Paper Scissors!" << endl;
	enum choice {Rock=1,Paper,Scissor };
	cout << "choose your weapon" << endl;
	cout << " enter a number between 1~3 to choose 1) Rock 2)Paper 3)Scissor" << endl;
	while (!(cin >> user))
	{
		cout << "Error:enter a number please:" << endl;
		cin.clear();
		cin.ignore(123, '\n');
	}
	if (user == Rock)
	{
		cout << "You choose Rock" << endl;
	}
	else if (user == Paper)
	{
		cout << "You choose Paper" << endl;

	}
	else if (user == Scissor) {
		cout << "You chose Scissor" << endl;
	}
	else if (user < 0 || user>3)
	{
		cout << "you chose an invalid number therefore we terminate" << endl;
		exit(0);
	}
	cpu = rand() % 3+1;
	if (cpu == Rock)
	{
		cout << "AI chose Rock" << endl;
	}
	else if (cpu == Paper)
	{
		cout << "AI chose Paper" << endl;
	}
	else if (cpu == Scissor) {
		cout << "AI chose Scissor" << endl;
	}
	if (user == cpu)
	{
		cout << "its a draw" << endl;
	}
	else if (user == Rock)
	{
		if (cpu == Paper)
		{
			cout << "you lost" << endl;
		}
		else
		{
			cout << "you won" << endl;
		}
	}
	else if (user == Paper)
	{
		if (cpu == Scissor)
		{
			cout << "you lost" << endl;
		}
		else
		{
			cout << "you won" << endl;
		}
	}
	else if (user == Scissor)
	{
		if (cpu == Rock)
		{
			cout << "you lost" << endl;
		}
		else
		{
			cout << "you won" << endl;
		}
	}
	return 0;
}