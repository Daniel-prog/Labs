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

    cout << "Введите левую границу a: ";
	cin >> a;
	cout << "Введите правую границу b: ";
	cin >> b;
	cout << "Введите шаг h: ";
	cin >> h;
	cout << endl;

	if (a < 0 || b <= a) { cout << "Вы ввели неверные границы!"; exit(1); }
    if (h == 0 || (b - a) % h != 0) { cout << "Вы ввели неверный шаг h!"; exit(1); }

    out.open("text.txt");

    if (out.is_open()) {
            for (int i = a; i <= b; i+=h){
                out << i << endl; //запись значения х
                out << (sin(i + 1)) / (i + 0.1) << endl;//запись значения f(x)
            }
            cout << "Запись успешно завершена!";
    } else {
        cout << "Не удалось открыть файл.";
      }

    return 0;
}

