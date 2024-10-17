#include <iostream>
using namespace std;
int main()
{

    int NomorHari = 0;
    cout << "Masukan Nomor Hari : " << endl;
    cin >> NomorHari;
    switch (NomorHari)
    {
    case 1:
        cout << "Minggu" << endl;
        break;
    case 2:
        if (isdigit(NomorHari))
        {
            cout << "Senin" << endl;
            break;
        }
    case 3:
        cout << "Selasa" << endl;
        break;
    case 4:
        cout << "Rabu" << endl;
        break;
    case 5:
        cout << "Kamis" << endl;
        break;
    case 6:
        cout << "Jumat" << endl;
        break;
    case 7:
        cout << "Sabtu" << endl;
        break;
    default:
        cout << "Salah Nomor" << endl;
    }
}