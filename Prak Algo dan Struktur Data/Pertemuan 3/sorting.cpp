#include <iostream>
using namespace std;
void quicksort(int array[],int low, int high){
    int awal = low, akhir = high;
    int pivot = array [(awal+akhir)/2];
    do{
        while (array [awal]<pivot){
            awal++;
        }
        while (array[akhir]>pivot){
            akhir--;
        }
        if (awal<=akhir){
            swap(array[awal], array[akhir]);
            awal++;
            akhir--;
        } 
    }while (awal<=akhir);
    if (low<akhir){
        quicksort(array, low, akhir);
    }
    if (awal<high){
        quicksort(array, awal, high);
    }
    
    
    
}

main(){
    //quicksort
    int array [] = {3, 4, 2, 9, 8, 6, 5, 7, 1};
    int n = sizeof (array)/sizeof (array[0]);
    cout << "sebelum diurutkan: \n";
    for (int k = 0; k < n; k++){
        cout << array[k] << " ";
    }
    cout << endl;
    quicksort(array,0,n-1);
    cout << "Setelah Diurutkan : \n";
    for (int k = 0; k < n ; k++){
        cout << array[k] << " ";
    }
    



    //bubble sort
    //int array [] = {3, 4, 2, 9, 8, 6, 5, 7};
    //int n = sizeof (array)/sizeof (array[0]);
    //cout << "Array sebelum diurutkan: \n";
    //for (int k = 0; k < n; k++){
    //    cout << array[k] << " ";
    //}

    //cout << endl;
    //for (int i = 0; i < n -1 ; i++){
    //    for (int j = 0; j < n - 1 - i; j++){
    //       swap(array[j], array[j+1]);
    //    }
    //}
    //cout << "Hasil Bubble Sort: \n";
    //for (int k = 0; k < n; k++){
    //    cout << array[k] << " ";
    //}
}