#include <iostream>
using namespace std;

int main()
{
    char NAMAKU [6] = { 'T', 'I', 'N', 'A', '\0'};
    char NAMAKU [6] = "TINA";

    for (int C=0; C<6; C++)
    {
        cout << NAMAKU  [C];
    }
    cout << endl;

    cout << NAMAKU ;

    cout << endl << endl;

    cout << "Jumlah Elemen NAMAKU : " << sizeof (NAMAKU) << endl;

    cout << "Jumlah Elemen NAMAKU : " << sizeof (NAMAKU) << endl << endl;

    return 0;
}
