//week16-3a.cpp
#include <stdio.h>
int main()
{
	int N;
	scanf("%d", &N);
	int ans = 0;
	for (int i=1; i<=1000; i++) {
		if (i*i == N) ans = i;
		}
		printf("%d", ans);
}
