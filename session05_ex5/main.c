#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Pham_nhat_tan_session05_ex5\n");
    int A[10];
    for(int j=1 ; j<=10 ;j++){
        for(int i=1; i<=9; i++){
            A[i-1]=j*i;
            printf("%d x %d = %2d\t",i,j,A[i-1]);
        }
        printf("\n");
    }
    printf("Hello world!\n");
    return 0;
}
