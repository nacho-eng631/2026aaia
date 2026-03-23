//week05-05b.cpp SOIT107_Base_018
#include <stdio.h>
int main()
{
	int N;
	scanf ("%d", &N);
	int ans =0;
	for (int i=0; i<N; i++) {
	int now;
		scanf("%d ",&now);
		ans += now;
	}
	printf("%d\n",ans);
}
