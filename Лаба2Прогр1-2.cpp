#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    string line;
    int lines = 0, j = 0;
    double p;

    ifstream in("text.txt"); // окрываем файл дл€ чтени€
    if (in.is_open())
    {
        while(getline(in, line)) {
            lines++;
        }

        in.clear();
        in.seekg(0);

        double *values = new double[lines];
        double *fxvalues = new double[lines/2];

        for (int i = 0; i < lines; i++) {
            in >> values[i];
            cout << values[i] << endl;
        }

        cout << "¬ведите p: ";
        cin >> p;

        for (int i = 1; i < lines; i+=2) {
            if (values[i] < p)  {
                fxvalues[j] = values[i];
                j++;
            }
        }
        cout << endl;

        for (int i = 0; i < j; i++) {
            cout << fxvalues[i] << endl;
        }

        delete [] values;
        delete [] fxvalues;
    }

    in.close();     // закрываем файл

    return 0;
}
