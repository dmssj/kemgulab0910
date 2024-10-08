#include <iostream>     // Обработка массивов
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int F[3][3] = {
        { 1, -2, 3 },
        {-4, 5, -6},
        {7, -8, 9}
    };

    cout << "исходная \n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << F[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (F[i][j] < 0) F[i][j] = 0;
        }
    }

    cout << "полученая \n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << F[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}