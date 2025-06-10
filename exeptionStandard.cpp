#include <iostream>
using namespace std;
//untuk obyek exeption yang akan digunakan
#include <array>
//untuk obyek array yang akan kita gunakan
using namespace std;

int main (){
    cout << "Awal program" << endl; //penanda 1:...
    try{
        array <int, 3> data = {10,20,30};
        //int data [3] = {10,20,30}
        //pesan array integer 3 3l3m3n
        cout << data.at(5) << endl;
        // memanggil array element ke 5
    }
    catch(exception& e){
        //penangkap menggunakan obyek exeption
        cout << e.what() << endl;
        /*akan dieksekusi karena array data hanya memiliki 3 element*/
    }
    cout << "Baris Program yang terakhir"<< endl;
    /*penanda 2 : bahwa program berjalan tannpa berhenti meskipun terjadi kesalahan*/
    return 0;
}