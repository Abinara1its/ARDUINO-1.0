**Soal : Pengecekan Tahun Kabisat**

Deskripsi : Buatlah program yang menerima input berupa sebuah tahun (4 digit angka) dan menentukan apakah tahun tersebut merupakan tahun kabisat atau bukan berdasarkan aturan berikut:

Aturan Tahun Kabisat :
- Jika tahun habis dibagi 400, maka kabisat.
- Jika tahun tidak habis dibagi 400 tetapi habis dibagi 100, maka bukan kabisat.
- Jika tahun tidak habis dibagi 400 dan 100 tetapi habis dibagi 4, maka kabisat.
- Jika tidak memenuhi ketiga kondisi di atas, maka bukan kabisat.

Input Format :
```
Satu bilangan bulat x (tahun) dengan empat digit.
```

Constraints : 
```
0 ≤ x ≤ 9999
```

Output Format:

Jika x adalah tahun kabisat, cetak : `x merupakan Tahun Kabisat`

Jika x bukan tahun kabisat, cetak : ` x bukan merupakan Tahun Kabisat`

Contoh:

Input 0:
```
2024
```

Output 0:
```
2024 merupakan Tahun Kabisat
```
Penjelasan : Tahun 2024 adalah tahun kabisat karena habis dibagi 4 dan tidak habis dibagi 100.

Input 1:
```
2022
```

Output 1:
```
2022 bukan merupakan Tahun Kabisat
```

Penjelasan 1: Tahun 2022 bukan tahun kabisat karena tidak habis dibagi 4.

Penjelasan Singkat Program : Program menerima input tahun x dan memeriksa kondisi-kondisi berikut secara berurutan:

- Cek habis dibagi 400: Jika ya, x adalah tahun kabisat.
- Cek habis dibagi 100: Jika ya (dan sebelumnya tidak habis dibagi 400), x bukan tahun kabisat.
- Cek habis dibagi 4: Jika ya (dan sebelumnya tidak habis dibagi 100), x adalah tahun kabisat.
- Jika tidak memenuhi kondisi di atas: x bukan tahun kabisat.
- Program kemudian mencetak hasil sesuai dengan format yang diminta.

