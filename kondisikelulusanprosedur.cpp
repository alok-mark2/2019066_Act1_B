#include <iostream>
using namespace std;

// Deklarasi fungsi untuk menentukan kelulusan
bool cek_kelulusan(int nilai) {
    if (nilai >= 60) {
        return true;
    } else {
        return false;
    }
}

// Deklarasi prosedur untuk menampilkan pesan kelulusan
void tampilkan_kelulusan(string nama, int nilai) {
    if (cek_kelulusan(nilai)) {
        cout << nama << " lulus dengan nilai " << nilai << endl;
    } else {
        cout << nama << " tidak lulus dengan nilai " << nilai << endl;
    }
}

int main() {
    // Input data siswa
    string siswa1_nama = "Andi";
    int siswa1_nilai = 75;

    string siswa2_nama = "Budi";
    int siswa2_nilai = 45;

    // Panggil prosedur untuk menampilkan kelulusan siswa
    tampilkan_kelulusan(siswa1_nama, siswa1_nilai);
    tampilkan_kelulusan(siswa2_nama, siswa2_nilai);

    return 0;
}