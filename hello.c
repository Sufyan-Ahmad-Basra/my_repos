#include <stdio.h>
#include <string.h>
int main(void)
{
int Q, M, N;
char Str[1000];
int leng, pow, first;
int A =0;
int msb;

printf("input for Q\n");
scanf("%d",&Q);
printf("input for N\n");
scanf("%d",&N);
printf("input for M\n");
scanf("%d",&M);
// step 2
A = A<<1;
Q = Q<<1;
// step 3
A = A-M;
// convert the A in to binary
sprintf(str, "%d", A);
leng = strlen(str);
leng = leng -1;
pow = round(pow(10, len));
first = A/leng;

// case of msb

if (first ==1 or 2 or 3 or 5 or 6 or 7)
{ msb =0;
}
else
{ msb = 1;
}




return 0;

}
