#include <iostream>

using namespace std;

int main()
{
    float jumlah;
    float rerata;
    for (int i = 1; i <= 20; i++) {
        jumlah += i;
        rerata = jumlah/i;
        cout << i << endl;
    }
    cout << endl;
    cout << "jumlah perhitungan = " << jumlah << endl;
    cout << "rata ratanya adalah = " << rerata << endl;
    return 0;
}
