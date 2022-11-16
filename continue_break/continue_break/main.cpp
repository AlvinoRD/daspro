#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int main()
{/*
    for (int a = 0; a < 4; a++) {
        if (a==2){
            continue;//nanti kalo sesuai sama kondisi maka lanjut menghitung atasnya.
        }
        if (a > 3){
            break;//ini bakalan muncul kalo kondiri continuenya ga sesuai
        }
        cout << a << endl;
    }*/

    /*for (int i = 0; i <= 1; i++){//induknya
            cout << i << endl;
        for (int j = 0; j <= 1; j++){//dihabiskan dulu yang ada di dalam
            cout << j << endl;
        }
    }*/
    //mencetak i
    //i = 0, j = 0; 0
    //       j = 1; 0
    //i = 1, j = 0; 1
    //       j = 1; 1
    //j nya dihabiskan dulu karena j adalah inner.  i
    //mencetak j
    //j = 0, i = 0, 0
    //j = 1, i = 0, 1
    //j = 0, i = 1, 0
    //j = 1, i = 1, 1
    // i angka yang sama karena i adalah induknya

    for (;true;) {
    system("cls");
    cout << endl;
    cout << "======================================" << endl;
    cout << "----DAFTAR MENU MAKANAN----" << endl;
    cout << "1. NASI KERKIRIL" << endl;
    cout << "2. CARI CARI BEKICOT" << endl;
    cout << "3. ASEP BROTOTSKALI" << endl;
    cout << "4. KEPITING PROTES" << endl;

    int pilih;
    cout << "pilih menu anda = ";
    cin >> pilih;

    switch(pilih)
    {
    case 1 :
        cout << "ANDA MEMESAN NASI KERKIRIL" << endl;
        break;
    case 2 :
        cout << "ANDA MEMESAN CARI CARI BEKICOT" << endl;
        break;
    case 3 :
        cout << "ANDA MEMESAN ASEP BROTOTSKALI" << endl;
        break;
    case 4 :
        cout << "ANDA MEMESAN KEPITING PROTES" << endl;
        break;
    }
    }
    return 0;
}
