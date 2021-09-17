---
title: Tugas 2 - Discrete Math
# lang: ID
---

## Problems
1. Nyatakan apakah bentuk argumentasi di bawah ini dapat dikatakan valid!
$$ \frac{
	\begin{array}{c}
 		\neg p \lor q \rightarrow r \\
 		s \lor \neg q \\
 		\neg t \\
		p \rightarrow t \\
		\neg p \land r \rightarrow \neg s
 \end{array}}{
	\therefore \neg q
	}$$

2. Show that these statements are inconsistent: _“If Miranda does not take a course in discrete mathematics, then she will not graduate.”_ _“If Miranda does not graduate, then she is not qualified for the job.”_ _“If Miranda reads this book, then she is qualified for the job.”_ _“Miranda does not take a course in discrete mathematics but she reads this book.”_

3. Express the negation of these proposions using quantifiers, and then express the negation in English
	1. Some drivers do not obey the speed limit.
	2. All Swedish movies are serious.
	3. No one can keep a secret.
	4. There is someone in this class who does not have a good attitude.

4. Determine the truth value of each of these statements if the domain of each variable consists of all real numbers.
   1. $\forall x \exists y (x^2 = y)$
   2. $\forall x \exists y (x = y^2)$
   3. $\exists x \forall y (xy = 0)$
   4. $\exists x \exists y (x + y \neq y + x)$

\newpage

## Solution
1.  Kita pakai persamaan pertama
	$$\begin{aligned}
	\neg p \lor q \rightarrow r \\
	p \rightarrow q \rightarrow r
	\end{aligned}$$
	Lalu gunakan silogisme untuk mendapatkan persamaan ke 6
	$$\frac{
		\begin{array}{l}
			p \rightarrow q \\
			q \rightarrow r
		\end{array}
	}{p \rightarrow r}$$
	Setelah itu pada persamaan 3 dan 4 kita gunakan _modus tollens_
	$$\frac{
		\begin{array}{r}
			p \rightarrow t \\
			\neg t
		\end{array}
	}{\neg p}$$
	Kita gabungkan hasil sebelumnya dengan persamaan 6 menggunakan _modus ponens_ sehingga didapat
	$$\frac{
		\begin{array}{l}
			p \rightarrow r \\
			\neg p
		\end{array}
	}{\neg r}$$

	Pada persamaan ke-5, kita gunakan sifat distributif sehingga didapat
	$$\begin{aligned}
		\neg p \land r &\rightarrow \neg s \\
		\neg(\neg p \land r) &\rightarrow \neg s \\
		p \lor \neg r &\rightarrow \neg s  \\
		\neg r \lor p &\rightarrow \neg s \\
		r \rightarrow p &\rightarrow \neg s
	\end{aligned}$$
	Lalu hasil persamaan tadi kita gunakan silogisme
	$$\frac{
		\begin{array}{c}
			r \rightarrow p \\
			p \rightarrow \neg s
		\end{array}
	}{r \rightarrow \neg s}$$
	dan aplikasikan _modus ponens_
	$$\frac{
		\begin{array}{l}
			r \rightarrow \neg s \\
			\neg r
		\end{array}
	}{s}$$

	Selanjutnya kita gunakan persamaan 2
	$$\begin{aligned}
		s &\lor \neg q \\
		\neg s &\rightarrow \neg q \\
		q &\rightarrow s
	\end{aligned}$$
	dan gunakan _modus tollens_ 
	$$ \frac{
		\begin{array}{r}
			q \rightarrow s \\
			s
		\end{array}
	}{q}$$
	Lalu kita gunakan _modus ponens_ untuk menyatakan pernyataan tersebut
	$$\frac{
		\begin{array}{l}
			\neg s \rightarrow \neg q \\
			s
		\end{array}
	}
	{\therefore q}$$
	Maka dapat disimpulkan bahwa pernyataan tersebut _**tidak valid**_.

2.  - Let $p$ be the statement _"Miranda take a course in discrete math"_
	- Let $q$ be the statement _"She will graduate"_
	- Let $r$ be the statement _"She is qualified for the job"_
	- Let $s$ be the statement _"She reads this book"_
	$$\begin{aligned}
		\frac{
			\begin{array}{l}
      			\neg p \rightarrow \neg q \\
				\neg q \rightarrow \neg r
    		\end{array}
		}{\neg p \rightarrow \neg r} \text{ (syllogism)}
		\end{aligned} $$ 
	$$\begin{aligned}
		r &\rightarrow p 
	\end{aligned} \text{ (contraposition)}$$
	$$\begin{aligned}
		\frac{
			\begin{array}{l}
				s \rightarrow r \\
				r \rightarrow p
    		\end{array}
		}{s \rightarrow p} 
	\end{aligned} \text{ (syllogism)}$$
	$$\begin{aligned}
		\neg p &\rightarrow \neg s &\text{(contraposition)}\\
		p &\lor \neg s \\
		\neg p &\land s &\text{(double negation)}
	\end{aligned}$$

	So we can conclude that _Miranda does not take a course in discrete mathematics but she reads this book._ and therefore, **the statement isn't consistent**.
3.  - *Some drivers do not obey the speed limit.*\
	Quantifiers: $\exists x (\neg O(x))$\
	Negation: $\forall x (O(x))$
	- *All Swedish movies are serious.*\
	Quantifiers: $\forall x (S(x))$\
	Negation: $\exists x (\neg S(x))$
	- *No one can keep a secret.*\
	Quantifiers: $\forall x (\neg C(x))$\
	Negation: $\exists x (C(x))$
    - *There is someone in this class who does not have a good attitude.*\
	Quantifiers: $\exists x (\neg A(x))$\
	Negation: $\forall x (A(x))$

4. - True
   - False
   - True
   - False