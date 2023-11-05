//program menampilkan deret fibonacci sebanyak input
#include <iostream>
using namespace std;

//prep  
int main() {
  int input, num = 0, num1 = 1, nextNum = 0;

    //masukkan input
    cout << "Jumlah deret fibonacci yang mau diinput: ";
    cin >> input;
  
    //proses menampilkan 2 angka pertama
    for(int i = 1; i <= input; i++) {
        if(i == 1) {
            cout << num << " ";
            continue;
        }
        if(i == 2) {
            cout << num1 << " ";
            continue;
        }
        //proses menentukan deret fibonacci dengan menjumlahkan angka di n dengan angka sebelumnya
        nextNum = num + num1;
        num = num1;
        num1 = nextNum;

        cout << nextNum << " ";
    }

  cout << endl;
  return 0;
}