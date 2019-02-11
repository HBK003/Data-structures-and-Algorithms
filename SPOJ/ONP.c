#include <stdio.h>
int getPrecedance(char ch) {
    if (ch == '^') {
        return 5;
    }
    else if (ch == '/') {
        return 4;
    }
    else if (ch == '*') {
        return 3;
    }
    else if (ch == '-') {
        return 2;
    }
    else if (ch == '+') {
        return 1;
    }
    else {
        return 15;
    }
}
int main(void) {
	// your code goes here
	int t;
	scanf("%d", &t);
	while(t--) {
	    char s[400], stack[400];
	    int top = -1, i;
	    scanf("%s", s);
	    for(i = 0; s[i] != '\0'; i++) {
	        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
	            printf("%c", s[i]);
	        }
	        else if (s[i] == '(') {
	            stack[++top] = s[i];
	        }
	        else if(s[i] == ')') {
	            while()
	        }
	        else if (top == -1 || getPrecedance(s[i]) > getPrecedance(stack[top])) {
	            stack[++top] = s[i];
	        }
	        else {
	            int prec = getPrecedance(s[i]);
	            while(prec <= getPrecedance(stack[top])) {
	                char c = stack[top];
	                top--;
	                if (c == '(') {
	                    break;
	                }
	                printf("%c", c);
	            }
	            stack[++top] = s[i];
	        }
	    }
	}
	return 0;
}

