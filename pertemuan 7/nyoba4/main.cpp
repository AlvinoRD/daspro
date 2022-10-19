#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "masukkan : ";
    cin >> x;
    if (x <= 18)
        {
        if (x <= 10) {
            cout << "bocil" << endl;
        }else{
            cout << "dewasa" << endl;
        }
        }
   /*
#include <iostream>
using namespace std;
int main()
{
	int umur;
	cout << "masukkan";
	cin >> umur;

	if (umur<=18)
	{
		if (umur<=10){
			cout<<"Anak-anak"<<endl;
		}else {
			cout<<"Remaja"<<endl;
		}
	}

return 0;
}*/
    return 0;
}
