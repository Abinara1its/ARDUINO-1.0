**Soal : Menghitung Total Pembayaran Setelah Diskon**

Deskripsi : Surya membantu ibunya yang ahli dalam berburu diskon dengan membuat program yang akan menghitung total pembayaran setelah diskon diberikan berdasarkan total belanja. Aturan diskon adalah sebagai berikut:

Aturan Diskon :
- Tidak ada diskon: Jika total belanja kurang dari Rp. 100.000.
- Diskon 10%: Jika total belanja antara Rp. 100.000 – Rp. 300.000.
- Diskon 20%: Jika total belanja antara Rp. 300.000 – Rp. 500.000.
- Diskon 30%: Jika total belanja lebih dari Rp. 500.000.

Input Format:
```
Satu bilangan bulat x yang mewakili total belanja dalam Rupiah.
```
Constraints:
```
0 ≤ x ≤ 9.999.999
```

Output Format:

Cetak `"Total Bayar: y"`

di mana y adalah total yang harus dibayar setelah diskon.

`Contoh:`

Input 0:

```
150000
```

Output 0:

```
135000.00
```

Penjelasan:

- Total belanja adalah Rp. 150.000, sehingga diskon yang berlaku adalah 10%.
- Diskon 10% dari Rp. 150.000 adalah Rp. 15.000.
- Total yang harus dibayar adalah Rp. 150.000 - Rp. 15.000 = Rp. 135.000.