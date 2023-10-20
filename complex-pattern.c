/*Example: 

input : 5
output: 
5 5 5 5 5 5 5 5 5
5 4 4 4 4 4 4 4 5
5 4 3 3 3 3 3 4 5
5 4 3 2 2 2 3 4 5
5 4 3 2 1 2 3 4 5
5 4 3 2 2 2 3 4 5
5 4 3 3 3 3 3 4 5
5 4 4 4 4 4 4 4 5
5 5 5 5 5 5 5 5 5
  */
//Code:

#include <stdio.h>

int main()
{
    int n,i,j,k;
    scanf("%d", &n);
    
    for(i=n;i>=1;i--)
    {
        for(j=n;j>i;j--)
        printf("%d ", j);
        for(j=1;j<=i*2-1;j++)
        printf("%d ", i);
        for(j=i+1; j<=n; j++)
        printf("%d ", j);
        printf("\n");
    }
    for(i=1; i<n; i++)
    {
        for(j=n;j>i;j--)
        printf("%d ", j);
        for(j=1;j<=i*2-1;j++)
        printf("%d ", i+1);
        for(j=i+1; j<=n; j++)
        printf("%d ", j);
        printf("\n");
    }

    return 0;
}
