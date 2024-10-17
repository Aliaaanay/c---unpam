#include <iostream>
using namespace std;
int main()
{
    int num[10];
    int *start, *end;
    start = num;
    end = &num[99];
    while (start != end)
    {
        cout << "Masukan bilangan:";
        cin >> *start;
        start++;
    }
    return 0;
}