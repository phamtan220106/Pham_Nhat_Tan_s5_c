#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Pham_nhat_tan_session05_ex8\n");
    int a,b;
    scanf("%d %d",&a,&b);
    int x=a,y=b;
    while(b!=0){
        int sum=b;
        b=a%b;
        a=sum;
    }//a la ucln
    int bcnn=abs(x*y)/a;
    printf("bcnn cua %d va %d la %d \n",x,y,bcnn);
    printf("Hello world!\n");
    return 0;
}
