#include<stdio.h>
 
int main() {
	int t;
	int i;
	int n;
	printf("�������С");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for (i = 0; i < n/2; i++) {
		t = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = t;
	}
	for (i = 0; i < n; i++)
		printf("%5d", a[i]);
	return 0;
}
