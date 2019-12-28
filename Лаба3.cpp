#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

struct Book {
    unsigned int regnumber;
    unsigned int cipher;
    unsigned int year;
    string autors;
    string bookname;
};

void add(unsigned int n, Book st_arr[]) {

    for (int i = 0; i < n; i++) {
        cout << "Введите уч. номер " << i+1 << " книги: ";
        cin >> st_arr[i].regnumber;
        cout << "Введите шифр " << i+1 << " книги: ";
        cin >> st_arr[i].cipher;
        cout << "Введите авторов " << i+1 << " книги: ";
        cin >> st_arr[i].autors;
        cout << "Введите название " << i+1 << " книги: ";
        cin >> st_arr[i].bookname;
        cout << "Введите год издания " << i+1 << " книги: ";
        cin >> st_arr[i].year;
        cout << endl;
    }
}

void structsort (unsigned int n, Book st_arr[]) {
    Book temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (st_arr[j].regnumber > st_arr[j + 1].regnumber) {
                temp = st_arr[j];
                st_arr[j] = st_arr[j + 1];
                st_arr[j + 1] = temp;
            }
        }
    }
}

void binsearch (unsigned int n, Book st_arr[], unsigned int item) {
unsigned int low = 0, mid, high, guess;
high = n - 1;

    while (low <= high) {
        mid = (low + high) / 2;
        guess = st_arr[mid].regnumber;

        if (guess == item) {
            cout << "Ваша книга (после сортировки) под номером " << mid + 1;
            exit(0);
        }
        if (guess > item)
            high = mid - 1;
        else
            low = mid + 1;
    }

    cout << "Такого рег. номера нет в базе!";

}

int main () {
    setlocale(LC_ALL, "RUS");

    unsigned int n, item;

    cout << "Введите количество книг: ";
    cin >> n;

    Book *st_arr = new Book[n];

    add(n, st_arr);
    structsort(n, st_arr);
    cout << "Введите искомый рег. номер: ";
    cin >> item;

    binsearch (n, st_arr, item);

    delete [] st_arr;


return 0;
}

