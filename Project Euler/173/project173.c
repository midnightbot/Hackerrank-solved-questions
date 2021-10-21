#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calc();
int main() {
    long long int n;
    long long int i; 
    long long int count;
    long long int maxcount;
    long long int current_used_tiles;
    long long int j;
    long long int num;
    count = 0;
    printf("enter number of tiles");
    scanf("%lld",&n);

    for(i=0;;i++)
    {
        if(4*i+4>n)
        break;
    } // i-1 is the maximum square hole that can be formed
    maxcount = i-1;
    printf("%lld",maxcount);
    current_used_tiles = 0;
    for(j=1;j<=maxcount;j++)
    {
    	current_used_tiles = 4*j+4;
    	num = j;
    	
    	anish:
    	if(num%2 == 0 && current_used_tiles <=n && num>1)
    	{
    		count = count +1;
    		current_used_tiles = current_used_tiles + 4*(num-2) +4;
    		num = num -2;
    		goto anish;
    		
		}
		if(num%2 != 0 && current_used_tiles <=n && num>1)
		{
			count = count +1;
			current_used_tiles = current_used_tiles + 4*(num-2) +4;
			num = num -2;
			goto anish;
		}
		if(num ==1 && current_used_tiles <=n)
		{
			count = count + 1;
			num = num -2;
		}
	}
	printf(" \n %lld",count);
    
  
    return 0;
}


