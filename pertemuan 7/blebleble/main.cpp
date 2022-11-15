#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;

    cout << "masukkan angka baris anda bang : ";
    cin >> a;

    b=1;
    for (int y = 1; y <= a; y++){
            b=b*y;
    }
    cout << b << endl;

    return 0;
}
