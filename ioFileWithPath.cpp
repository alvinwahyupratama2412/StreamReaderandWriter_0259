#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(){
    string baris, NamaFile;

    cout << "Masukkan Nama file : ";
    cin >> NamaFile;
    //membuka file dalam mode menulis
    ofstream outfile;
    //menunjuk ke sebuah nama file
    outfile.open(NamaFile + "txt", ios::out);
}