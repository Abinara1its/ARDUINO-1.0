## Soal: Menentukan Hari dalam Seminggu dari Tanggal

Deskripsi : Anda diminta untuk membuat program yang menentukan hari dalam seminggu berdasarkan tanggal yang diberikan. Program menerima input tiga bilangan bulat: tanggal (d), bulan (m), dan tahun (y). Jika input valid, program menampilkan hari dalam seminggu untuk tanggal tersebut. Jika tidak valid, program menampilkan pesan kesalahan.

Format Input:
```
Tiga bilangan bulat: d (tanggal), m (bulan), y (tahun).
```

Constraints:
```
1 ≤ y ≤ 9999
1 ≤ m ≤ 12
1 ≤ d ≤ 31
```

Format Output:
```
Jika input valid, cetak nama hari dalam seminggu (misalnya, "Monday", "Tuesday", dll.).
Jika input tidak valid, cetak salah satu pesan berikut:
"Invalid year"
"Invalid month"
"Invalid day"
```

`Contoh:`

Input 0:
```
24 8 2024
```

Output 0:
```
Saturday
```

Penjelasan : 24 Agustus 2024 adalah hari Sabtu. Input valid.

Input 1:
```
1 13 2020
```

Output 1:
```
Invalid month
```

Penjelasan : Bulan tidak boleh lebih dari 12, jadi input ini tidak valid.

Input:
```
25 12 10000
```

Output:
```
Invalid year
```

Penjelasan :
Tahun hanya boleh hingga 9999, sehingga 10000 adalah tahun yang tidak valid.