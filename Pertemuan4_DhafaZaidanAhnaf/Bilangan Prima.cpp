//Program Bilangan Ganjil, Genap, dan Prima
#include <iostream>

using namespace std;

//prep
int main() {
    int limit; int sumGanjil = 0; int sumGenap = 0;int sumPrima = 0;

    //input batas
    cout << "Program Bilangan Ganjil, Genap, dan Prima" << endl;
    cout << "Masukkan batas: ";
    cin >> limit;

    //Proses mencari bilangan ganjil
    cout << "Bilangan Ganjil: ";

    for (int i = 1; i <= limit; i++) {
        if (i % 2 != 0) {
            cout << i << " "; //Menampilkan bilangan ganjil dari 1-batas
            sumGanjil += i;   //Menjumlahkan semua bilangan ganjil hingga batas
        }
    }

    cout << endl;

    //sama prosesnya seperti bilangan ganjil
    cout << "Bilangan Genap: ";
    for (int i = 2; i <= limit; i += 2) {
        cout << i << " ";
        sumGenap += i;
    }
    cout << endl;

    //sama juga
    cout << "Bilangan Prima: ";
    for (int i = 2; i <= limit; i++) {
        int j;
        for (j = 2; j * j <= i && i % j != 0; j++) {
        }
        if (j * j > i) {
            cout << i << " ";
            sumPrima += i;
        }
    }
    cout << endl;

    //Menampilkan jumlah dari masing-masing bilangan
    cout << "Jumlah bilangan ganjil: " << sumGanjil << endl;
    cout << "Jumlah bilangan genap: " << sumGenap << endl;
    cout << "Jumlah bilangan Prima: " << sumPrima << endl;



    //Menentukan faktor-faktor dari jumlah setiap bilangan
    cout << "Faktor-faktor dari penjumlahan bilangan ganjil adalah: ";
    for (int i = 1; i <= sumGanjil; i++) {
    if (sumGanjil % i == 0) {
        cout << i << " ";
    }
}
    cout << endl;

    cout << "Faktor-faktor dari penjumlahan bilangan genap adalah: ";
    for (int i = 1; i <= sumGenap; i++) {
    if (sumGenap % i == 0) {
        cout << i << " ";
    }
}
    cout << endl;

    cout << "Faktor-faktor dari penjumlahan bilangan prima adalah: ";
    for (int i = 1; i <= sumPrima; i++) {
    if (sumPrima % i == 0) {
        cout << i << " ";
    }
	}
}