#include <iostream>

using std::cout;

//Function Prototypes
int gcd(int a, int b);
int fib(int n);
int pow(int a, int b);
int tri(int n);

int _itergcd(int a, int b);
int _iterfib(int n);
int _iterpow(int a, int b);
int _itertri(int n);

// Main program.
//Change the function inputs to see if they work.
int main(){
	cout << "\t\tUSING RECURSIVE METHODS\n";
	cout << gcd(5, 15);
	cout << "\n";
	cout << fib(2);
	cout << "\n";
	cout << pow(4, 2);
	cout << "\n";
	cout << tri(100);
	cout << "\n";
	cout << "\t\tUSING ITERATIVE METHODS\n";
	cout << _itergcd(5, 15);
	cout << "\n";
	cout << _iterfib(2);
	cout << "\n";
	cout << _iterpow(4, 2);
	cout << "\n";
	cout << _itertri(100);
	return 0;
}
//End of main
//-----------------------------------

//Function Definitions for recursive methods.
int gcd(int a, int b){
	// To make numbers positive
	if (a < 0){
		a = a*-1;
	}
	else if (b < 0){
		b = b*-1;
	}
	//The base cases.
	if (a == 0){
		return b;
	}
	else if (b == 0){
		return a;
	}
	//The recursive cases
	if (a > b){
		return gcd(a - b, b);
	}
	else
		return gcd(a, b - a);
}

//Using Fibonacci Series:
// 1 ,1, 2, 3, 5, 8, 13 ...
int fib(int n){
	//The base cases
	if (n == 0){
		return n;
	}
	if (n == 1){
		return n;
	}
	//The recursive case
	else
		return fib(n - 1) + fib(n - 2);
}

int pow(int a, int b){
	int temp = 1; // To handle base case b = 0.
	if (b < 0){
		cout << "Error. Power can't be negative\n";
		return 0;
	}

	//The Base Cases
	if (b == 0){
		return temp;
	}
	if (b == 1){
		return a;
	}
	//The Recursive Case
	else
		// This simply multiplies a with itself b times
		return a*pow(a, b - 1);
}

int tri(int n){
	//Handles the invalid case of n = 0
	if (n == 0){
		cout << "ERROR invalid input.\n";
		return -1;
	}
	//The Base Case
	else if (n == 1)
		return n;
	//The Recursive Case
	else
		return n + tri(n - 1);

}
//End of definitons for recursive methods.
//---------------------------------------
//Function Definitions for Iterative Methods.
int _itergcd(int a, int b){
	// To make numbers positive
	if (a < 0){
		a = a*-1;
	}
	if (b < 0){
		b = b*-1;
	}
	//This condition takes care of the case where either a or b = 0
	//Also while is used as we don't know how many times the loop runs
	while (a != b){
		//The rest of algorithm is same as in the document.
		if (a < b)
			b = b - a;
		else
			a = a - b;
	}
	return a;

}
//Using Fibonacci Series:
// 1 ,1, 2, 3, 5, 8, 13 ...
int _iterfib(int n){
	int temp, count = 0, sum = 0, prev = 1;
	if (n == 1){
		return 1;
	}
	else{
		// Can be done using for loop also
		while (count < n){
			temp = sum; // Temp here stores previous sum value to assign to prev later.
			sum = prev + sum; // Calculates next number in series.
			prev = temp; // preserves previous number for use in next iteration.
			count++; //loop counter.
		}
		return sum;
	}
}

int _iterpow(int a, int b){
	// To handle the case when b = 0
	int pow = 1;

	if (b < 0){
		cout << "Error. Power can't be negative\n";
		return 0;
	}
	//Iteratively multiplying a with the previous product.
	for (int loop = 0; loop < b; loop++){
		pow *= a;
	}
	return pow;
}

//This is simple. Just add the successive numbers till the number n.
int _itertri(int n){
	//Handles the invalid case of n = 0
	if (n == 0){
		cout << "ERROR invalid input.\n";
		return -1;
	}
	int sum = 0;
	for (int loop = 0; loop < n; loop++){
		sum += loop + 1;
	}
	return sum;
}
//End of definitions
//----------------------------------------
