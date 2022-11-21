#include <iostream>

using namespace std;

int main()
{
    int total;
    int jml_arr;
    int angka[jml_arr];

    cout << "jumlah index : ";
    cin >> jml_arr;

    cout << "===========================================================" << endl;

    for (int a = 0; a < jml_arr; a++)
    {

    cout << "masukkan nilai index ke - " << a << " : ";
    cin >> angka[a];
    total += angka[a];

    }

    cout << "===========================================================" << endl;

    cout << "total semua : " << total << endl;
    return 0;
}
