#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");

    string a = "Привет. Я тут.";
    ofstream out;

    out.open("text2.txt");

    if (out.is_open()) {
            out << a;
            cout << "Запись успешно завершена!";
    } else {
        cout << "Не удалось открыть файл.";
        }

    return 0;
}

