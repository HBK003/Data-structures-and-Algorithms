#include <stdio.h>
void rotateClockWise(int n, int a[][n]) {
	for(int i = 0; i < n/2; i++) {
		for(int j = i; j < n-i-1; j++) {
			int t = a[i][j];
			a[i][j] = a[n-j-1][i];
			a[n-j-1][i] = a[n-i-1][n-j-1];
			a[n-i-1][n-j-1] = a[j][n-i-1];
			a[j][n-i-1] = t;
		}
	}
}
int main(void) {
	// your code goes here
	int t;
	scanf("%d", &t);
	while(t--) {
		int n, i, j;
		scanf("%d", &n);
		int a[n][n];
		for(i = 0; i < n; i++) {
			for(j = 0; j < n; j++) {
				scanf("%d", &a[i][j]);
			}
		}
		rotateClockWise(n, a);
		for(i = 0; i < n; i++) {
			for(j = 0; j < n; j++) {
				printf("%d ", a[i][j]);
			}
		}
	}
	return 0;
}
