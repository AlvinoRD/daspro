#include <iostream>

using namespace std;

int main()
{
    int jumlah_index;
    cout << "masukkan angka anda = ";
    cin >> jumlah_index;

    float nilai[jumlah_index], total, rata_rata;
    for (int a = 0; a < jumlah_index; a++){
        cout << "data ke - " << a << " = ";//otomatis ini keloopingnya ngikut kamu ngenter ga looping sendiri terus terusan.
        cin >> nilai[a]; //jadi [a] itu buat ngasih nilai int a. kan udah kelooping terus dikasih nilai gituch bang.
        total += nilai[a];//ni ditambah tambah terus gitu bang. kan total = total + a... teruss bakalan gitu terus sampe loopingannya habis
        //dan bisa dikasih kurung kotak itu khusus buat array doang ya ngabbb
    }
    cout << "total nilai = " << total << endl;

    rata_rata = total/jumlah_index;

    cout << "rata ratanya adalah = " << rata_rata << endl;

    return 0;
}
