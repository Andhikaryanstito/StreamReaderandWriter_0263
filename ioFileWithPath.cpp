#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(){
    string baris;
    string NamaFile;

    cout << "Masukkan Nama File : ";
    cin >> NamaFile;

    //membuka file dalam mode menulis.
    ofstream outfle;
    //menunjuk ke sebuah nama file
    outfile.open(NamaFile + ".txt", ios::out);

    cout << ">= Menulis File, \'q\' untuk keluar" << endl;

    //unlimited loop untuk menulis
    while (true){
        cout << "-";
        
    }


}