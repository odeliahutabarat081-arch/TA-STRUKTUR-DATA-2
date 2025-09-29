#include <iostream>
#include <string>
using namespace std;

struct Siswa {
    string nama;
    int nilai;
};

void tukar(siswa *x, siswa *y) {
    siswa temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int n;
    Siswa arr[100];

    cout << "Masukkan jumlah siswa: ";
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++) {
        cout << "Nama siswa: ";
        getline(cin, arr[i].nama);
        cout << "Nilai: ";
        cin >> arr[i].nilai;
        cin.ignore();
    }


    for (int i = 0; i < n - 1; i++) {
        int pos = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j].nilai > arr[pos].nilai) { 
                pos = j;
            }
        }
        if (pos != i) {
            tukar(&arr[i], &arr[pos]);
        }
    }

    cout << "\nDaftar nilai siswa dari terbesar ke terkecil:\n";
    for (int i = 0; i < n; i++) {
        cout << i+1 << ". " << arr[i].nama << " - " << arr[i].nilai << endl;
    }

    return 0;
}


