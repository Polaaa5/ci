#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include <stdlib.h>

int main() {
int n=8;
char str[8] = " tiger";
char str2[8];
int slen = strlen(str);
*str = *(char *)malloc(n * sizeof(char));
*str2 = *(char *)malloc(n * sizeof(char));
for (int i = 1;i <=n ;i++)
str2[i-1] = str[n - 1 -i];

memcpy(str, str2, n+1);

for (int i = 1; i <= n; i++)
printf("%c", str[i]);

free(str);
free(str2);
return 0;
}
