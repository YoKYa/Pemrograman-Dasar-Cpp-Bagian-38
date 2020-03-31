#include <iostream>

using namespace std;

union Convert{
    int Ascii;
    char Chara;
};

int main(){

    // Union Adalah Sebuah kumpulan tipe data yang terdapat dalam memory yang sama
    Convert Tombol;
    cout << "Masukkan Sebuah Huruf : " ;
    cin >> Tombol.Chara;
    cout << "Hasil : " << Tombol.Ascii << endl << endl;

    cout << "Masukkan Sebuah Angka : " ;
    cin >> Tombol.Ascii;
    cout << "Hasil : " << Tombol.Chara;
    
    cin.get();
    return 0;
}
