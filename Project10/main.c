#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 50
int main() {
	int n;
	int a[MAX], b[MAX], c[MAX];
	long double num = 0, p = 1;
	scanf("%d", &n);

	while (n <= 0 || n >= MAX) {
		scanf("%d", &n);
	}
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < n; i++) {
		scanf("%d", &b[i]);
	}
	for (int i = 0; i < n; i++) {
		if (a[i] < b[i]) {
			c[i] = 0;
		}
		else {
			c[i] = 1;
		}
	}

	for (int i = n - 1; i >= 0; i--) {
		if (c[i] == 1) {
			num += p;
		}
		p *= 2;
	}
	printf("%d \n", num);
	return 0;
}