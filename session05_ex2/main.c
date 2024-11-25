#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Pham_nhat_tan_session05_ex2\n");
    int x=10,i;
    printf("nhap vao mot so bat ki\n");
    while(1){
        scanf("%d",&i);
        if(i==x){
            printf("ban da nhap dung: %d la so can tim\n",i);
            break;
        }
    }
    printf("Hello world!\n");
    return 0;
}
