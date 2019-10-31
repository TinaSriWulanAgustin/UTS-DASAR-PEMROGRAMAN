#include <iostream>

using namespace std;

int main()
{
    double Nilai_Ujian;
    char indeks;

    cout << "KONVERSI NILAI SISWA";
    cout << "Masukan Nilai Ujian: ";
    cin >> Nilai_Ujian;
    cout << endl;

    if (Nilai_Ujian >= 85) {
        indeks ='A';}
    else
        if (Nilai_Ujian >= 75){
        indeks = 'B';}
    else
        if (Nilai_Ujian >= 55) {
            indeks = 'C';}
    else
        if (Nilai_Ujian >= 40) {
        indeks = 'D';}
    else {
        indeks = 'E'
    }
    cout << "Indeks Siswa = " << indeks << endl;

    return 0;
}
