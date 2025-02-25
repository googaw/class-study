// myfirst.cpp --display a message
#if 0



#include<iostream>

int main()
{
	using namespace std;
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];

	cout << "Enter your name£º\n";
	cin >> name;
	cout << "Enter your favorite dessert:\n";
	cin >> dessert;
	cout << "I have some delicious" << dessert;
	cout << "for you" << name << ".\n";
	return 0;
}

#endif // 0