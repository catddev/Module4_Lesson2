#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<time.h>
#include <Windows.h>
#include <iostream>

using namespace std;

void main()
{
	srand(time(NULL));

	setlocale(LC_ALL, "Rus");

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 15);

	int tn = 0;

start:

	printf("task number:\t");
	scanf("%d", &tn);

	switch (tn)
	{
	case 1:
	{
		int n[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
		int pens[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
		int size = 10;
		cout << n << endl;
		cout << pens << endl;

		if (n > pens)
		{
			cout << n - pens;

		}
		else cout << pens - n;

		cin >> size;

		/*for (int i = 0; i < 10; i++)
		{
			cout << n[i] << "\t";
		}*/

	}
	break;
	case 2:
	{
		int b[8];
		int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
		for (int i = 0; i < 8; i++)
		{
			cout << b[i] << endl;
		}
	}
	break;
	case 3:
	{
		int *d;
		d = new int[100];
	}
	break;
	case 4:
	{
		int *a;
		int size = 0;
		cout << "How much?" << endl;
		cin >> size;
		a = new int[size];
		cout << "Initialize:" << endl;
		for (int i = 0; i < size; i++)
		{
			cin >> a[i];
		}
		for (int i = size - 1; i >= 0; i--)
		{
			cout << a[i] << " " << endl;
		}
	}
	break;
	case 5:
	{
		int *n;
		int size = 0;
		cout << "How much?" << endl;
		cin >> size;
		n = new int[size];
		int x = 0;
		cout << "Initialize:" << endl;

		for (int i = 0; i < size; i++)
		{
			cin >> n[i];
			if (n[i] % 2 == 0)
				x = x + n[i];
		}
		cout << x << " " << endl;
	}
	break;
	case 6:
	{
		int *n;
		int size = 0;
		cout << "How much?" << endl;
		cin >> size;
		n = new int[size];
		int x = 0;
		cout << "Initialize:" << endl;

		/*	for (int i = size - 1; i >= 0; i--)
			{
				cin >> n[i];
				x=
			}
			cout << x << " " << endl;*/
	}
	break;
	case 7:
	{
		char message[] = "Hello world!";
		int size = strlen(message);
		for (int i = 0; i < size / 2; i++) //naity os', potom otzerkalit
		{
			char temp = message[i];
			message[i] = message[size - i - 1]; //чтобы от конца плясать надо взять конец минус то что наращивается и минус 1 потому что в Си индексация идет с 0 и последний символ находится в символе не 13, к примеру, а 12 
			message[size - i - 1] = temp;
		}
		cout << message << endl;
	}
	break;
	case 8:
	{
		int a, b, n = 0;
		a = rand() % 1000;
		b = rand() % 1000;
		cout << a << " " << b << endl;

		if (b > a)
		{
			/*int c = a;
			b = a;
			a = c;*/
			a = b + a; // example 10 and 2; 10+2=12
			b = a - b; // 10
			a = a - b; // 2
		}
		if (a > b)
		{
			for (int i = 0; i < 3; i++)
			{
				cin >> n;
				if (n > b&&n < a)
				{
					cout << "popadaet" << endl;
				}
				else
				{
					cout << "ne popadaet" << endl;
				}
			}
		}
	}
	break;
	case 9:
	{
		int product = 0;
		int number = 0;

		int price1 = 100;
		int price2 = 200;
		int price3 = 300;
		int price4 = 400;
		int sum = 0;

		int answer = 0;
		bool exit = false;
		while (!exit)
		{
			cout << "choose product:" << endl;
			cin >> product;
			switch (product)
			{
			case 1:
			{
				cin >> number;
				sum = sum + price1*number;
				cout << sum << endl;
			}
			break;
			case 2:
			{
				cin >> number;
				sum = sum + price2*number;
				cout << sum << endl;
			}
			break;
			case 3:
			{
				cin >> number;
				sum = sum + price3*number;
				cout << sum << endl;
			}
			break;
			case 4:
			{
				cin >> number;
				sum = sum + price4*number;
				cout << sum << endl;
				break;
			}
			case 0:
			{
				cout << "Quit? 1-yes, 2-no, continue" << endl;
				cin >> answer;
				if (answer == 1) exit = true;
				else if (answer == 2)
				{
					exit = false;
					sum = 0;
				}
			}
			break;
			}
			cout << "TOTAL: "<<sum << endl;
			
		}
	}
		break;
	case 10: //vyvesti vse postye chisla v diapozone
	{
		for (int i = 1; i < 100; i++)
		{
			bool is_prime = true;
			for (int j = 2; j < i; j++)
			{
				if (i%j == 0)
					is_prime = false;
			}
				
			if(is_prime)
				cout << i << " ";
			}
		cout << endl;
			system("pause");
	}
	break;
	case 11:
	{
		int n = 0, m=0;
		
		bool stop = false;
		while(!stop)
		{
			int player = 0;
			int computer = 0;

			int x = 2 + rand() % 10;
			int y = 2 + rand() % 10;
			cout << x << " " << y << endl;
			x = x + y;
			player = player + x;
			cout << "you have: " << player << endl;

			int a = 2 + rand() % 10;
			int b = 2 + rand() % 10;
			a = a + b;
			computer = computer + a;

			bool enough = false;
			bool myturn = false;

			while (!enough)
			{
				if (player < 22)
				{
					cout << "more cards? 1 - yes, 2 - no" << endl;
					cin >> n;
					if (n == 1)
					{
						int card = 2 + rand() % 10;
						player = player + card;
						cout << "your card " << card << " newTOTAL: " << player << endl;
					}
					else if (n == 2)
					{
						cout << "computer has " << computer << endl;
						enough = true;
					}
				}
				else if (player > 21)
				{
					cout << "you lost!" << endl;
					enough = true;
					myturn = true;
				}
			}

			while (!myturn)
			{
				if (computer > 21)
				{
					cout << "computer lost!" << endl;
					myturn = true;
				}

				if (computer > player && computer <= 21)
				{
					cout << "you lost! computerTOTAL: " << computer << endl;
					myturn = true;
				}
				else if (computer < player && player <= 21)
				{
					int newcard = 2 + rand() % 10;
					computer = computer + newcard;
					cout << "computer takes one more card " << newcard << endl;
					cout << "computerTOTAL: " << computer << endl;
				}
				else if (computer == player)
				{
					cout << "DRAW: " << computer << "= " << player << endl;
					myturn = true;
				}
			}

			cout << "wanna play more? 1 - yes, 2 - no" << endl;
			cin >> m;
			if (m == 1) stop = false;
			else if (m == 2) stop = true;
		}

	}
	break;
	case 12:
	{

	}
	break;
	default:
		printf("\nerror: no tasks\n\n");
	}
	goto start;
	}