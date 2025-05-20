//buatlah class barang atribut namabarang dan kodebarang
//program memiliki constructor berparameter untk mengisi
//nilai kodebarang dan namabarang
//serta memeiliki fungsi utk menampilkan informasi barang

#include <iostream>
#include <string>
using namespace std;

class barang{
    private:
    int kodeBarang;
    string namaBarang;
    
    public:
        //constructor dengan parameter
        barang(int kode, string nama){
            kodeBarang = kode;
            namaBarang = nama;
        }

        //fungsi menampilkan informasi
        void cetakData(){
            cout << "KODE BARANG : " << kodeBarang << endl;
            cout << "NAMA BARANG : " << namaBarang << endl;
        }
};

int main(){
    //memanggil constructor dgn parameter
    barang bg (001, "ROTI");
    bg.cetakData();
    return 0;
}
