#include <stdio.h>

int main(void) {

	int n,t,x,i,j,a[201],temp,val,r,q;
	scanf("%d\n",&t);
    while(t--)
	{
	    scanf("%d\n",&n);
        


	for(i=0;i<=200;i++)
    {
        	a[i]=0;
    }
	
	a[200]=1;
	temp=0;
	for(j=1;j<=n;j++)
	{
		
		for(i=200;i>=0;--i)
		{
			val=a[i]*j+temp;
		    a[i]=val%10;
	     	temp=val/10;
		}
		
	}
	q=0;

	while(a[q]==0)
	{
	    q++;
	}
	printf("\n");
	for(r=q;r<=200;r++)
    {
        	printf("%d",a[r]);
    }
	
}

printf("\n");
	return 0;
}

