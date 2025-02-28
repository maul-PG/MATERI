#include <iostream>
using namespace std;
#define max 10


int binary_search(int array[], int data_yang_ingin_dicari){
    int indeks_awal = 0;
    int indeks_akhir = max;
    
    bool search = false;

    while(search == false && indeks_awal <= indeks_akhir){
        int indeks_tengah = ((indeks_awal + indeks_akhir) / 2);
        if(array[indeks_tengah] == data_yang_ingin_dicari){
            cout << "Data ditemukan pada indeks ke-" << indeks_tengah << endl;
            search = true;
            return 1;
        } else if(array[indeks_tengah] < data_yang_ingin_dicari){
            indeks_awal = indeks_tengah + 1;
        } else {
            indeks_akhir = indeks_tengah - 1;
        }
        
    }
    return -1;
}