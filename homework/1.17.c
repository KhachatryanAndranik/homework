#include <stdio.h>

// 1.13
/*
#define IN 1
#define OUT 0

int main() {
	int c;
	int state = OUT;

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			if (state == IN) {
				putchar('\n');
				state = OUT;
			}
		}
		else {
			putchar('*');
			state = IN;
		}
	}
	return 0;	
}

*/

// 1.17
/*
#define MAXLINE 1000
#define MAXLENGTH 80


int main() {
	char line[MAXLINE];
	int c, i = 0;

	while ((c = getchar()) != EOF) {
		if (c != '\n') {
			line[i] = c;
			i++;
		}
		else
		{
			if (i > MAXLENGTH) {
				line[i] = '\0';
				printf("%s\n", line);
			}
			i = 0;
		}
	}
	return 0;
}
*/

// 1.19

#define MAXLENGTH 1000

void reverse(char s[]) {
	int length = 0;
	while (s[length] != '\0') {
		length++;
	}

	for (int i = 0; i < length / 2; i++) {
		char a = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = a;
	}
}

int main() {
	int i = 0, c;
	char line[MAXLENGTH];

	while ((c = getchar()) != EOF) {
		if (c != '\n') {
			line[i] = c;
			i++;
		}
		else {
			line[i] = '\0';
			reverse(line);
			printf("%s\n", line);
			i = 0;
		}
	}
	return 0;

}