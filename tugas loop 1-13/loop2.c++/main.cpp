#include <iostream>

using namespace std;

int main()
{
    for (int i = 100; i >= 0; i--){
        if (i % 2 == 1){
            continue;
        }
        if (i == 0) {
            break;
        }
        cout << i << endl;
    }

    return 0;
}
