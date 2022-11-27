#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    int x;
    cout << "inputkan = ";
    cin >> x;
    while(x != 999){

        cout << x << endl;
        sum = sum + x;
        cout << "inputkan = ";
        cin >> x;
    }

    cout << sum <<endl;

    return 0;
}
