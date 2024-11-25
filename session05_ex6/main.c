#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Pham_nhat_tan_session05_ex6\n");
    int a,b,menu=0;
    float giatri;
    printf("nhap gia tri cua a va b\n");
    scanf("%d %d",&a,&b);
    while(menu*0==0){
        printf("1 tong\n");
        printf("2 hieu\n");
        printf("3 tich\n");
        printf("4 thuong\n");
        printf("5 menu\n");
        printf("nhap lua chon: \n");
        scanf("%d",&menu);
        switch(menu){
            case 1:
            giatri=a+b;
            printf("tong %d va %d la %d:\n",a,b,giatri);
            break;
            case 2:
            giatri=a-b;
            printf("hieu %d va %d la %d:\n",a,b,giatri);
            break;
            case 3:
            giatri=a*b;
            printf("tich %d va %d la %d:\n",a,b,giatri);
            break;
            case 4:
            if(b==0){
                printf("ko hop le!");
            }else{
                giatri=(float)a/b;
                printf("thuong %f va %d la %.2f:\n",a,b,giatri);
                break;
                }
            case 5:
            return 0;
        }
    };
    printf("Hello world!\n");
    return 0;
}
