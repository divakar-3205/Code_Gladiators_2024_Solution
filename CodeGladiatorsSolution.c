/* Read input from STDIN. Print your output to STDOUT*/
#include<stdio.h>
int main()
{
    int T;
	scanf("%d",&T);
while(T--){
	int P,X,R1;
	scanf("%d %d %d",&P,&X,&R1);
	int N,Y,R2;
	scanf("%d %d %d",&N,&Y,&R2);
	int paultime =(P/X)+R1;
	int ninatime =(N/Y)+R2;
	if(paultime<ninatime)
		printf("PAUL\n%d\n",paultime);
	else if(ninatime<paultime)
		printf("NINA\n%d\n",ninatime);
	else
		printf("BOTH\n%d\n",paultime);
}
}
