#include <iostream>

using namespace std;

int main()
{
    int max = 5;//hanya bisa mengisi 5 angka
    int top = -1;//karena array ingin dimulai dari 0, kalo di++ kan langsung nambah 1
    string keranjang[max];
    string lanjut;

    do{
        system("cls");
        if (top == max-1){//index ke-4. karena kalo ngitung dari 0 maka 0 1 2 3 4 (5 angka)
            cout << "keranjang penuh" << endl;
        }
        else {
            top++;//untuk mulai dari 0
            cout << "masukkan isi : ";
            cin >> keranjang[top];
            cout << "data " << keranjang[top] << " berhasil ";
            cout << "ditambahkan" << endl;
        }
        cout << "===========================================" << endl;
        cout << "isi keranjang saat ini : " << endl;
        for (int i = 0; i <= top; i++){
            cout << i+1 << ". " << keranjang[i] << endl;
        }
        cout << "lanjutkan program? <y/n> ";
        cin >> lanjut;
    }
    while (lanjut == "y");
    cout << "program selesai" << endl;

    return 0;
}
