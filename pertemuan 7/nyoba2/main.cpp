#include <iostream>

using namespace std;

int main()
{
    int x;

    cout << "masukkan temperatur : ";
    cin >> x;

    if (x <= 0) {
        cout << "ice" <<endl;
    }else if (x >= 100) {
        cout << "gas" <<endl;
    }else {
        cout << "cair" <<endl;
    }
    return 0;
}
