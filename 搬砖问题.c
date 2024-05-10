#include<stdio.h>
int f(int x,int y,int z)
{
    return 4*x+y*3+z/2;
}
int main() 
{
    int n;
    int x,y,z;
    scanf("%d",&n);
    for(x = 0; x <= n/4; x ++) 
    {
        for(y = 0; y <= n/3; y ++)  
        {
            z = n-x-y;
            if(z%2==0) 
            {
                if(f(x,y,z)== n)
                printf("%d %d %d\n",x,y,z);
            }
        }
    }
    return 0;
}
