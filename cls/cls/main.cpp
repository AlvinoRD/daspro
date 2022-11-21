#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    string nama, prodi, lanjut;
    int nim;
    do {
    cout << "masukkan nama anda : ";
    cin >> nama;
    cout << "masukkan nim anda : ";
    cin >> nim;
    cout << "masukkan prodi anda ; ";
    cin >> prodi;
    cout << "Halo " << nama << " !!! " << "selamat datang di " << prodi << ", sebagai identitas kamu disini kamu memiliki nomor : " << nim << endl;
    system("cls");
    } while (true);
    return 0;
}
