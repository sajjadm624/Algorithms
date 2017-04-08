#include<stdio.h>
int main()
{
    int l,i,j,k,temp,m,a[10000];
    scanf("%d", &l);

        for(j=0 ; j<l ; j++)
            scanf("%d", &a[j]);

        for(k=0 ; k<l-1 ; k++)
            {
            for(m=0 ; m<l-k-1 ; m++)
            {
                if( a[m] > a[m+1] )
                {
                    temp=a[m];
                    a[m]=a[m+1];
                    a[m+1]=temp;
                }
            }
        }
        for(j=0 ; j<l ; j++)
            printf("%d\n", a[j]);
        return 0;
}
