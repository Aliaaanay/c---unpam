#include <iostream>

int main() {
  int n;

  // Membaca input dari user
  std::cout << "Masukkan jumlah bilangan: ";
  std::cin >> n;

  // Melakukan perulangan untuk menghitung perkalian
  int hasil = 1;
  for (int i = 1; i <= n; i++) {
    hasil *= i;
  }

  // Menampilkan hasil
  std::cout << "Hasil perkalian: " << hasil << std::endl;

  return 0;
}