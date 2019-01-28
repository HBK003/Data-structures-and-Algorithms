#include <stdio.h>
int GCD(int a, int b) {
	if (b == 0) {
		return a;
	}
	return GCD(b, a % b);
}
void leftRotate(int a[], int n, int d) {
	int gcd = GCD(n, d), sets = n / gcd;
	int i, j, temp;
	for(i = 0; i < gcd; i++) {
		temp = a[i];
		for(j = 0; j < sets-1; j++) {
			a[j*gcd + i] = a[j*gcd + i + gcd];
		}
		a[j*gcd + i] = temp;
	}
}

int main(void) {
	// your code goes here
	int n, d, i;
	scanf("%d %d", &n, &d);
	int a[n];
	for(i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	leftRotate(a, n, d);
	for(i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}
