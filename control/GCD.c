#include <stdio.h>
void main(){
	int m,n,k;
	scanf("%d %d",&m,&n);
	while(n){
		k = m%n;
		m = n; n = k;
	}
	printf("GCD is %d\n",m);
}
