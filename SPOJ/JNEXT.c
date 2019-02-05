#include <stdio.h>
void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}
int main(void) {
	// your code goes here
	int t;
	scanf("%d", &t);
	while (t--) {
	    int n, i, j, k, l, f = 1;
	    scanf("%d", &n);
	    int a[n];
	    for(i = 0; i < n; i++) {
	        scanf("%d", &a[i]);
	    }
	    for(k = n-2; k >= 0; k--) {
	        if(a[k] < a[k+1]) {
	            for(l = n-1; l > k; l--) {
	                if(a[k] < a[l]) {
	                    swap(&a[k], &a[l]);
	                    for(i = k+1, j = n-1; i < j; i++, j--) {
	                        swap(&a[i], &a[j]);
	                    }
	                  break;  
	                }
	            }
	            f = 0;
	            break;
	        }
	    }
	    if(f) {
	        printf("-1");
	    }
	    else {
    	    for(i = 0; i < n; i++) {
    	        printf("%d", a[i]);
    	    }
	    }
	    printf("\n");
	}
	return 0;
}

