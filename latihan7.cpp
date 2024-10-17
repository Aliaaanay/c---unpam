#include <iostream>

using namespace std;

int main ()
{
     //Deklrasi Variabel 
    int A, B, C;
    
    //Input Empat Bilangan Bulat
    cout << "Masukan bilangan 1 :";
    cin >> A;
    cout << "Masukan bilangan 2 :";
    cin >> B;
    cout << "Masukan bilangan 3 :";
    cin >> C;

    //Tentukan bilangan terbesar
    if (A > B) {
        if (A > C)
            cout << "bilangan terbesar adalah: " << A << endl;
        else
            cout << "bilangan terbesar adalah: " << C << endl;
    } else {
        if (B > C)
            cout << "bilangan terbesar adalah: " << B << endl;
        else
            cout << "bilangan terbesar adalah: " << C << endl;
    }

}