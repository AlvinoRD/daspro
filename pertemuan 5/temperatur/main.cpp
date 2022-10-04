#include <iostream>
using namespace std;
int main() {
    int x;

	cout<<"masukkan temperatur (c) : ";

	cin>> x;

	if (x <= 0)
    {
        cout<< "ice" <<endl;
    }
    else if (x >= 100)
    {
        cout<< "gas" <<endl;
    }
    else
    {
        cout<< "liquid" <<endl;
    }

	return 0;
}
