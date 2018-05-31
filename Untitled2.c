#include <stdio.h>
#include <malloc.h>

void copy(char *,char *);
void perevorot(char *,char *);

int main(void){
char str1[100],str2[100];
int i=0;
int n=100;
*str1 = *(char *)malloc(n * sizeof(char));
*str2 = *(char *)malloc(n * sizeof(char));
gets(str1);
copy(&str1[0], &str2[0]);
perevorot(&str1[0], &str2[0]);

printf("%s\n",str2);

free(str1);
free(str2);
return 0;
}

void copy(char *a,char *b){
do{
*b=*a;
++a;
++b;
}while(*a!=0);
*b=0;
}

void perevorot(char *a,char *b){
int i=0,k=0;
char *c;
c=a;
while (*c!=0){
c++;
i++;
}
i--;
while (a[k]){
*b=*(a+i);
--i;
k++;
b++;
}
*b=0;
}
