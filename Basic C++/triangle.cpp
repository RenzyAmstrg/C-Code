#include <iostream>
using namespace std;

int main(){
    int Renzy;
    //STRING UNTUK NAMA DAN KELAS, DAPAT DI UBAH PADA SOURCE CODE
    string nama = "Renzy Armstrong";
    string kelas = "12 TKJ";
    
    // COUT NAMA DAN KELAS / PRINT NAMA DAN KELAS
    cout << "TUTORIAL SEGITIGA C++" << endl;
    cout << "Nama : " << nama << endl;
    cout << "Kelas : " << kelas << endl;
    
    // PRINT DAN JUGA INPUT JUMLAH SEGITIGA ATAU *
    cout << "Jumlah Baris Pada Segitiga :";
    cin >> Renzy;
    
    for (int i = 1; i<= Renzy; i++){
        for (int j =i; j < Renzy; j++){
        }
        for(int k =1;k <= (2*i-1); k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
