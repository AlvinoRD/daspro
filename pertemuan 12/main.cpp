#include <iostream>

using namespace std;

int main()
{
    int x;
    int prima;

    cout << "masukkan angka anda : ";
    cin >> x;

    for (int i = 1; i <= x; i++){
    if (x % i == 0) {
            prima+=1;
    }
    }
    if (prima == 2){
        cout << "prima" << endl;
    }
    else {
        cout << "bukan prima" << endl;
    }
    return 0;
}
