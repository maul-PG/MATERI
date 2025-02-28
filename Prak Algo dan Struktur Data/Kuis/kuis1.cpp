#include <iostream>
using namespace std;
int main(){
    const int panjang = 5;
    int ray[panjang] = {10, 20, 30, 40, 50};
    int *ptr = ray;

    cout << "Array : ";
    for (int i = 0; i < panjang; i++) {
        cout << *(ptr + i) << " ";
    }
    cout << endl;

    int max = *ptr;
    int min = *ptr;
    for (int i = 1; i < panjang; i++) {
        if (*(ptr + i) > max) {
            max = *(ptr + i);
        }
        if (*(ptr + i) < min) {
            min = *(ptr + i);
        }
    }
    cout << "Maximal: " << max << endl;
    cout << "Minimal: " << min << endl;

    int jumlah = 0;
    for (int i = 0; i < panjang; i++) {
        jumlah += *(ptr + i);
    }
    double Rata = static_cast<double>(jumlah) / panjang;
    cout << "Jumlah: " << jumlah << endl;
    cout << "Rata-Rata: " << Rata << endl;
}