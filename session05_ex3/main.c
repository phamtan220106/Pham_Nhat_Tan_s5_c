#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Pham_nhat_tan_session05_ex3\n");
    int n,index=0;
    printf("nhap n:\n");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        index+=i;
    }
    printf("tong cac so tu 1 den %d la:%d\n",n,index);
    printf("Hello world!\n");
    return 0;
}
