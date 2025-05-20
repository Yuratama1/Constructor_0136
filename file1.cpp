//buatlah class barang atribut namabarang dan kodebarang
//program memiliki constructor berparameter untk mengisi
//nilai kodebarang dan namabarang
//serta memeiliki fungsi utk menampilkan informasi barang

#include <iostream>
#include <string>
using namespace std;

class barang{
    public:
        //constructor dengan parameter
        barang(int kodeBarang, string namaBarang);
};
// Definisi constructor dgn parameter
barang::barang(int kodeBarang, string namabarang){
    cout << "Constructor Dengan Parameter Terpanggil" << endl;
    cout << "KODE BARANG : " << kodeBarang << endl;
    cout << "NAMA BARANG : " << namabarang << endl;
}

int main(){
    //memanggil constructor dgn parameter
    barang bg (001, "ROTI");
    return 0;
}
