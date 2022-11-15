#include <iostream>

using namespace std;

int main()
{
    int nilai[] = {100, 1000, 200, 2000};
    int length = sizeof(nilai)/sizeof(*nilai);
    int temporary;//tempat menyimpan sementara
    for (int i = 1; i < length; i++){
        for (int a = 0; a < length-i; a++){
            if(nilai[a] > nilai[a+1]){
                temporary = nilai[a];
                nilai[a] = nilai[a+1];
                nilai[a+1] = temporary;
            }
        }
    }
    cout << "hasil = " << endl;
    for (int x = 0; x < length; x++){
        cout << " " << nilai[x] << endl;
    }
    return 0;
}
