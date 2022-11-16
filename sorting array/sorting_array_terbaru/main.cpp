#include <iostream>

using namespace std;

int main()
{
    int length;
    cout << "masukka jumlah index : ";
    cin >> length;
    int nilai[length];//nanti jumlah array = jumlah lenght
    int temp;
    for (int b = 0; b < length; b++){
        cout << "masukkan nilai anda - " << b << " : ";
        cin >> nilai[b];
    }
     for (int i = 1; i < length; i++){//i akan dilooping selama kurang dadri length
        for (int a = 0; a < length-i; a++){//perulangan bersarang. kenapa dikurangin i? supaya bisa membandingkan nilai yang belum dibandingkan {1-2,2-3,3-4,1-3,1-3,2-4} jadi bisa mengurutkan angka terbesar ke terkecil.
            if(nilai[a] > nilai[a+1]){//jika nilai a (nilai ke 0=100) > nilai a+1(0+1 yang berisikan 1000)
                temp = nilai[a];//maka dikeluarkan nilai (a), jika tidak maka akan dikeluarkan nilai a+1 dan akan disimpan di temporary
                nilai[a] = nilai[a+1];//maka nanti nilai a akan direplace ke a+1, atau nilai a+1 akan direplace ke nilai a
                nilai[a+1] = temp;//dan sama seperti tadi nilai a+1 juga akan disimpan ke temporary
            }
        }
     }
      cout << "hasil = " << endl;
        for (int x = 0; x < length; x++){
        cout << " " << nilai[x] << endl;
        }
    return 0;
}
