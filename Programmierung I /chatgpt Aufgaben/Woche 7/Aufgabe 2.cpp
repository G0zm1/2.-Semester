#include <iostream>
using namespace std;


void Ausgabe(int i)
{
	cout << i << endl;
}

void Ausgabe(double d)
{
	cout << d << endl;
}

void Ausgabe(string s)
{
	cout << s << endl;
}



int main()
{
	int i = 23;
	double d = 13.33;
	string s = "Musterknabe";

	cout << "Here ist shown the integer: " << endl;
	Ausgabe(i);
	cout << "Here is shown the double: " << endl;
	Ausgabe(d);
	cout << "Here is shown the string: " << endl;
	Ausgabe(s);

	return 0;

}

