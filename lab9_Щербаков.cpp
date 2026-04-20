#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int main() {
    const int ROWS = 3;
    const int COLS = 3;
    double matrix[ROWS][COLS];

    cout << "Enter elements for " << ROWS << "x" << COLS << " matrix:" << endl;
    vector<double> allElements;

    // Ввод данных и заполнение списка всех элементов
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cin >> matrix[i][j];
            allElements.push_back(matrix[i][j]);
        }
    }

    // Сортируем все элементы, чтобы легко найти max и min
    sort(allElements.begin(), allElements.end());

    double min1 = allElements[0];
    double min2 = allElements[1];
    double max1 = allElements[allElements.size() - 1];
    double max2 = allElements[allElements.size() - 2];

    // Вычисления
    double productMax = max1 * max2;
    double diffMin = min1 - min2;

    cout << "\nProduct of 2 max: " << productMax << endl;
    cout << "Difference of 2 min: " << diffMin << endl;

    // Создание одномерного массива из сумм строк
    double rowSums[ROWS];
    cout << "\nArray of row sums: ";
    for (int i = 0; i < ROWS; i++) {
        rowSums[i] = 0;
        for (int j = 0; j < COLS; j++) {
            rowSums[i] += matrix[i][j];
        }
        cout << rowSums[i] << " ";
    }
    cout << endl;

    return 0;
}