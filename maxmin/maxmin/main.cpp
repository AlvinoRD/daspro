#include <iostream>

using namespace std;

int main()
{
    cout << "mencari nilai maksimal dan minimal" << endl;

    cout << "=====================================================" << endl;

    int nilai, jumlah, maks, minim;

    cout << "masukkan jumlah nilai = ";
    cin >> jumlah;

    for(int i = 1; i < jumlah; i++){
        cout << "masukkan nilai = ";
        cin >> nilai;

        if (i==1){//jadi perulangan pertama mulai dari 2
            maks = nilai;
            minim = nilai;
        }
        else if (minim>nilai) {//apakah perulangan ke 2 nilainya 2? tidak, pasti lebih besar. jadi yang diprint adalah INT NILAI. 2>3? salah. jadi diprint 2
            minim = nilai;
        }
        else if (maks<nilai) {//apakah perulangan ke 3 nilainya 3? tidak, pasti lebih besar. jadi yang diprint adalah maks karena = nilai. 3<4? benar. diprint 4
            maks = nilai;
        }
    }
    cout << "nilai maksimal = " << maks << endl;
    cout << "nilai minimal = " << minim << endl;
    return 0;
    //jadi kalo salah yang diprint BENERAN NILAINYA. kalo bener yang diprint MAKS/MINIMNYA. karena  maks = nilai; minim = nilai;

}
