#include <iostream>

using namespace std;

int main()
{
    cout << "-----------------------------------" << endl;
    cout << "celcius    fahrenheit    keterangan" << endl;
    cout << "-----------------------------------" << endl;
    for (int c = 100; c >= -40; c--){
    float f = c * 9/5 + 32;
    string keterangan;
    if (c == 100)
        keterangan = "air mendidih";
    else if (c == 40)
        keterangan = "air mandi panas";
    else if (c == 30)
        keterangan = "cuaca pantai";
    else if (c == 21)
        keterangan = "Temperatur ruangan";
    else if (c == 10)
        keterangan = "Hari yang dingin";
    else if (c == 0)
        keterangan = "Titik beku air";
    else if (c == -18)
        keterangan = "Cuaca dingin bersalju";
    else if (c == -40)
        keterangan = "Cuaca sangat dingin bersalju";
    cout << c << "\t|\t" << f << "\t" << keterangan << "\t| " << endl;
    }
    return 0;
}
