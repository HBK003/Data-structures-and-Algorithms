#include <stdio.h>
#include <string.h>
int main(void) {
	// your code goes here
	int t;
	scanf("%d", &t);
	while(t--) {
	    char s[1000001];
	    scanf("%s", s);
	    int n = strlen(s), top = -1, count = 0, ans = 0;
	    for(int i = 0; i < n; i++) {
	        if (s[i] == '<') {
	            count++;
	        }
	        else {
	            count--;
	            if(count == 0) {
	                ans = i+1;
	            }
	            else if(count < 0) {
	                break;
	            }
	        }
	    }
	    printf("%d\n", ans);
	}
	return 0;
}

