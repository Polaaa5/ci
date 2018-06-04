#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void perevorot(char *s, int n);

int main(void)
{
	char str[] = "polina";
	int len = strlen(str);
	char *str2;
	str2 = (char*)calloc(len+1, sizeof(char));
	strcpy(str2, str);
	perevorot(str2, len);
	printf("%s", str2);
	free(str2);
	return 0;
}
void perevorot(char *s, int n)
{
	for (int i = 0; i<n / 2; i++)
	{
		char t = s[i];
		s[i] = s[n - i - 1];
		s[n - i - 1] = t;
	}
}
