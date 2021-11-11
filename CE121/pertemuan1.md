TODO: Tulis ulang di LaTeX
# Opening

# Materi

## Operasi Matriks

### Adddition and Subtraction
Untuk menjumlahkan atau mengurangi, kedua ukuran harus sama contoh

$$c_ij = a_ij + b_ij$$

Commutative Law:
$$A + B = B + A$$

Associative Law:

A+(B+C)=(A+B)+C=A+B+C

Apabila A + 0 = 0 + A = A
If A + (-A) = 0 (dimana -A adalah matriks yang terdiri dari -aj sebagai element)

### Kali Skalar

Skalar = Konstant atau single element

Sifat:
- k(A+B) = kA + kB
- (k + g)A = kA + gA

### Perkalian Matriks

Perkalian dua matriks harus menghasilkan matriks yang berbeda. Dua matriks harus bisa dikalikan

Contoh: A_(1x3) * B_(3x1) = C_(1x1)

Cara:
Mengalikan Baris A dengan Kolom B maka hasilnya C
(TODO)

Ingat bahwa IA = A (I adalah identitas)

- AI = IA = A
- A(BC) = (AB)C = ABC (asosiatif)
- A(B+C) = AB + AC (distributif)
- (A+B)C = AC + BC (distributif kedua)

Catatan: 
- AB tidak sama dengan BA, BA mungkin tidak conformable
- Jika AB = 0, bukan berarti A atau B harus 0
- Jika AB = AC, B bukan berarti = C

Jangan membalik-balik ketika melakukan perkalian

TODO: tulis contoh-contoh yang ada di PPT/SS

### Transpose

contoh
A = A_2^3 = TODO

Transpose = Interchange rows and columns

Dimensi A^T kebalikan dari A

Sifat transposed matriks:
- (A+B_^T = A^T + B^T
- (AB)^T = B^T A^T
- (kA)^T = kA^T
- (A^T)^T = A

TODO: tulis contoh-contoh yang ada di PPT/SS

TODO: Square Matrices

### Invers Matriks

Contoh K = 7 inverse dari k atau k^{-1} = \frac{1}{k} = \frac{1}{7}

Pembagian matriks tidak bisa didefinisikan karena bisa saja AB = AC sedangkan B != C, maka dilakukan invers matriks.

Contoh:

A = A_2^2 = \begin{matrix} {
3 1 }
{ 2 1 }
\end

TODO: lanjutkan contohnya, writing in LaTeX is damn hard

Sifat invers matriks:
- (AB)^{-1} = B^{-1} A^{-1}
- (A^{-1})^{-1} = A
- (A^T)^{-1} = (A^{-1})^T
- (kA)^{-1} = \frac{1}{k} A^{-1}

Catatan: 
- A square matrix that has an inverse is called a nonsingular matrix
- A matrix that does not have an inverse is called a singular matrix
- Square matrices have inverses except when the determinant is zero
- When the determinant of a matrikx is zero, the matrix is singular

### Determinant of a Matrix

Untuk mencari invers matrix, maka diperlukan determinan

Setiap elemen matriks A mempunyai unit skalar yang ditulis sebagai determinan dari A, ditulis dari $$det A$$ atau |A|.

TODO: write the rest of it based on PPT/SS, cepet amat scrollnya.

