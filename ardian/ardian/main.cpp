#include <iostream>

using namespace std;

int main()
{
    int uang, harga, jumlah;
    uang = 5000;
    cout << "harga permen = ";
    cin >> harga;

    if (harga == 1000) {
        jumlah = 3;
    }
    else if (harga == 500) {
        jumlah = uang/harga;
    }
    else if (harga == 300) {
        for (int a = 1; a * harga < uang; a++){
                cout << a * harga << endl;
                jumlah = a ;
        }
    }
    cout << "jumlah permen ardian = " << jumlah << endl;

    cout << "==================================================" << endl;

    //bentuk array

    /*
    int jumlah_index = 3;
    int uang = 5000;
    int harga[3] = {1000, 500, 300};
    int jumlah;

    harga[0];
        jumlah = 3;
        cout << "1000 = 3" << endl;

    harga[1];
        jumlah = uang/harga[1];
        cout << "500 = " << uang/harga[1] << endl;

    harga[2];
        for (int i = 1; i * harga[2] < uang; i++){
            jumlah = i;
            cout << i << "." << i * harga[2] << endl;
        }
    */
    return 0;
}
