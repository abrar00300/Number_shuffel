#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
void shufel(int[][4]);
int main()
{
    char name[40],stop,y;
    int a[4][4]={1,15,4,2,13,6,9,8,7,12,14,10,3,5,11,0},b[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,0},space[2],flag=0;
     system("color 0f");
    printf("\t\t\t========---------- WELCOME TO NUMBER JUNGLE GAME --------============\n\n\n");
     for(int i=1;i<120;i++)
                printf("*");
    printf("\n\nENTER PLAYER NAME :- ");
    fgets(name,40,stdin);
    system("cls");
     system("color f4");
    printf("\t\t\t-------    NUMBER JUNGLE    --------\n\n");

    printf("\t\t      RULES OF THIS GAME\n\n1.) You can move only 1 step at a time with the arrow key\n\tMove up    : by up arrow key\n\tMove down  : by down arrow key\n\tMove left  : by left arrow key\n\tMove right : by right arrow key\n");
    printf("\n2.) You can move numbers at an empty position only\n\n3.) For each valid move : your total number of moves will decreases by 1\n\n4.) Wining Situation : Number in a 4*4 matrix should be in order from 1 to 15\n\n\t\tWinning Situation :\n");
    printf("-----------------\n| 1 | 2 | 3 | 4 |\n| 5 | 6 | 7 | 8 |\n| 9 | 10| 11| 12|\n| 13| 14| 15|   |\n-----------------\n");
    printf("\n5.) you van exit the game at any time by pressing 'E' or 'e'\nSo try to win in minimum no of move\n");
    getch();
    int x;
    char choice;
    start:
        system("cls");
     system("color 0c");
     printf("\n\n\t\t\t:: CHOSE DIFFICULTY ::\n\n\n\t\t1. EASY   :(Total Moves - 300 )\n\t\t2. MEDIUM :(Total moves - 200 )\n\t\t3. HARD   :(Total moves - 100 )\n\n\n\n enter your choice:-\n");
     choice=getch();
     if(choice=='1')
        x=301;
     else if(choice=='2')
        x=201;
     else if(choice=='3')
        x=101;
     else
     {
        printf("\n\n\t\t  :) Ivalid Choice :: Now play in Very HARD (Total Moves - 10)!!! :)\n\n---press any key to continue---");
        getch();
            x=11;
     }
    system("cls");
     system("color 0E");
    int g=0;
    char z;
    if(flag!=0)
      shufel(a);
      space[0]=3;
    space[1]=3;
    while(x--&&x!=0)
    {
        flag++;
        int cnt=0;
            for(int i=0;i<4;i++)
            {
                for(int j=0;j<4;j++)
                {
                    if(a[i][j]!=b[i][j])
                        cnt++;
                }
            }
    if(cnt==0)
    {
        system("clr");
        system("color f0");
        g++;
        printf("\n\t\t\n CONGRATULATIONS YOU WON !!!!!\n");
        break;
    }
        printf("\n\tHello :%s",name);
        printf("\tMove reamaing : %d \n\n",x);
        for(int i=1;i<120;i++)
                printf("*");
        printf("\n\n\n\n\n\n\t\t\t\t\t-----------------\n");
        for(int i=0;i<4;i++)
        {
            for(int j=0;j<4;j++)
            {
                if(j==0&&i==0)
                    printf("\t\t\t\t\t");
                if(a[i][j]==0)
                    printf("|   ");
                else if(a[i][j]<10)
                    printf("| %d ",a[i][j]);
                else
                    printf("| %d",a[i][j]);
            }
            printf("|\n\t\t\t\t\t");
        }
        printf("-----------------\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    for(int i=1;i<120;i++)
                printf("*");
    printf("\n");
    int c1,c2=0;
    c1=getch();
    if (c1 == 0xE0)
    {
                c2 = getch();
               switch(c2)
            {
                case 72:
                    {
                        printf("UP Arrow\n");
                        if(space[0]<3)
                        {
                            space[0]++;
                            int i=space[0],j=space[1];
                            int temp=a[i][j];
                            a[i][j]=0;
                            a[i-1][j]=temp;
                        }
                        else
                        {
                            printf("Invalid Move");
                            x++;
                        }
                        break;
                    }
                case 80:
                    {
                            if(space[0]>0)
                            {
                                printf("DOWN Arrow\n");
                            space[0]--;
                            int i=space[0],j=space[1];
                             int temp=a[i][j];
                             a[i][j]=0;
                             a[i+1][j]=temp;
                            }
                        else
                        {
                            printf("Invalid Move");
                            x++;
                        }
                            break;
                    }
                case 75:
                    {
                           if(space[1]<3)
                           {
                                 printf("LEFT Arrow\n");
                             space[1]++;
                            int i=space[0],j=space[1];
                             int temp=a[i][j];
                             a[i][j]=0;
                             a[i][j-1]=temp;
                           }
                        else
                        {
                            printf("Invalid Move");
                            x++;
                        }
                            break;
                    }
                case 77:
                    {
                            printf("RIGHT Arrow\n");
                           if(space[1]>0)
                           {
                                space[1]--;
                            int i=space[0],j=space[1];
                           int temp=a[i][j];
                           a[i][j]=0;
                           a[i][j+1]=temp;
                           }
                        else
                        {
                            printf("Invalid Move");
                            x++;
                        }
                              break;
                    }
                default:
                    {
                        printf("Invalid move\n");
                    }
            }
    }
    else
    {
        if(c1=='e'||c2=='E')
        {
            system("cls");
            g++;
            printf("\n\n\n\t\t ---- THANKS FOR PLAYING :) ------\n\n\n\ngame by Abrar khan :)",name);
                break;
        }
        printf("Invalid move\n");
        x++;
    }
     //  getch();
        system("cls");

    }
    system("color f0");
    if(g==0)
    {
        printf("\t\t\t-------OUT OF MOVES ------\n\n\n\t\t\t:( !!GAME OVER!! :(\n\n\npress y or Y to play again:\npress e or E to exit:\n");
        scanf("%c",&y);
        if(y=='y'||y=='Y')
            goto start;
    }
    return 0;
}
void shufel(int a[][4])
{
     for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            for(int k=0;k<3;k++)
            {
                int temp=a[i][j];
                a[i][j]=a[k][j];
                a[k][j]=temp;
            }
        }
    }
     for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            for(int k=0;k<3;k++)
            {
                int temp=a[i][j];
                a[i][j]=a[i][k];
                a[i][k]=temp;
            }
        }
    }
 for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
               if(a[i][j]==0)
               {
                   int temp=a[3][3];
                   a[3][3]=0;
                   a[i][j]=temp;
               }
        }
    }
}
