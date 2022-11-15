#include <iostream>

using namespace std;

int main()
{
    /*int y;
    int x[] = {78, 82, 86, 93, 98, 60, 80};
    //cout << x[4];
    //y = sizeof(x)/sizeof(*x);
    for(int a = 1; a < y; a++){
        cout << x[a] << endl;
    }*/
    /*int angka [3];

    cout << "masukkan index 0 : ";
    cin >> angka [0];
    cout << "masukkan angka 1 : ";
    cin >> angka [1];
    cout << "masukkan angka 2 : ";
    cin >> angka [2];
    cout << "masukkan angka 3 : ";
    cin >> angka [3];
    cout << "masukkan angka 4 : ";
    cin >> angka [4];
    cout << "masukkan angka 5 : ";
    cin >> angka [5];
    cout << "masukkan angka 6 : ";
    cin >> angka [6];
    cout << "masukkan angka 7 : ";
    cin >> angka [7];
    cout << "masukkan angka 8 : ";
    cin >> angka [8];

    cout << "index ke - 0 : " << angka [0]<< endl;
    cout << "index ke - 1 : " << angka [1]<< endl;
    cout << "index ke - 2 : " << angka [2]<< endl;
    cout << "index ke - 3 : " << angka [3]<< endl;
    cout << "index ke - 4 : " << angka [4]<< endl;
    cout << "index ke - 5 : " << angka [5]<< endl;
    cout << "index ke - 6 : " << angka [6]<< endl;
    cout << "index ke - 7 : " << angka [7]<< endl;
    cout << "index ke - 8 : " << angka [8]<< endl;
*/
    int jml_arr;
    cout << "jumlah index : ";
    cin >> jml_arr;

    int angka[jml_arr];
    int total;
    for (int a = 0; a < jml_arr;a++){
        cout << "masukkan angka : ";
        cin >> angka[a];
    }
    for (int b = 0; b < jml_arr;b++) {
        cout<<"index ke - " << angka[b]<<endl;
        total += angka[b];
    }
    cout << "total nilai = " << total <<endl;
    return 0;
}
