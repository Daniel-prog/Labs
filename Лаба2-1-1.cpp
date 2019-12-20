#include <iostream>
#include <cmath>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");

    int a, b, h;
    ofstream out;

    cout << "������� ����� ������� a: ";
	cin >> a;
	cout << "������� ������ ������� b: ";
	cin >> b;
	cout << "������� ��� h: ";
	cin >> h;
	cout << endl;

	if (a < 0 || b <= a) { cout << "�� ����� �������� �������!"; exit(1); }
    if (h == 0 || (b - a) % h != 0) { cout << "�� ����� �������� ��� h!"; exit(1); }

    out.open("text.txt");

    if (out.is_open()) {
            for (int i = a; i <= b; i+=h){
                out << i << endl; //������ �������� �
                out << (sin(i + 1)) / (i + 0.1) << endl;//������ �������� f(x)
            }
            cout << "������ ������� ���������!";
    } else {
        cout << "�� ������� ������� ����.";
      }

    return 0;
}

