#include <stdio.h>

int main() {

	int t;
	scanf("%d", &t);
	for(int i = 1; i <= t; i++) {
		double n;
		scanf("%lf", &n);
		printf("%.11f\n", (double)3/4 + 0.5/(n+2.0) - 0.5/(n+1.0));
	}

	return 0;
}