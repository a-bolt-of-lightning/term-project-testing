#include<stdio.h>

int main( int argc, char * argv[] )
{
    int field[8][8];
    int i,j;
    int player=argv[9][0]-'0';
    //printf("%c",argv[1][2] );
    for(i=0; i<8; i++)
    {
        for(j=0; j<8; j++)
        {
            field[i][j]=argv[i+1][j]-'0';
        }
    }


    for(i=0; i<8; i++)
    {
        for(j=0; j<8; j++)
        {
            printf(" %d", field[i][j]);
        }
        putchar('\n');
    }
    printf("%d", player);
    return 0;
}
