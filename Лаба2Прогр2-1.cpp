#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");

    string a = "������. � ���.";
    ofstream out;

    out.open("text2.txt");

    if (out.is_open()) {
            out << a;
            cout << "������ ������� ���������!";
    } else {
        cout << "�� ������� ������� ����.";
        }

    return 0;
}

