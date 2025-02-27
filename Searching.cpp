#include <iostream>
using namespace std;
#define max 10

main(){
    //sequential search tanpa sentinel
    int array[max]= {1,2,3,4,5,6,7,8,9,10};
    int search=false;
    int data_yang_ingin_dicari = 10;
    int i=0;
    while(search == false && i<max){
        if(array[i] == data_yang_ingin_dicari){
            cout << "Data ditemukan pada indeks ke-" << i << endl;
            search = true;
            return 1;
        }
        i++;
    }

    //sequential search dengan sentinel
    int j=0;
    array[max] = data_yang_ingin_dicari;
    bool search_sentinel = false;
    while (search_sentinel == false){
        if(array[j] == data_yang_ingin_dicari){
            if(j < max){
                cout << "Data ditemukan pada indeks ke-" << j << endl;
            } else {
                cout << "Data tidak ditemukan" << endl;
            }
            search_sentinel = true;
            return 1;
        }
        j++;
    }


}