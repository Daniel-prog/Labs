#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Set //� ������������ ��������
{
	int n;
	int* a;
public:
	Set(int n);
	~Set();
	void output();
	Set& operator+(Set&);
};

Set& Set::operator+(Set& ob1) //�������� +
{
	if (ob1.n != n)
	{
		cout << "���������� ��������� �� ���������." << endl;
		exit(1);
	}
	for (int i = 0; i < n; i++)
		a[i] = a[i] + ob1.a[i];
	return *this;

}

Set::Set(int n) //�����������
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

Set::~Set() //����������
{
	delete[] a;
}

void Set::output() //����� ��������� ��-�� �� �����
{
	for (int i = 0; i < n; i++)
		cout << a[i] << ' ';
	cout << endl;
}

int main() {
	setlocale(LC_ALL, "rus");
	int n;
	cout << "������� ���-�� ��������� ��������� (1-100): ";
	cin >> n;

	Set s1(n);
	cout << "����� 1 ���������: " << endl;
	s1.output();

	Set s2(n);
	cout << "����� 2 ���������: " << endl;
	s2.output();

	Set s3(n);
	s3 = s1 + s2;
	cout << "����� 1 � 2: " << endl;
	s3.output();

	return 0;
}
