#include <stdio.h>
int main(){
	int t,n,k,i,s,j,p;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&n,&k);
		p=0;
		for(i=1;i<=k;i++){
			s=1;
	       for(j=0;j<i;j++){
		   
	       s*=n;
			} 
		p+=s;
		}
		printf("%d\n",p);
			
	}

	return 0;
}
