#include <iostream>
using namespace std;
int main() {
    int arr[10] = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
        cout << "Data Array : 11 12 13 14 15 16 17 18 19 20 " << endl;
    // Menampilkan bilangan ganjil
    cout << "Bilangan ganjil : ";
        for (int i = 0; i < 10; i++) {
            if (arr[i] % 2 == 0) {
        cout << arr[i] << ", ";
    }
 }
    // Menampilkan bilangan genap
    cout << "\nBilangan genap : ";
        for (int i = 0; i < 10; i++) {
            if (arr[i] % 2 == 1) {
        cout << arr[i] << ", ";
    }
 }
    cout << endl;
 return 0;
}