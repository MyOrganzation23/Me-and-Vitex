#include<iostream>
#include"stdio.h"
#include"windows.h"
#include"math.h"
usingnamespace std;


int main() //Ты что наделал такое?)) А что, нельзя?
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a, b;
	cout << "Ââåä³òü a, b" << endl;
	cin >> a >> b;
	double y = ((a != 17) || (a > 9) && (a < 100) ?
		abs(a - b) : pow(a, 3) - pow(b, 3));
	cout << "Ðåçóëüòàò:" << y << endl;
	cout << "Òû ïðèåìíûé" << endl;

	system("pause");
	return 0;
}
//[ÎÑÓÆÄÞ!!]
