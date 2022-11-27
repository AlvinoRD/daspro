#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "masukkan angka = ";
    cin >> x;
    for (int a = 1; a <= 10; a++){
        cout << a << " x " << x << " = " << a * x << endl;
        }
    return 0;
}
