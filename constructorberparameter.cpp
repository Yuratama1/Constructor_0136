#include <iostream>
#include <string>
using namespace std;

class mahasiswa{
    public:
        //constructor dengan parameter
        mahasiswa(int nim, string nama);
};
// Definisi constructor dgn parameter
mahasiswa::mahasiswa(int nim, string nama){
    cout << "Constructor Dengan Parameter Terpanggil" << endl;
    cout << "NIM : " << nim << endl;
    cout << "Nama : " << nama << endl;
}

int main(){
    //memanggil constructor dgn parameter
    mahasiswa mhs(12345, "Pascal");
    return 0;
}