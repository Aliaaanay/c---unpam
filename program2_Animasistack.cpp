#include <iostream>
#include <string>
#include <cstdlib>
#include <conio.h>
#include <windows.h>

using namespace std;

// Struktur untuk menyimpan data mahasiswa
struct Mahasiswa
{
    string nama;
    string nim;
    char gender;
    float nilai;
    Mahasiswa *next;
};

// Fungsi untuk menambah data mahasiswa (push)
void push(Mahasiswa *&top, string nama, string nim, char gender, float nilai)
{
    Mahasiswa *newMhs = new Mahasiswa();
    newMhs->nama = nama;
    newMhs->nim = nim;
    newMhs->gender = gender;
    newMhs->nilai = nilai;
    newMhs->next = top;
    top = newMhs;

    cout << "Data mahasiswa berhasil ditambahkan!" << endl;
    cout << "Pushing data..." << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "  ^  " << endl;
        cout << " | | " << endl;
        cout << " Lagi push, mohon tunggu sebentar yaa :)" << endl;
        Sleep(500);
        system("cls");
        Sleep(500);
    }
    cout << "Push selesai!" << endl;
}

// Fungsi untuk menghapus data mahasiswa teratas (pop)

void pop(Mahasiswa *&top)
{
    if (top == nullptr)
    {
        cout << "Stack kosong. Tidak ada data yang dapat dihapus." << endl;
        return;
    }

    Mahasiswa *temp = top;
    top = top->next;
    delete temp;

    cout << "Data mahasiswa teratas berhasil dihapus!" << endl;
    cout << "Popping data..." << endl;
    cout << "Lagi pop nih, sabar yaa" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << " | | " << endl;
        cout << "  v  " << endl;
        Sleep(500);
        system("cls");
        Sleep(500);
    }
    cout << "Pop selesai!" << endl;
}

// Fungsi untuk mencetak semua data mahasiswa
void printAll(Mahasiswa *top)
{
    if (top == nullptr)
    {
        cout << "Stack kosong. Tidak ada data untuk dicetak." << endl;
        return;
    }
    Mahasiswa *current = top;
    int index = 1;
    while (current != nullptr)
    {
        cout << "+--------------------------------------+\n";
        cout << "|Data Mahasiswa ke-" << index << "\n";
        cout << "|Nama   : " << current->nama << "\n";
        cout << "|NIM    : " << current->nim << "\n";
        cout << "|Gender : " << current->gender << "\n";
        cout << "|Nilai  : " << current->nilai << "\n";
        cout << "+--------------------------------------+\n";
        current = current->next;
        index++;
    }
}

// Fungsi untuk menampilkan menu
void tampilkanMenu()
{
    cout << "+---------------------------------------+\n";
    cout << "|         PROGRAM STACK MAHASISWA       |\n";
    cout << "+---------------------------------------+\n";
    cout << "|                 MENU                  |\n";
    cout << "|1. MASUKAN DATA                        |\n";
    cout << "|2. HAPUS DATA                          |\n";
    cout << "|3. CETAK DATA                          |\n";
    cout << "|4. EXIT                                |\n";
    cout << "+---------------------------------------+\n";
    cout << "Pilih menu (1-4): ";
}

int main()
{
    Mahasiswa *top = nullptr;
    int pilihan;
    string nama, nim;
    char gender;
    float nilai;

    do
    {
        tampilkanMenu();
        cin >> pilihan;
        cin.ignore();

        switch (pilihan)
        {
        case 1:
            cout << "Masukkan Nama: ";
            getline(cin, nama);
            cout << "Masukkan NIM: ";
            getline(cin, nim);
            cout << "Masukkan Gender (L/P): ";
            cin >> gender;
            cout << "Masukkan Nilai: ";
            cin >> nilai;
            push(top, nama, nim, gender, nilai);
            break;
        case 2:
            pop(top);
            break;
        case 3:
            printAll(top);
            break;
        case 4:
            cout << "Terima kasih telah menggunakan program ini." << endl;
            break;
        default:
            cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
        }

        cout << "Tekan sembarang tombol untuk melanjutkan...";
        _getch();
        system("cls");
    } while (pilihan != 4);

    // Membersihkan memori
    while (top != nullptr)
    {
        Mahasiswa *temp = top;
        top = top->next;
        delete temp;
    }

    return 0;
}