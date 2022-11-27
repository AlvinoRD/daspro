#include <iostream>

using namespace std;

int main()
{
    int max = 5;//hanya bisa mengisi 5 angka
    int top = -1;//karena array ingin dimulai dari 0, kalo di++ kan langsung nambah 1
    string keranjang[max];
    string temp;
    int pilihan, no_index;

    do{
        cout << "Pilihan \n1. tambah \n2. ubah \n3. selesai" << endl;;
        cout << "pilihan : ";
        cin >> pilihan;
        system("cls");
        switch(pilihan){
        case 1:
             if (top == max-1){//index ke-4. karena kalo ngitung dari 0 maka 0 1 2 3 4 (5 angka)
            cout << "keranjang penuh" << endl;
        }
        else {
            top++;//untuk mulai dari 0
            cout << "masukkan isi : ";
            cin >> keranjang[top];//array top karena kita menggunakan top
            cout << "data " << keranjang[top] << " berhasil ";
            cout << "ditambahkan" << endl;
        }
        break;
        case 2:
            cout << "nomot data yang akan diubah : ";
            cin >> no_index;
            cout << "index awal : " << keranjang[no_index-1] << endl;//no_index-1 karena kalo ga dikurangin nanti dia masukanya ke pengulangam 1, bukan 0. soalnya udah ada 0+1
            cout << "index baru : ";
            cin >> temp;
            keranjang[no_index-1] = temp;
        break;
        case 3:
            pilihan = 3;
            break;
        default :
            cout << "pilihan salah" << endl;
        }
        cout << "===========================================" << endl;
        cout << "isi keranjang saat ini : " << endl;
        for (int i = 0; i <= top; i++){
            cout << i+1/*dimulai dari angka 0+1*/ << ". " << keranjang[i] /*isi keranjang dari i+1*/<< endl;
        }
        cout << "===========================================" << endl;
    }
    while (pilihan != 3);
    cout << "program selesai" << endl;

    return 0;
}
