main
	BEGIN
    DECLARE INT num1, num2
    DECLARE INT result
		inputNum(num1, num2)
		inputMenu(num1, num2)
		showResult(result)
	END

inputNum(num1, num2)
	BEGIN
		PRINT "Input number 1: "
		GET num1
		PRINT "Input number 2: "
		GET num2
  END

inputMenu(num1, num2)
  BEGIN
    DECLARE INT menu
    PRINT "1. Sum \n"
    PRINT "2. Difference \n"
    PRINT "3. Product \n"
    PRINT "4. Quotient \n"
    PRINT "Your choice (1-4): "
    GET menu
    CASE OF menu
      1 : add(num1, num2)
      2 : subtract(num1, num2)
      3 : multiply(num1, num2)
      4 : divide(num1, num2)
      default: PRINT "Wrong menu"
  END 

add(a,b)
  BEGIN
    result = num1 + num2
  END

subtract(a,b)
  BEGIN
    result = num1 - num2
  END     

multiply(a,b)
  BEGIN
    result = num1 * num2
  END     

divide(a,b)
  BEGIN
    IF b == 0
      PRINT "Quotient cannot be performed because second number is zero"
    ELSE
      result = num1 / num2
  END

showResult(result)
  BEGIN
    IF result != ''
      PRINT "Result: ", result
  END

