simpleCalculator

1 PROMPT num1, num2;
  GET num1, num2;
2 PROMPT menuChoice;
  GET menuChoice;

3 CASE OF menuChoice
	'1' : result = num1 + num2;
	'2' : result = num1 - num2;
	'3' : result = num1 * num2;
	'4' : IF num2 <> 0 THEN
			result = num1 / num2;
		  ELSE 
			PRINT "Angka kedua tidak boleh 0 (nol)";
			END
		  ENDIF
	other : PRINT "Menu belum dipilih"; END;
ENDCASE

4 PRINT "Hasilnya adalah: " + result;

END

-------------------------------------------------------------------------------

discountCalculator

1 PROMPT articlePrice, priceCode;
2 GET articlePrice, priceCode;

3 CASE OF priceCode
	'H' : discountRate = 0.5;
	'F' : discountRate = 0.4;
	'T' : discountRate = 0.33;
	'Q' : discountRate = 0.25;
	'Z' : PRINT "No Discount"; discountRate = 0;
	other : PRINT "Invalid Pricing Code"; END;
ENDCASE

4 discountAmt = articlePrice * discountRate;
5 finalPrice = articlePrice - discountAmt;

6 PRINT "Original Price: " + articlePrice + "\n Discount Amount: " + discountAmt + "\n Final Price: " + finalPrice;

END
