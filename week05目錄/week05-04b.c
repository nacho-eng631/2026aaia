//week05-04b.cpp SOIT_BASE_004
#include <stdio.h>
int main ()
{
	int N;
	scanf("%d",&N);
	int ans =100;
	if (N>1500){
		ans += (N-1500)/ 250*5;
		if ((N-1500)%250>0) ans +=5;
	}
	printf("%d",ans);
}
