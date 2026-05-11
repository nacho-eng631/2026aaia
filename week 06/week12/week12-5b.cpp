//week12-5b
#include <stdio.h>
int main()
{
	int N;
	scanf("%d", &N);
	int ans = 0;
	for (int i=1; i<N; i++){
	ans += i * (i+1);
	}
	printf("%d\n", ans);


}
