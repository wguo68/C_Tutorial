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

void main(){
	int m,n;
	while(1){
		scanf("%d %d",&m,&n);

		while(n){
		  int k = m%n;
		  m = n; n = k;
	   }	
	   printf("GCD is %d\n",m);
	}
}

int GCD(int m, int n){
	while (n){
		int k = m%n;
		m = n; n = k;
	}
	return m
}
void main(){
	int x, y;
	while (1){
		scanf("%d %d", &x, &y);
		
		printf("GCD is %d\n", GCD(x,y));
	}
}

