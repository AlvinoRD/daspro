#include <iostream>

using namespace std;

int main()
{
    float f;
    cout << "---------------------" << endl;
    cout << "celcius    fahrenheit" << endl;
    cout << "---------------------" << endl;
    for (float c = 0; c <= 100; c++){
        cout << "|  " << c << "\t|";
        f = c * 9/5 + 32;
        cout << f << "\t|" << endl;
    }
    return 0;
}
