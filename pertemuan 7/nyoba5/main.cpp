#include <iostream>
using namespace std;

int main (){
       cout << "coba loop" << endl;
       for (int a = 1; a <= 10; a++){
        cout << a << endl;
       }
       cout << "akhirnya\n" << endl;

       cout << "coba loop2" << endl;
       for (int b = 1; b <= 100; b *= 2){
        cout << b << endl;
       }
       cout << "akhirnya lagi" << endl;

       cout << "coba loop3" << endl;
       for (int c = 20; c >= 1; c--){
        cout << c << endl;
       }
       cout << "akhirnya lagi2" <<endl;

       int total = 1;
       for (int d = 1; d <= 20; d++){
        total += 1;
        cout << d << "||" << total <<endl;
       }


       int m = 10, n, o, p;

    o = 1;
    p = 0;

    for (int i = 1; i < m; i++){
        if (i == 1) cout << p << endl;
        if (i == 2) cout << o << endl;
        else {
            n = o + p;
            p = o;
            o = n;
            cout << n << endl;
        }

    }

    return 0;
}
