#include <iostream>

using namespace std;

int main()
{
    string agung[] = {"siti", "soto", "sete", "sata"};
    int length = sizeof(agung)/sizeof(*agung);
    string cari;
    int hasil;

    cout << "inilah datanya" << endl;

    for (int a = 0; a < length; a++) {
        cout << "Data ke - " << a << " : " << agung[a] << endl;
    }
    cout << "masukkan data yang dicari anda : ";
    cin >> cari;
    for (int b = 0; b < length; b++){
    if (cari == agung[b]) {
        hasil++;//kalo hasil b ditemukan maka bakal increment. tapi kalo data b tidak ditemukan maka maka b = 0
    }
    }
    if (hasil > 0){
        cout << "data ditemukan pada - ";
        for (int c = 0; c < length; c++){
            if (cari == agung[c]){
                cout << c << endl;
            }
        }
    }
    else {
        cout << "kamu kena prank " << endl;
    }

    return 0;
}
