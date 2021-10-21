#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int num;
int checkgcd(int,int);
int checkarea(int,int);
int total;
void checktriangles(int *length)
{
int i;
int temp;
int j,k;
int count[num];
for(i=0;i<num;i++)
{
	count[i] = 0;
}
for(i=0;i<num;i++)
{
	temp = length[i];
	for(j=0;j<temp;j++)
	{
		for(k=0;k<temp;k++)
		{
			if(temp*temp == j*j + k*k && checkgcd(j,k) == 1 && checkarea(j,k) ==1 )
			{
				count[i] = count[i] + 1;
			}
		}
	}
}
for(i=0;i<num;i++)
{
	printf("%d",count[i]);
	printf("\n");
}

}


int main() {
	int i;
  
    printf("enter number of queries");
    scanf("%d",&num);
    int length[num];
    for(i=0;i<num;i++)
    {
    	scanf("%d",&length[i]);
	}
    checktriangles(length);
    return 0;
}

int checkgcd(int a, int b)
{
	int i;
	int gcd;
	 for(i=1; i <= a && i <= b; ++i)
    {
        
        if(a%i==0 && b%i==0)
            gcd = i;
    }
    return gcd;
}
int checkarea(int a, int b)
{
	float area;
	int k;
	float rem;
	area = a*b*1/2;
	k = (int) area;
	rem = area - k;
	
	if(rem == 0 && (int)area%6==0 && (int)area%28==0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
