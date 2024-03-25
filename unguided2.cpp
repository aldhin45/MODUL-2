#include <iostream>
using namespace std;
int main() {
    int x_RAFA, y_ALDHINO, z_FATIN;
        cout << "Masukkan jumlah atau ukuran array dalam dimensi x: ";
            cin >> x_RAFA;
        cout << "Masukkan jumlah atau ukuran array dalam dimensi y: ";
            cin >> y_ALDHINO;
        cout << "Masukkan jumlah atau ukuran array dalam dimensi z: ";
            cin >> z_FATIN;

    int arr[x_RAFA][y_ALDHINO][z_FATIN];

        for (int x = 0; x < x_RAFA; x++) {
            for (int y = 0; y < y_ALDHINO; y++) {
                for (int z = 0; z < z_FATIN; z++) {
                cout << "Input Array[" << x << "][" << y << "][" << z << "] = ";
        cin >> arr[x][y][z];
    }
 }
    cout << endl;
 }
    cout << "Data Array:\n";
        for (int x = 0; x < x_RAFA; x++) {
            for (int y = 0; y < y_ALDHINO; y++) {
                for (int z = 0; z < z_FATIN; z++) {
            cout << "Data Array[" << x << "][" << y << "][" << z << "] = " << arr[x][y][z] << endl;
        }
    }
 }
    cout << "Tampilan array:\n";
        for (int x = 0; x < x_RAFA; x++) {
            for (int y = 0; y < y_ALDHINO; y++) {
                for (int z = 0; z < z_FATIN; z++) {
                cout << arr[x][y][z] << ' ';
        }
        cout << endl;
    }
    cout << endl;
 }
 return 0;
}
