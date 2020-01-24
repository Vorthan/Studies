// Biedny turek.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <string>
#include <math.h>
using namespace std;


string reverseString(string str)
{
	string Rstr;
	int len = str.length();
	for (int i = len - 1; i >= 0; i--)Rstr += str[i];
	return Rstr;
}

string zamianaZzDec(int podstawa, string zmienna)
{
	int liczba = stoi(zmienna);
	string helper;
	
	for (; liczba > 0;)
	{
		int temp = (liczba % podstawa);
		if(temp > -1 && temp < 10)
		helper += temp+48;
		if(temp >9 && temp < 33)
		helper += temp + 55;
		liczba = liczba / podstawa;
	}

	helper = reverseString(helper);
	return helper;
}

string zamianaNaDec(int podstawa , string zmienna)
{
	int length= zmienna.length();
	int* tab = new int[length];
	int temp=0;
	for (int i = 0; length > i; i++)
	{
		int helper = zmienna[i];
		if (helper > 47 && helper < 58)
			tab[i] = (zmienna[i]-48)*(pow(podstawa,length-i-1));
		else 
			tab[i] = (zmienna[i]-55)*(pow(podstawa, length - i - 1));
		
	}
	for (int i = 0; length > i; i++)
		temp += tab[i];

	std::string s = std::to_string(temp);
	return s;

}
string zamianaNaDowolnySystem(int pod1, int pod2, string zmienna)
{
	if (pod1 == 10)
		return zamianaZzDec(pod2, zmienna);
	else if (pod2 == 10)
		return zamianaNaDec(pod1, zmienna);
	else
		return zamianaZzDec(pod2, zamianaNaDec(pod1, zmienna));

}


int main()
{
	string zmienna = "111111";
	cout << zamianaNaDowolnySystem(10, 8, zmienna);




}


