Berikut adalah penjelasan lengkap mengenai eksperimen yang telah kita bahas, disusun dalam format README untuk GitHub.

---

# Eksperimen: Alokasi Memori pada Segmen Data dan Text

## Tujuan Eksperimen
Tujuan dari eksperimen ini adalah untuk mengidentifikasi dan mengilustrasikan bagaimana penggunaan memori yang tidak efisien pada segmen data dan text dalam sebuah program dapat menyebabkan pemborosan sumber daya. Eksperimen ini bertujuan untuk menunjukkan dampak dari inefisiensi ini pada penggunaan memori dan bagaimana optimasi sederhana dapat mengurangi pemborosan tersebut.

## Latar Belakang
Dalam sebuah program komputer, memori dibagi menjadi beberapa segmen, termasuk segmen data dan segmen text:
- **Segmen Data**: Tempat di mana variabel global dan statis disimpan.
- **Segmen Text**: Tempat di mana kode program yang akan dieksekusi disimpan.

Jika tidak ada pengelolaan yang baik dalam alokasi memori pada kedua segmen ini, maka akan terjadi pemborosan sumber daya, seperti penggunaan memori yang berlebihan yang dapat memperlambat eksekusi program dan meningkatkan konsumsi daya.

## Deskripsi Problem
Inefisiensi dalam alokasi memori sering kali terjadi karena hal-hal seperti:
- Deklarasi variabel besar yang tidak diperlukan atau tidak digunakan.
- Duplikasi kode yang menyebabkan penggunaan memori tambahan pada segmen text.
- Alokasi array atau struktur data yang lebih besar dari yang diperlukan.

Eksperimen ini akan menunjukkan perbedaan penggunaan memori antara program yang ditulis dengan alokasi memori yang tidak efisien dan program yang dioptimalkan.

## Metodologi Eksperimen
Eksperimen dilakukan melalui beberapa tahap:
1. **Penulisan Program Tidak Efisien**: Menulis sebuah program dengan contoh penggunaan memori yang tidak efisien.
2. **Penulisan Program Efisien**: Menulis ulang program tersebut dengan optimasi untuk mengurangi pemborosan memori.
3. **Pengukuran Penggunaan Memori**: Mengukur penggunaan memori dari kedua program, baik pada saat kompilasi maupun pada saat runtime.
4. **Analisis**: Membandingkan hasil pengukuran untuk menilai efisiensi penggunaan memori.

## Pelaksanaan Eksperimen
### Program Tidak Efisien
```c
#include <stdio.h>

// Segmen Data
int largeArray[1000000];  // Array besar yang mungkin tidak diperlukan
int unusedVariable = 42;  // Variabel yang tidak pernah digunakan

// Segmen Text
void duplicateFunction() {
    printf("Ini adalah fungsi yang duplikat dan tidak diperlukan.\n");
}

void main() {
    duplicateFunction();
    duplicateFunction();
}
```

### Program Efisien
```c
#include <stdio.h>

// Segmen Data
int smallArray[1000];  // Array dengan ukuran lebih kecil yang cukup untuk kebutuhan program

// Segmen Text
void optimizedFunction() {
    printf("Ini adalah fungsi yang digunakan secara efisien.\n");
}

void main() {
    optimizedFunction();
}
```

### Pengukuran Memori
1. **Kompilasi Program**:
   - Kompilasi kedua program menggunakan `gcc`.
   - Gunakan perintah `size` untuk melihat penggunaan memori dari kedua program:
     ```bash
     gcc -o inefficient inefficient.c
     gcc -o efficient efficient.c
     size inefficient
     size efficient
     ```

2. **Eksekusi Program**:
   - Jalankan kedua program dan ukur penggunaan memori pada runtime menggunakan perintah seperti `top` atau `htop`:
     ```bash
     ./inefficient
     ./efficient
     ```

## Hasil Eksperimen
Dari pengukuran memori yang dilakukan, hasil yang diperoleh adalah sebagai berikut:
- **Segmen Data**: Program tidak efisien menunjukkan penggunaan memori yang jauh lebih besar pada segmen data karena alokasi array besar dan variabel yang tidak digunakan.
- **Segmen Text**: Program tidak efisien juga memiliki ukuran yang lebih besar pada segmen text karena adanya fungsi duplikat yang tidak diperlukan.

### Tabel Perbandingan Penggunaan Memori
| Program       | Segmen Data | Segmen Text | Total Memori |
|---------------|-------------|-------------|--------------|
| Tidak Efisien | Lebih Besar | Lebih Besar | Lebih Besar  |
| Efisien       | Lebih Kecil | Lebih Kecil | Lebih Kecil  |

## Kesimpulan
Eksperimen ini menunjukkan bahwa optimasi sederhana dalam alokasi memori dapat secara signifikan mengurangi penggunaan sumber daya. Dengan menghindari alokasi memori yang tidak diperlukan dan mengeliminasi duplikasi kode, kita dapat meningkatkan efisiensi program, yang pada gilirannya dapat meningkatkan kinerja, mengurangi konsumsi daya, dan menghindari pemborosan sumber daya.
