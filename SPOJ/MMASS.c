#include <stdio.h>
#include <ctype.h>
int stack[101], top = -1;
void push(int val) {
    stack[++top] = val;
}
int pop() {
    return stack[top--];
}
int getMass(char ch) {
    switch(ch) {
        case 'H' : return 1;
        case 'C' : return 12;
        case 'O' : return 16;
    }
    return 0;
}
int main(void) {
	// your code goes here
	char s[101];
	scanf("%s", s);
	for(int i = 0; s[i]; i++) {
	    if(isdigit(s[i])) {
	        int t = stack[top];
	        pop();
	        push(t * (s[i]-'0'));
	    }
	    else if(s[i] == '(') {
	        push(-1);
	    }
	    else if(s[i] == ')') {
	        int sum = 0;
	        while(top != -1 && stack[top] != -1) {
	            sum += pop();
	        }
	        pop();
	        push(sum)
	    }
	    else if(isalpha(s[i])) {
	        push(getMass(s[i]));
	    }
	}
	int sum = 0;
	while(top != -1) {
	    
	}
	return 0;
}

