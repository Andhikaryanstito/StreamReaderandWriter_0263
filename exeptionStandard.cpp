#include <iostream>
#include <exception> 
#include <array>    
using namespace std;

int main()
{
    cout << "Awal Program" << endl; // penanda 1: awal program

    try {
        array<int, 3> data = { 10, 20, 30 };
        // array integer dengan 3 elemen

        cout << data.at(5) << endl;
        // mencoba mengakses elemen ke-5 (indeks 5), akan memicu exception
    }
    catch (exception& e) {
        // menangkap exception menggunakan objek exception
        cout << e.what() << endl;
        // akan dieksekusi karena array hanya memiliki 3 elemen
    }

    cout << "Baris program yang terakhir" << endl;
    // penanda 2: program tetap berjalan meskipun terjadi kesalahan

    return 0;
}
