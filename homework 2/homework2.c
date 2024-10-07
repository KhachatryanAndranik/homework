#include <stdio.h>

// 3.2
/*
void escape(char s[], char t[]);


int main() {
	
	char t[9] = "Wellcome";
	t[3] = '\t'; 
	char s[11];
	escape(s, t);
	printf("%s ----> %s\n", t, s);
	

}
void escape(char s[], char t[]) {
	int i = 0;
	int j = 0;

	while (t[i] != '\0') {
		switch (t[i]) {
		case '\t':
			s[j] = '\\';
			++j;
			s[j] = 't';
			++j;
			break;
		case '\n':
			s[j] = '\\';
			++j;
			s[j] = 'n';
			++j;
			break;
		default:
			s[j] = t[i];
			++j;
			break;
		}
		++i;

	}
	s[j] = '\0';
}
*/

// 3.3
/*
void expand(char s1[], char s2[]);
int main() {
	char s1[100] = "-a-z,A-Z,0-9-";
	char s2[100];

	expand(s1, s2);
	printf("%s", s2);

}

void expand(char s1[], char s2[])
{
	int i = 0;
	int j = 0;
	char c;

	while ((c = s1[i]) != '\0') {
		if (s1[i + 1] == '-' && s1[i + 2] >= c) {
			i = i + 2;
			
			while (c <= s1[i]) {
				s2[j] = c;
				++c;
				++j;
			}
		}
		else
		{
			s2[j] = c;
			++j;
		}
		++i;
	}
	s2[j] = '\0';
}
*/

// 3.5 
void reverse(char s[]) {
	int length = 0;
	while (s[length] != '\0') {
		length++;
	}
	for (int i = 0; i < length / 2; i++) {
		char temp = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = temp;
	}
}

void itob(int n, char s[], int b) {
	int i = 0, sign;

	if (n == 0) {
		s[i++] = '0';
		s[i] = '\0';
		return;
	}

	if ((sign = n) < 0) {
		n = -n;  
	}

	
	while (n > 0) {
		int digit = n % b;
		if (digit < 10) {
			s[i++] = digit + '0';  
		}
		else {
			s[i++] = digit - 10 + 'A'; 
		}
		n /= b;  
	}

	if (sign < 0) {
		s[i++] = '-';  
	}

	s[i] = '\0'; 

	reverse(s);  
}

int main() {
	int number = 17;  
	char result[100]; 

	itob(number, result, 16);  
	printf("The number %d in base 16 is: %s\n", number, result);

	return 0;
}
