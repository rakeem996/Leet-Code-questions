void swapNumber(int &a, int &b) {
	// Write your code here.
	a = a ^ b;
	b = b ^ a;
	a = a ^ b;
}