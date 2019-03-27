#include <stdio.h>
#include <string.h>
int main(void) {
    int t;
    scanf("%d", &t);
    while(t--) {
        char s[10000];
        scanf("%s", s);
        int c[26] = {0};
        int i = 0, j = strlen(s)-1;
        while(i < j) {
            c[s[i]-97]++;
            c[s[j]-97]--;
            i++;
            j--;
        }
        int res = 1;
        for(i = 0; i < 26; i++) {
            if (c[i] != 0) {
                res = 0;
            }
        }
        if (!res) {
            printf("NO\n");
        }
        else {
            printf("YES\n");
        }
    } 
	// your code goes here
	return 0;
}

