let minVal = 0;
let maxVal = 0;
let result = 1;

minVal = parseInt(prompt('Masukkan nilai minimum faktorial:'));
maxVal = parseInt(prompt('Masukkan nilai maksimum faktorial:'));

console.log(`${minVal} ${maxVal}`)

for (let i = 1; i <= maxVal; i++) {
	result *= i;
	if(i >= minVal){
		console.log(`${i}! = ${result}`);
	}
}
