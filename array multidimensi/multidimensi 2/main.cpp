#include <iostream>

using namespace std;

int main()
{
    int angka[3];//array satu dimensi
    /*
        [0]
        [1]
    */
    int nomor[2][3] = {1, 3, 5, 2, 4, 6};//nomor petama memiliki 2 index, nomor kedua memiliki 3 index. jumlah index = 2 x 3 = 6. (jumalh array
    for (int i = 0; i < 2; i++){//2 adlah array pertama
    for (int j = 0; j < 3; j++){
        cout << nomor[i][j] << " ";
    }
    cout << endl;
    }
    //bisa dibilang baris dan kolom
    /*
    contoh
    1 2 4
    4 5 6
    kayak looping lah intine
        [0][0] = 1
        [0][1] = 2
        [0][2] = 3

        [1][0] = 4
        [1][1] = 5
        [1][2] = 6
    */
    return 0;
}
