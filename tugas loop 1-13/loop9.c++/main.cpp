#include <iostream>

using namespace std;

int main()
{
    int i = 0;
    int sum = 0;
    int x;
    cout << "inputkan = ";
    cin >> x;
    do{

        cout << x << endl;
        i = i + 1;
        sum = sum + x;
        cout << "inputkan = ";
        cin >> x;

    }while(x != 999);

    cout << "jumlah = " << sum <<endl;
    cout << "banyaknya = " << i << endl;
    return 0;
}
