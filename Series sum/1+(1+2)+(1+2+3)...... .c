#include<stdio.h>
#include<conio.h>
int main()
{
    int n,sum=0,i,j;
    while (1){
    printf("Input:");
    scanf("%d",&n);
    printf("Output:\n");
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            sum=sum+j;
        }
    }
    printf("sum:%d\n",sum);
    printf("series:");
    for( i=1; i<=n; i++)
    {
        for( j=1; j<=i; j++)
        {
                printf("%d",j);
            
            if(i==j && j!=1)
                printf(")");
            if(n!=j)
                printf("+");
        }
            if(n !=i)
                printf("(");
    }
    printf("\n\n");
    }
    getch();
    
}
