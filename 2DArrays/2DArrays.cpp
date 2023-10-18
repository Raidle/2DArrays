#include <iostream>
using namespace std;
// 10/18/2023 CIS144 Class - Week 8 Lecture 2

int main()
{
    int t[4][5] = { {11, 12, 35, 76, 67},{5,4,5,87, 7},{5,6,67,8, 54},{4, 6, 4, 665, -54} };
    int rows = sizeof t / sizeof t[0];
    int cols = sizeof t[0] / sizeof(int);

    cout << "Number of Rows: " << rows << endl;
    cout << "Number of Columns: " << cols << endl;
    cout << "\n\n";
 

    cout << "Array Values: " << endl;
    for (int r = 0; r < rows; r++) {
        cout << "Row " << r + 1 << " ";
        for (int c = 0; c < cols; c++) {
            cout << t[r][c] << " ";
        }
        cout << "\n";
    }
}

