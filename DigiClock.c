#include<stdio.h>
#include<conio.h>
void main()
{
    int h=0,m=0,s=0;
    double i;
    system("cls");
    printf("Enter a time format in HH:MM:SS");
    scanf("%d%d%d",&h,&m,&s);
    start:
        for(h;h<24;h++)
        {
            for(m;m<60;m++)
            {
                for(s;s<60;s++)
                {
                    system("cls");
                    printf("\n\n\t\t\t%d:%d:%d",h,m,s);

                    if(h<12)
                    {
                        printf("AM");
                    }
                    else
                    {
                        printf("PM");
                    }
                    printf("\n\n\t\t\tWednesday 30 Sept 2020");
                    for( i=0;i<3619999;i++)
                       i++;
                       i--;
                }
                s=0;
            }
            m=0;
        }
        h=0;
        goto start;
    getch();
}
