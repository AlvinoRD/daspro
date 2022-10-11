#include <iostream>

using namespace std;

int main()
{
   int x;

   int y;

   cout<< "tanggal : ";

   cin>> x;

   cout<< "bulan : ";

   cin>> y;

   if (y % 2 == 1 && y <=7 && x <= 31 || y % 2 == 0 && y <= 8 && x <= 30)
    {
        cout<< "tanggal valid" <<endl;
    }
    else
    {
        cout<< "tanggal tidak valid" <<endl;
    }

     return 0;
}
