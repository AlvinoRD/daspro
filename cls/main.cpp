#include <iostream>

using namespace std;

int main()
{
    int x;
    int jml_index;
    int harga[] = {5000,10000,50000};
    int total;
    string lanjut;

    cout << "MENU MAKANAN HARI INI : " << endl;
    cout << "1. Ayam" << " = " << harga[0] << endl;
    cout << "2. Tahu " << " = " << harga[1] << endl;
    cout << "3. Tempe " << " = " << harga[2] << endl;

    cout << "MAKANAN ANDA HARI INI ADALAH : ";
    cin >> x;
    cout << endl;
    while(lanjut == "iya");
    cout << endl;

    switch(x)
    {
    case 1:
        cout << "1. AYAM" << " = " << harga[0] << endl;
        break;
    case 2:
        cout << "2. TAHU" << " = " << harga[1] << endl;
        break;
    case 3:
        cout << "3. TEMPE" << " = " << harga[2] << endl;
        break;
    }
    return 0;
}
