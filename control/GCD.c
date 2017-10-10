#include <stdio.h>
void main(){
	int m,n;
	scanf("%d %d",&m,&n);
	while(n){
		int k = m%n;
		m = n; n = k;
	}
	printf("GCD is %d\n",m);
}
