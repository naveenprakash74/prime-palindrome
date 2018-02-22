#include <stdio.h>

int main()
{
    int a,r,k,i,j,m;
    for(i=10;i<=1000;i++)
    {	r=0;
    	k=0;
    	a=i;
        while( a!=0 )
        {
            r = a%10;
            k= k*10 + r;
            a /= 10;
        }
        
    		
    	if (i == k)
        {
            m=k/2;    
            for(j=2;j<=m;j++)    
                {    
                if(k%j==0)    
                    {    
                    printf("\t");    
                    }  
				else
					printf("number is prime %d\n",k);
					break;  
                }
        }
        
    }
}



