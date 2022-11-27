#include <iostream>

using namespace std;

int main()
{
    int i;
    int x;
    cout << "inputkan = ";
    cin >> x;
    do{

        cout << x << endl;
        i = i + 1;
        cout << "inputkan = ";
        cin >> x;

    }while(x != 999);

    cout << i <<endl;
    return 0;
}
