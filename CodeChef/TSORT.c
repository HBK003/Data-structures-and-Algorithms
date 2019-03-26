
/*

#include <stdio.h>
#include<stdlib.h>
int comparator(const void *p, const void *q) {
    int a = *((const int *)p + 0);
    int b = *((const int *)q + 0);
    return (a-b);
}
int main(void) {
	// your code goes here
	int n, i;
	scanf("%d", &n);
	int a[5][2] = {{4, 2}, {2, 3}, {5, 1}, {1, 5}, {0, 1}};
// 	for(i = 0; i < n; i++) {
// 	    scanf("%d", &a[i]);
// 	}
	qsort((void *)a, 5, 2*sizeof(a[0][0]), comparator);
	for(i = 0; i < n; i++) {
	    printf("%d %d\n", a[i][0], a[i][1]);
	}
	return 0;
}


*/


#include <stdio.h>
#include<stdlib.h>
int comparator(const void *p, const void *q) {
    int a = *(const int *)p;
    int b = *(const int *)q;
    return (a-b);
}
int main(void) {
	// your code goes here
	int n, i;
	scanf("%d", &n);
	int a[n];
	for(i = 0; i < n; i++) {
	    scanf("%d", &a[i]);
	}
	qsort((void *)a, n, sizeof(a[0]), comparator);
	for(i = 0; i < n; i++) {
	    printf("%d\n", a[i]);
	}
	return 0;
}

