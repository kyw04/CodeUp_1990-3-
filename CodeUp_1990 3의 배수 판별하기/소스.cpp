#include <iostream>
using namespace std;

int main()
{
	string str;
	cin >> str;
	int num = 0, len = str.length();
	for (int i = 0; str[i]; i++)
	{
		num += str[len - 1 - i] - '0';
		num %= 3;
	}
	if (num)
		cout << 0;
	else
		cout << 1;
	return 0;
}