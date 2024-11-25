#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Pham_nhat_tan_session05_ex4\n");
    int A[10],n;
    printf("nhap vao 1 so tu 1 den 10\n");
    scanf("%d",&n);
    for(int i=1; i<=10; i++){
        A[i-1]=n*i;
        printf("%d x %d = %d\n",n,i,A[i-1]);
    }
    printf("Hello world!\n");
    return 0;
}
