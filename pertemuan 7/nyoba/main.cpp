#include <iostream>

using namespace std;



int main()
{
    int panjang, lebar, tinggi, luas;
    cout << "menghitung luas kubus" <<endl;

    cout << "masukkan panjang : " <<endl;
    cin >> panjang;

    cout << "masukkan lebar : " <<endl;
    cin >> lebar;

    cout << "masukkan tinggi : " <<endl;
    cin >> tinggi;

    luas = ((2*panjang*lebar)+(2*lebar*tinggi)+(2*tinggi*panjang));
    cout << endl;

    cout << "luas balok : " << luas << endl;
    return 0;
}
