#include <stdio.h>

long long f[1000000], a[1000000];

int main() {

	a[1] = 0; 
	for(int i = 0; i < 1000000; i++) {
		f[i] = 1;
	}

	for(int i = 2; i <= (1000000/2); i++) {
		for(int j = i*2; j < 1000000; j+=i) {
			f[j] += i;
		}
	}
	for(int i = 2; i < 1000000; i++) {
		a[i] = a[i-1] + f[i];
	}

	int t, n;
	scanf("%d", &t);
	for(int i = 0; i < t; i++) {
		scanf("%d", &n);
		printf("%lld\n", a[n]);
	}

	return 0;
}
