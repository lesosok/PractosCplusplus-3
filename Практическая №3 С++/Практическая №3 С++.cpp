#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");

    const int rows = 3;
    const int columns = 5;
    double array[rows][columns]{};
    double sum = 0;

    cout << "Вам необходимо заполнить двумерный массив(3 на 5) дробными числами:\n";
    for (int i = 0; i < rows; i++) {
        double a = 0;
        for (int j = 0; j < columns; j++) {
            cout << "Заполните ячейку [" << i << "][" << j << "]: ";
            cin >> array[i][j];
            a = a + array[i][j];
        }
        sum = sum + a;
    }

    double sa = sum / 15;
    cout << "Среднее арифметическое элементов строк: " << sa;
}