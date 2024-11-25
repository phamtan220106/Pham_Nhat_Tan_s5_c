#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("Pham_nhat_tan_session05_ex9\n");
    int n,i,lengg=0;
    printf("nhap n: ");
    scanf("%d",&n);
    int x=n;
    while(n!=0){
        n=n/10;
        lengg++;
    }
    lengg=lengg-1;
    if(lengg==0) lengg=1;
    printf("cac chu so trong so da nhap la: ");
    while(x!=0){
        i=x/(int)pow(10,lengg);
        x=x%(int)pow(10,lengg);
        printf("%d ",i);
        lengg--;
    }
    printf("Hello world!\n");
    return 0;
}
