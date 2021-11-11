pembayaranKartuKredit

1	Deklarasikan priceAmt, counter, cardNum, cardCVV, cardExpDate
2	Masukkan nominal belanja dan isi di variabel priceAmt
	Lakukan 
3		Tambahkan 1 kedalam counter
4		Masukkan nomor kartu dan isi di variabel cardNum
		Masukkan CVV dan isi di variabel cardCVV
		Masukkan Expiration Date dan isi di variabel cardExpDate
		Jika counter > 3, maka
   		Berikan error
   		Hentikan program
   Selama CVV != 395
   
	Print "Transaksi Berhasil!"
	Munculkan nominal belanja (priceAmt) ke dalam output

---

deretAritmatika

	Deklarasikan variabel n, counter dan hasil
	Isi variabel hasil dengan angka 0
	Masukkan nilai suku dan masukkan di variabel n
	Selama counter kurang dari atau sama dengan n
		Isi variabel hasil dengan isi dari variabel hasil ditambah hasil dari rumus (4*counter-1)
	Munculkan isi dari variabel hasil

---

kalkulatorBangunDatar
	START
1	DECLARE menu, hasilKeliling, hasilLuas, hasilVolume
2	PRINT "1. Kalkulator Lingkaran"
	PRINT "2. Kalkulator Layang-layang"
	PRINT "3. Kalkulator Limas Segilima"
3	PROMPT "Pilih menu: "
	GET menu
		
4	CASE of menu
		1: calcLingkaran
		2: calcLayang
		3: calcLimasSegilima
		default: PRINT "Menu tidak ditemukan"
	ENDCASE

5	PRINT "Hasil Keliling: ", hasilKeliling
	PRINT "Hasil Luas: ", hasilLuas
	PRINT "Hasil Volume: ", hasilVolume
	END
	
calcLingkaran
1	DECLARE phi, jari
2	phi = 3.14
3	PROMPT "Masukkan jari-jari: "
	GET jari

4	hasilKeliling = 2 * phi * jari
5	hasilLuas = phi * jari * jari

calcLayang
	DECLARE sisi1, sisi2, diagon1, diagon2
	PROMPT "Masukkan panjang sisi pertama: " 
	GET sisi1
	PROMPT "Masukkan panjang sisi kedua: " 
	GET sisi2
	PROMPT "Masukkan panjang diagonal pertama: " 
	GET diagon1 
	PROMPT "Masukkan panjang diagonal kedua: " 
	GET diagon2 
	
	hasilKeliling = 2 * (sisi1 + sisi2)
	hasilLuas = (diagon1 + diagon2) / 2

calcLimasSegilima
	DECLARE luasAlas, tinggi
	PROMPT "Masukkan luas alasnya: " 
	GET luasAlas
	PROMPT "Masukkan tinggi: " 
	GET tinggi

	hasilVolume = (luasAlas * tinggi) / 3

---

kirimSurat
START
1	DECLARE namaPenerima, namaPengirim, tujuanSurat, namaPaket, estimasiDurasi, isiSurat, biayaSurat
2	getPenerima()
3	getPengirim()
4	getPaket()
5	writeMessage()
6	displayResult()
END

getPenerima
START
1	DECLARE alamatBenar
2	PROMPT "Nama Penerima: "
	GET namaPenerima
	PROMPT "Alamat Tujuan: "
	GET tujuanSurat
3	alamatBenar = FALSE
4	WHILE (alamatBenar == FALSE)
		checkAlamat()
	ENDWHILE
END

checkAlamat
START
1	GET databaseAlamat
2	IF (databaseAlamat == tujuanSurat)
		alamatBenar == TRUE
	ELSE
		alamatBenar == FALSE
		PRINT "Alamat tidak ditemukan, silahkan dicek kembali"
	ENDIF
END

getPengirim
START
3	PROMPT "Nama Pengirim: "
	GET namaPengirim
END

getPaket()
START
4	DECLARE pilihanPaket
5	PRINT "Pilih Paket"
	PRINT "1. Super Kilat (1-3 Hari: Rp 20.000,-)"
	PRINT "2. Kilat (3-5 hari: Rp 17.000,-)"
	PRINT "3. Biasa (1-7 Hari: Rp 10.000,-)"
	PROMPT "Masukkan angka (1-3: "
6	GET pilihanPaket
7	CASE OF pilihanPaket:
		1: namaPaket = "Super Kilat"
		   estimasiDurasi = "1-3 hari"
		   biayaSurat = "Rp 20.000,-"
		2: namaPaket = "Kilat"
		   estimasiDurasi = "3-5 hari"
		   biayaSurat = "Rp 17.000,-"
		3: namaPaket = "Biasa"
		   estimasiDurasi = "1-7 hari"
		   biayaSurat = "Rp 10.000,-"
END

writeMessage
START
1	PROMPT "Isi pesan anda: "
	GET isiSurat
END

displayResult
START
1	PRINT "Pengirim: ", namaPengirim
	PRINT "Penerima: ", namaPenerima
	PRINT "Alamat Tujuan: ", tujuanSurat
	PRINT "Pilihan Paket: ", namaPaket
	PRINT "Estimasi: ", estimasiDurasi
	PRINT "Pesan: ", isiSurat
	PRINT "Biaya: ", biayaSurat
END
