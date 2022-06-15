/* Fixing Code Errors */


//	Power assigns x raised to the nth power to z
// ERROR
void Power(unsigned x, unsigned n, unsigned long long z) {
	unsigned i, x, n;

	for (i = 1, z = 0; i <= n; i++)
		z *= x;

	return z;
}

// CORRECTION
void Power(unsigned int x, unsigned int n, unsigned long long* z) {

	unsigned int i;

	for (i = 1, *z = 1; i < n; i++) 
		*z *= x;
}
/* 	Since we are not returning anything, in order to assign 
	the value of x^n to z we have to make z a pointer to
	directly change the value in calling function.
*/

