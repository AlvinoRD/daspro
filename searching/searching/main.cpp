#include <iostream>

using namespace std;

int main()
{
    int angka[] = {9, 4, 5, 7, 3, 11, 15};
    int length = sizeof(angka)/sizeof(*angka);
    int cari;
    int hasil;

    cout << "inilah datanya" << endl;

    for (int a = 0; a < length; a++) {
        cout << "Data ke - " << a << " : " << angka[a] << endl;
    }
    cout << "masukkan data yang dicari anda : ";
    cin >> cari;
    for (int b = 0; b < length; b++){
    if (cari == angka[b]) {
        cout << " ada " << endl;
        hasil++;
    }
    else {
        cout << " kamu kena prank " << endl;
    }
}
    return 0;
}
