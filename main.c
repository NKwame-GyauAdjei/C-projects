#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main()
{
    int hour,min;
    int sec=00;
    int h,m,s;
    int d=1000;

    printf("\nSet Time(24 hrs): \n");
    scanf("%d%d%d",&h,&m,&s);

    printf("Alarm(24 hrs):\n");
    scanf("%d%d",&hour,&min);
    printf("\n\n%d:%d:%02d\n",hour,min,sec);



    if( h>23 || m>59 || s>59)
        {
        printf("Invalid!!!");
        exit(0);
    }
    while(1)
        {
        s++;
        if(s>59){
            m++;
            s=0;
        }
        if(m>59){
            h++;
            m=0;
        }
        if(h>23){
            h=00;
        }

        printf("\v\v\v\v\v\v\v\t\t\t\t\t\t\t\t\tCLOCK: ");
        printf("%02d:%02d:%02d",h,m,s);
        Sleep(d);
        system("cls");

        printf("\v\v\v\v\v\v\v\v\v\t\t\t\t\t\t\t\t\tALARM : %02d:%02d:%02d\n",hour,min,sec);

        if(h==hour && m==min && s==sec){
            printf("\v\v\v\v\v\t\t\t\t\t\t\t\t\tTIME UP!!!!");
            Beep(610,1000);
        }

    }


    return 0;
}
