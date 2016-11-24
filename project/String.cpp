#include<iostream>
#include<windows.h>
#include<cstring>
int main()
{
	using namespace std;
	const int Size = 15;
	char name1[Size];
	char name2[Size]= "C++owboy";
	cout << "Howdy!I'm" << name2;
	cout << "what's your name?\n";
	cin >> name1;
	cout << "Well," << name1 << ",your name has ";
	cout << "in an array of" << sizeof(name1) << "byte.\n";
	cout << "Your initial is" << name1[0] << ".\n";
	name2[3] = '\0';
	cout << "Here are the first 3 character of my name:";
	cout << name2 << endl;
	system("pause");
	return 0;
}