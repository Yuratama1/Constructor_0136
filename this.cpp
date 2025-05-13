#include <iostream>
using namespace std;

class buku{
    string judul;
    public:
        string setget(string jdl){
            //nilai parameter 'judul' utk memeberi variab;e judul
            this->judul = jdl;
            // return variable judul
            return this->judul;
        }
};

int main(){
    buku bukunya;
    cout << bukunya.setget("Matematika");
    return 0;
}