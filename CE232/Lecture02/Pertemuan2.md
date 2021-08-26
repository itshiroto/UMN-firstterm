## Alphanumeric Codes
Merepresentasikan karakter dan function yang ada pada keyboard
Menggunakan ASCII (American Standard Code for Information Interchange)

contoh:
A = 01001001 = 65

- 7 bit = 2^7 = 128 kemungkinan grup kode
- Tabel 2-4 menuliskan kode standar ASCII
- Contoh penggunaan: Mengirimkan informasi antara komputer, antara komputer dan printer, dan untuk penyimpanan internal

## Metode Parity untuk deteksi error
Pengiriman data antar komputer tidak menggunakan biner langsung, tapi melalui gelombang elektromagnetik (udara) atau listrik (kabel). Data yang diterima harus sama dengan data yang dikirim.
Bisa saja selama pengiriman data, datanya corrupt atau bermasalah (angkanya lain). Oleh karena itu harus ada penjaminan kalau datanya sama.

Cara paling sederhana adalah dengan "Error Detection"
Jika data yang diterima itu salah, maka harus dikirim ulang
Metodenya (?) menggunakan Parity

Angka 1 pada biner = parity
Dilihat jika jumlahnya genap atau ganjil

Antara yang mengirim dan menerima sudah ada kesepakatan kalau data yang dikirim itu genap atau ganjil (odd atau even).

### Contoh
Setiap data yang dikirim ditambahkan satu bit (extra bit) di depannya

#### Even Parity Method
Misalkan dikirim angka `1011`, maka ditambahkan bit paritynya didepan menjadi `11011` sehingga menjadi genap

Tapi jika dikirim angka `1001`, maka bit parity yang ditambahkan itu angka 0 menjadi `01001`.

> Odd parity method kebalikan dari atas

## Applications
TODO

# Boolean Constants and Variables
Boolean hanya ada dua values: 0 dan 1
Logic 0 bisa false, off, low, no, open switch
Logic 1 bisa true, on, high, yes, closed, switch

Ada 3 operasi logika: OR, AND, dan NOT

## Truth Tables

Tabel kebenaran menggambarkan hubungan antara input dan output.

Jumlah entriesnya berpengaruh ke jumlah inputnya

TODO: tulis tabelnya yang ada di PPT

### Gerbang OR
Output 1 jika salah satu inputnya 1
X = A + B

### Gerbang AND
Output 1 jika keduanya 1
X = A * B

### Gerbang NOT
Output 1 jika inputnya 0
Atau bisa dibilang outputnya kebalikan dari input

TODO: Tulis sisanya yang ada di PPT
