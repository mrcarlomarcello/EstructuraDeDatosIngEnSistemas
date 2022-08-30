#include <iostream>
using namespace std;

int A[3][5];

void printingRow (int row)
{
    for (int i=0; i<5; ++i)
    {
        cout << A[row][i] << " ";
    }
    cout << "\n";
}

int main() {
    cout << "Hello, World!" << endl;

    for (int i = 0; i < 3; ++i)
    {
        printingRow(i);
    }
    return 0;
}
