#include "stdafx.h"
#include "EX1.h"
using namespace std;


EX1::EX1()
{
}


EX1::~EX1()
{
}

int EX1::ex1_3()
{
	cout << "Hello World!" << endl;
	return 0;
}

int EX1::ex1_4()
{
	int num1;
	int num2;
	cout << "Please enter number A:";
	cin >> num1;
	cout << "Please enter number B:";
	cin >> num2;
	cout << "A * B = ";
	cout << num1*num2;
	cout << endl;
	return 0;
}

int EX1::ex1_5()
{
	int num1;
	int num2;
	cout << "Please enter number A:";
	cin >> num1;
	cout << "Please enter number B:";
	cin >> num2;
	cout << "A * B = " << num1*num2 << endl;
	return 0;
}

int EX1::ex1_6()
{
	/*
	**不合法，当一条语句后面跟上";"时，意味着一句语句的结束，第二行的"<<"的操作符没有操作对象了
	*/
	int v1 = 0;
	int v2 = 1;
	cout << "The sum of " << v1;
	cout << " and " << v2;
	cout << " is " << v1 + v2 << endl;
	return 0;
}

int EX1::ex1_7()
{
	/*
	**注释不能嵌套 
	*/
	return 0;
}

int EX1::ex1_8()
{
	cout << "/*" << endl;
	cout << "*/" << endl;
	return 0;
}

int EX1::ex1_9()
{
	int num = 50;
	int sum = 0;
	while (num <= 100)
	{
		sum += num;
		num++;
	}
	cout << sum << endl;
	return 0;
}

int EX1::ex1_10()
{
	for (int i = 9; i > 0; --i)
	{
		cout << i << endl;
	}
	return 0;
}

int EX1::ex1_11()
{
	int num1, num2;
	cout << "Please enter number A:";
	cin >> num1;
	cout << "Please enter numeber B:";
	cin >> num2;
	for (int i = num1; i <= num2; i++)
	{
		cout << " " << i;
	}
	cout << endl;
	return 0;
}

int EX1::ex1_16()
{
	int sum = 0;
	int num;
	while (cin>>num)
	{
		sum += num;
	}
	cout << sum << endl;
	return 0;
}
