#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	string str;
	bool f = 1;
	cin >> str;
	
	for (int i = 0; i < str.length()/2; i++) {
		if (str[i] != str[str.length()- 1 - i]) {
			f=0;
			cout << " не является паллиндромом";
			break;
		}
		else cout<<"является паллиндромом";
	}
	
}
