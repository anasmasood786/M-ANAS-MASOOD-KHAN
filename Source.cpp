#include <iostream>
using namespace std;
int main()
{
	//Task 1:
	int num = 0;
	int x = 0;
	cout << "Enter the Number : ";
	cin >> num;
	for ( x = 0; x <=num ; x++)
	{
		cout << num - x << endl;
	}

	
	//Task 9: 

	int N = 0;
	int x = 0;
	int i = 0;
	cout << "Enter the Number : ";
	cin >> N;
	for (i = 0; i < N; i++)
	{
		for (x = 0; x < N; x++)
		{
			cout << "*";
		}
		cout << endl;
	}


	//Task 10;
	int Num = 0;
	int x = 0;
	int i = 0;
	cout << "Enter the Number : ";
	cin >> Num;
	for (i = 0; i < Num; i++)
	{
		for (; x < Num - i; x++)
		{
			cout << "*";
		}
		x = 0;
		cout << endl;

	}



	//Task 8;
	int Numb = 0;
	int y = 0;
	int i = 0;
	cout << "Enter the Number : ";
	cin >> Numb;
	for (i = 0; i < Numb + 1; i++)
	{
		for (int x = 0; x < y; x++)
		{
			cout << "*";
		}

		cout << endl;
		y++;

	}


	//Task 11;
	int Num = 0;
	int y = 0;
	int i = 0;
	cout << "Enter the Number : ";
	cin >> Num;
	for (i = 0; i < Num + 1; i++)
	{
		for (int x = 0; x < y; x++)
		{
			cout << "*";
		}
		cout << endl;
		y++;
	}
	for (i = 0; i < Num; i++)
	{
		for (int x = 0; x < Num - i; x++)
		{
			cout << "*";
		}

		cout << endl;
		y++;
	}


	//Task 6:
	int n = 10;
	int i = 0;
	int number = 0;
	cout << "Enter the Number for Table : ";
	cin >> number;
	for (i = 0; i <= n; i++)
	{
		cout << number << " X " << i << " = " << number * i << endl;



		//Task 7 :

		int num1 = 0;
		int num2 = 0;
		int i = 0;
		cout << "Enter your First Number : ";
		cin >> num1;
		cout << "Enter your Second Number : ";
		cin >> num2;
		for (num1 = num1; num1 <= num2; num1++)
		{
			cout << num1 + i << endl;

		}

		
		
		//Task 5 :
		int num = 0;
		int i = 0;
		int fact = 1;
		cout << "Enter the Number : ";
		cin >> num;
		for ( i = 1; i <= num; i++)
		{
			fact * i;
		}
		{
			cout << "The Factorial of " << num << " is :" << fact << endl;
		}
		

//Task : 2

int num = 0;
int i = 0;
cout << "Enter the Number : ";
cin >> num;
for ( i = 1; i <=num;  i++)
{
	cout << i << endl;

}


///Modified:
int numb = 0;
int x = 0;
cout << "Enter the Number : ";
cin >> numb;
for (x = 0; x < numb; x++)
{
	cout << numb-x << endl;

}

//Task 3 :
int num = 10;
int i = 0;
int sum = 0;
cout << "The limit Number is ; 10 " << endl;

for (i = 0; i <=num; i++)
{
	sum += i;
}
{
	cout << "The sum of first 10 natural number is :" << sum << endl;
}




		return 0;
	}