#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#define eps 0.000001
using namespace std;

double fx(double x) { return sin(x+1.0)/(x+0.1); } // вычисляемая функция
double dfx(double x) { return (cos(x+1) * (x + 0.1) - sin(x + 1)) / ((x + 0.1) * (x + 0.1)); } // производная функции

double solve(double (*fx)(double), double (*dfx)(double), double x0, double &iter) {
  double x1  = x0 - fx(x0)/dfx(x0);// первое приближение
  while (fabs(x1-x0)>eps) { // пока не достигнута точность 0.000001
    x0 = x1;
    x1 = x0 - fx(x0)/dfx(x0);
    iter++;
  }
return x1;
}

int main () {
    setlocale(LC_ALL, "RUS");
    double iter = 0, x0;
    cout << "Введите начальное приближение (От 0 до Пи): ";
    cin >> x0;

    if (x0 < 0 || x0 > M_PI) {
        cout << "Вы ввели значение, не соответствующее данному диапозону (от 0 до Пи)!";
        exit(0);
    }

    cout << "Значение корня уравнения: " << solve(fx, dfx, x0, iter) << endl;
    cout <<  "Количечство итераций: " << iter;
    return 0;
}
