#include <iostream>
using namespace std;
int main() {
    int panjang, i = 0;
        double total = 0;
    cout << "Masukkan panjang array: ";
    cin >> panjang;
 
    int array[panjang];
 
    cout << "Masukkan " << panjang << " angka\n";
 
    // Memasukkan elemen array
    for (i = 0; i < panjang; i++) {
        cout << "Array ke-" << (i + 1) << ": ";
        cin >> array[i];
    total += array[i]; 
 }
 
    // Mencari nilai maksimum
    int maks = array[0];
    int lokasi_max = 0;
        for (i = 1; i < panjang; i++) {
            if (array[i] > maks) {
            maks = array[i];
            lokasi_max = i;
        }
 }
 
    // Mencari nilai minimum
    int min = array[0];
    int lokasi_min = 0;
        for (i = 1; i < panjang; i++) {
         if (array[i] < min) {
            min = array[i];
            lokasi_min = i;
        }
 }
 
    // Menghitung rata-rata
    double rata_rata = total / panjang;
 
    // Output hasil
    cout << "Nilai maksimum adalah " << maks << " berada di Array ke-" << (lokasi_max + 1) << endl;
    cout << "Nilai minimum adalah " << min << " berada di Array ke-" << (lokasi_min + 1) << endl;
    cout << "Nilai rata-rata adalah " << rata_rata << endl;
 return 0;
}
