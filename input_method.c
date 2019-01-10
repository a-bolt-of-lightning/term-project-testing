#include<stdio.h>

#define ROW 8
#define COLUMN 8

void possible_moves_eastward(const int opponent, const int player, int i,int j, int cell[ROW][COLUMN]);

int main( int argc, char * argv[] )
{
    int cell[8][8];
    int i,j;
    int opponent, player=argv[9][0]-'0';

    if(player==1)
        opponent=2;
    
    else if (player==2)
        opponent=1;

    //printf("%c",argv[1][2] );
    for(i=0; i<ROW; i++)
    {
        for(j=0; j<COLUMN; j++)
        {
            cell[i][j]=argv[i+1][j]-'0';
        }
    }


    for(i=0; i<8; i++)
    {
        for(j=0; j<8; j++)
        {
            if(cell[i][j]==player)
            {
                possible_moves_eastward(opponent, player, j,i, cell);
            }
            //possible_moves_eastward
        }
    }

    for(i=0; i<ROW; i++)
    {
        for(j=0; j<COLUMN; j++)
        {
            printf("%3d", cell[i][j]);
        }
        putchar('\n');
    }
    printf("%d", player);
    
   ///printf("2 3");

    return 0;
}

void possible_moves_eastward(const int opponent, const int player, int j,int i, int cell[ROW][COLUMN])
{
    printf("en func %d %d %d\n", j, i, cell[i][j]);
    int flag=0;
    while(j<ROW && i<COLUMN)
    {
        printf("en while %d %d\n", j, i);
        if(cell[i][j+1]==player)
        {
            printf("en 1st if %d %d\n", j+1, i);
            break;
            
        }
        if(cell[i][j+1]==opponent)
        {
            j=j+1;
            flag=1;
            printf("en 2 if %d %d\n", j, i);
        }
        if(cell[i][j+1]==0)
        {
            if(flag)
            {
                cell[i][j+1]=-1;
            }
            printf("en 3 if %d %d\n", j, i);
            break;
        }
        return;
    }
}   
