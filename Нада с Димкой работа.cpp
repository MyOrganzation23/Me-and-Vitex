// Здесь начнётся наше розвитие в програмной индустрии. Да прибудет с нами СИЛА И СТРЕМЛЕНИЕ!
// Спасибо всем за помощь в проекте. Русский язык плохо работает на сайте

#include <iostream>
#include <windows.h>
#include <iomanip>
#include "string"
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << setw(56) << "{TheLastChance and Vitex}" << endl;
	system("color 0E");


	cout << "You are adopted" << endl;
	cout << "Сам такой!" << endl;

	int x;
	cout << "Hello World" << endl;
	cout << "Are you adopted?" << endl << "1==Yes/0==No" << endl;
	cin >> x;
	if (x == 1) { cout << "Welcome home, baby" << endl; }

	else if (x == 0) { cout << "Go back to orphanage" << endl; }
	else { cout << "You ARE adopted, 100%" << endl; }




	system("pause");
	return 0;
}