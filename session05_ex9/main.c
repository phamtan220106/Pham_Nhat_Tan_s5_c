#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Pham_nhat_tan_session05_ex9\n");
    int a,b,c,menu=99,max,min;
    float giatri;
    while(menu!=0){
        printf("1 nhap vao a,b,c\n");
        printf("6 thoat\n");
        printf("\n");
        scanf("%d",&menu);
        if(menu==6){
            return 0;
        }else {
            while(menu!=0){
                scanf("%d %d %d",&a,&b,&c);
                printf("menu\n");
                printf("2 tong 3 so\n");
                printf("3 tb cong 3 so\n");
                printf("4 so nho nhat\n");
                printf("5 so lon nhat\n");
                printf("6 thoat\n");
                scanf("%d",&menu);
                printf("\n");
                switch(menu){
                    case 2:
                        giatri=a+b+c;
                        printf("tong 3 so la %.2f\n",giatri);
                        break;
                    case 3:
                        giatri=(a+b+c)/3;
                        printf("tb cong 3 so la %.2f\n",giatri);
                        break;
                    case 4:
                        if(a<b){
                            min=a;
                        }else min=b;
                        if(min>c) min=c;
                        printf("so nho nhat la %d\n",min);
                        break;
                    case 5:
                        if(a>b){
                            max=a;
                        }else max=b;
                        if(min<c) max=c;
                        printf("so lon nhat la %d\n",max);
                        break;
                    case 6:
                        return 0;
                }
                break;
            }
        }
    }
    printf("Hello world!\n");
    return 0;
}
