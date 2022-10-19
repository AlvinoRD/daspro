#include <iostream>

using namespace std;

int main()
{
    int x;
    int y;

    cout << "masukkan hari : ";
    cin >> x;

    cout << "masukkan bulan : ";
    cin >> y;

    if (x <= 31 && y % 2 == 1 && y <= 7) {
        cout << "valid" << endl;
        if (y == 2 && y <= 28) {
            cout << "valid" << endl;
        }
    }else if (x <= 31 && y % 2 == 0 && y >= 8) {
        cout << "valid" << endl;
    }else {
        cout << "tidak valid" << endl;
    }
    return 0;
}
