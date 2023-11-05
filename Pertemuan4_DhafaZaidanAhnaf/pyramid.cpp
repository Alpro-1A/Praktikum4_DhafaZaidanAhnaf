//Program membuat pyramid kematian
#include <iostream>
using namespace std;

//prep
int main() {

    int n;
    cout << "Masukkan input: ";
    cin >> n; //Masukkan input untuk n baris yang akan dihasilkan

    for(int i = 1, k = 0; i <= n; i++, k = 0) { //looping untuk mengatur baris dan kolom
        for(int j = 1; j <= n-i; j++) {
            cout <<"  "; //fungsi string kosong/spasi sebagai pemberi jarak
        }

        while(k != 2*i-1) { //perkondisian ketika k tidak sama dengan expression-nya maka menampilkan simbol bintang
            cout << "* ";
            ++k; //menampilkan pyramid kematian dengan meng-increment k
        }
        cout << endl;
    }    
    return 0;
}
