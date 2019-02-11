#include <stdio.h>

int main(void) {
	// your code goes here
	int n;
	scanf("%d", &n);
	while(n) {
	    int a[n], stack[n], top = -1, last = -1, f = 1;
	    int i;
	    for(i = 0; i < n; i++) {
	        scanf("%d", &a[i]);
	    }
	    for(i = 0; i < n; i++) {
	        if(last != -1 && top != -1 && stack[top]-1 == last) {
	            last = stack[top];
	            top--;
	            i--;
	        }
	        else if(i+1 < n && a[i] > a[i+1]) {
	            stack[++top] = a[i];
	        }
	        else if(stack[top]+1 == a[i]) {
	            last = stack[top];
	            top--;
	            i--;
	        }
	        else {
	            if (a[i] != 1 && last == -1) {
	                f = 0;
	                break;
	            }
	            last = a[i];
	        }
	    }
	    while(top != -1) {
	        if(last+1 == stack[top]) {
	            last = stack[top--];
	        }
	        else {
	            break;
	        }
	    }
	    if(top == -1 && f) {
	        printf("yes\n");
	    }
	    else {
	        printf("no\n");
	    }
	    scanf("%d", &n);
	}
	return 0;
}

