#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Set //с динамическим массивом
{
	int n;
	int* a;
public:
	Set(int n);
	~Set();
	void output();
	Set& operator+(Set&);
};

Set& Set::operator+(Set& ob1) //перегруз +
{
	if (ob1.n != n)
	{
		cout << "Количество элементов не совпадает." << endl;
		exit(1);
	}
	for (int i = 0; i < n; i++)
		a[i] = a[i] + ob1.a[i];
	return *this;

}

Set::Set(int n) //конструктор
{
	this->n = n;
	srand(time(0));
	if (n <= 0) {
		cout << "Error!" << endl;
		exit(1);
	}
	else
	{
		a = new int(n);
		bool alreadyHere;
		int i = 0;
		while (i < n)
		{
			alreadyHere = false;
			int newRandomValue = rand();

			for (int j = 0; j < i; j++)
			{
				if (a[j] == newRandomValue)
				{
					alreadyHere = true;
					break;
				}
			}

			if (!alreadyHere)
			{
				a[i] = newRandomValue;
				i++;
			}
		}
	}
}

Set::~Set() //деструктор
{
	delete[] a;
}

void Set::output() //вывод элементов мн-ва на экран
{
	for (int i = 0; i < n; i++)
		cout << a[i] << ' ';
	cout << endl;
}

int main() {
	setlocale(LC_ALL, "rus");
	int n;
	cout << "Введите кол-во элементов множества (1-100): ";
	cin >> n;

	Set s1(n);
	cout << "Вывод 1 множества: " << endl;
	s1.output();

	Set s2(n);
	cout << "Вывод 2 множества: " << endl;
	s2.output();

	Set s3(n);
	s3 = s1 + s2;
	cout << "Сумма 1 и 2: " << endl;
	s3.output();

	return 0;
}
