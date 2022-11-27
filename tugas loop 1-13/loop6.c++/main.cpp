#include <iostream>

using namespace std;

int main()
{
    int nilai, maks, minim;
    for(int i = 1; i < 1000; i++){
        cout << "masukkan nilai = ";
        cin >> nilai;
        if (nilai == -99){
            minim != -99;
        }
        else if (i==1){//jadi perulangan pertama mulai dari 2
            maks = nilai;
            minim = nilai;
        }
        else if (minim>nilai) {//apakah perulangan ke 2 nilainya 2? tidak, pasti lebih besar. jadi yang diprint adalah INT NILAI. 2>3? salah. jadi diprint 2
            minim = nilai;
        }
        else if (maks<nilai) {//apakah perulangan ke 3 nilainya 3? tidak, pasti lebih besar. jadi yang diprint adalah maks karena = nilai. 3<4? benar. diprint 4
            maks = nilai;
        }
        if (nilai==-99){
        break;
     }
    }
    cout << "nilai maksimal = " << maks << endl;
    cout << "nilai minimal = " << minim << endl;
    return 0;
}
