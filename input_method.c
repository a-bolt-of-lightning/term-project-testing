#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 8
#define COLUMN 8

int randomMove(const int cell[ROW][COLUMN]);
void possible_moves_eastward(const int opponent, const int player, int i,int j, int cell[ROW][COLUMN]);
void possible_moves_westward(const int opponent, const int player, int j,int i, int cell[ROW][COLUMN]);
void possible_moves_northward(const int opponent, const int player, int j,int i, int cell[ROW][COLUMN]);
void possible_moves_southward(const int opponent, const int player, int j,int i, int cell[ROW][COLUMN]);
void possible_moves_northeastward(const int opponent, const int player, int j,int i, int cell[ROW][COLUMN]);
void possible_moves_northwestward(const int opponent, const int player, int j,int i, int cell[ROW][COLUMN]);
void possible_moves_southeastward(const int opponent, const int player, int j,int i, int cell[ROW][COLUMN]);
void possible_moves_southwestward(const int opponent, const int player, int j,int i, int cell[ROW][COLUMN]);

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
                possible_moves_westward(opponent, player, j, i, cell);
                possible_moves_northward(opponent, player, j, i, cell);
                possible_moves_southward(opponent, player, j, i, cell);
                possible_moves_northeastward(opponent, player, j, i, cell);
                possible_moves_northwestward(opponent, player, j, i, cell);
                possible_moves_southeastward(opponent, player, j, i, cell);
                possible_moves_southwestward(opponent, player, j, i, cell);


            }
        }
    }

    randomMove(cell);
    
    for(i=0; i<ROW; i++)
    {
        for(j=0; j<COLUMN; j++)
        {
            printf("%3d", cell[i][j]);
        }
        putchar('\n');
    }
    printf("%d", player);

    return 0;
}

void possible_moves_eastward(const int opponent, const int player, int j,int i, int cell[ROW][COLUMN])
{
    //printf("en func east %d %d %d\n", j, i, cell[i][j]);
    int flag=0;
    while(j<ROW && i<COLUMN)
    {
        //printf("en while %d %d\n", j, i);
        if(cell[i][j+1]==player)
        {
            //printf("en 1st if %d %d\n", j+1, i);
            break;
            
        }
        if(cell[i][j+1]==opponent)
        {
            j=j+1;
            flag=1;
            //printf("en 2 if %d %d\n", j, i);
        }
        if(cell[i][j+1]==0 || cell[i][j+1]==-1)
        {
            if(flag)
            {
                cell[i][j+1]=-1;
            }
            ///printf("en 3 if %d %d\n", j, i);
            break;
        }
        return;
    }
}   

void possible_moves_westward(const int opponent, const int player, int j,int i, int cell[ROW][COLUMN])
{
    //printf("en func west%d %d %d\n", j, i, cell[i][j]);
    int flag=0;
    while(j<ROW && i<COLUMN)
    {
        //printf("en while %d %d\n", j, i);
        if(cell[i][j-1]==player)
        {
            //printf("en 1st if %d %d\n", j-1, i);
            break;
            
        }
        if(cell[i][j-1]==opponent)
        {
            j=j-1;
            flag=1;
            //printf("en 2 if %d %d\n", j, i);
        }
        if(cell[i][j-1]==0 || cell[i][j+1]==-1)
        {
            if(flag)
            {
                cell[i][j-1]=-1;
            }
            //printf("en 3 if %d %d\n", j, i);
            break;
        }
        return;
    }
}


void possible_moves_northward(const int opponent, const int player, int j,int i, int cell[ROW][COLUMN])
{
        //printf("en func north%d %d %d\n", j, i, cell[i][j]);
    int flag=0;
    while(j<ROW && i<COLUMN)
    {
        //printf("en while %d %d\n", j, i);
        if(cell[i-1][j]==player)
        {
            //printf("en 1st if %d %d\n", j, i-1);
            break;
            
        }
        if(cell[i-1][j]==opponent)
        {
            i=i-1;
            flag=1;
            //printf("en 2 if %d %d\n", j, i);
        }
        if(cell[i-1][j]==0 || cell[i][j+1]==-1)
        {
            if(flag)
            {
                cell[i-1][j]=-1;
            }
            //printf("en 3 if %d %d\n", j, i);
            break;
        }
        return;
    }
}

void possible_moves_southward(const int opponent, const int player, int j,int i, int cell[ROW][COLUMN])
{
        //printf("en func south%d %d %d\n", j, i, cell[i][j]);
    int flag=0;
    while(j<ROW && i<COLUMN)
    {
        //printf("en while %d %d\n", j, i);
        if(cell[i+1][j]==player)
        {
            //printf("en 1st if %d %d\n", j, i+1);
            break;
            
        }
        if(cell[i+1][j]==opponent)
        {
            i=i+1;
            flag=1;
            //printf("en 2 if %d %d\n", j, i);
        }
        if(cell[i+1][j]==0 || cell[i][j+1]==-1)
        {
            if(flag)
            {
                cell[i+1][j]=-1;
            }
            //printf("en 3 if %d %d\n", j, i);
            break;
        }
        return;
    }
}

void possible_moves_northeastward(const int opponent, const int player, int j,int i, int cell[ROW][COLUMN])
{
    //printf("en func south%d %d %d\n", j, i, cell[i][j]);
    int flag=0;
    while(j<ROW && i<COLUMN)
    {
        //printf("en while %d %d\n", j, i);
        if(cell[i-1][j+1]==player)
        {
            //printf("en 1st if %d %d\n", j+1, i-1);
            break;
            
        }
        if(cell[i-1][j+1]==opponent)
        {
            i=i-1;
            j=j+1;
            flag=1;
            //printf("en 2 if %d %d\n", j, i);
        }
        if(cell[i-1][j+1]==0 || cell[i][j+1]==-1)
        {
            if(flag)
            {
                cell[i-1][j+1]=-1;
            }
            //printf("en 3 if %d %d\n", j, i);
            break;
        }
        return;
    }  
}


void possible_moves_northwestward(const int opponent, const int player, int j,int i, int cell[ROW][COLUMN])
{
    //printf("en func south%d %d %d\n", j, i, cell[i][j]);
    int flag=0;
    while(j<ROW && i<COLUMN)
    {
        //printf("en while %d %d\n", j, i);
        if(cell[i-1][j-1]==player)
        {
            //printf("en 1st if %d %d\n", j-1, i-1);
            break;
            
        }
        if(cell[i-1][j-1]==opponent)
        {
            i=i-1;
            j=j-1;
            flag=1;
            //printf("en 2 if %d %d\n", j, i);
        }
        if(cell[i-1][j-1]==0 || cell[i][j+1]==-1)
        {
            if(flag)
            {
                cell[i-1][j-1]=-1;
            }
            //printf("en 3 if %d %d\n", j, i);
            break;
        }
        return;
    }  
}


void possible_moves_southeastward(const int opponent, const int player, int j,int i, int cell[ROW][COLUMN])
{
    //printf("en func south%d %d %d\n", j, i, cell[i][j]);
    int flag=0;
    while(j<ROW && i<COLUMN)
    {
        //printf("en while %d %d\n", j, i);
        if(cell[i+1][j+1]==player)
        {
            //printf("en 1st if %d %d\n", j+1, i+1);
            break;
            
        }
        if(cell[i+1][j+1]==opponent)
        {
            i=i+1;
            j=j+1;
            flag=1;
            //printf("en 2 if %d %d\n", j, i);
        }
        if(cell[i+1][j+1]==0 || cell[i][j+1]==-1)
        {
            if(flag)
            {
                cell[i+1][j+1]=-1;
            }
            //printf("en 3 if %d %d\n", j, i);
            break;
        }
        return;
    }   
}


void possible_moves_southwestward(const int opponent, const int player, int j,int i, int cell[ROW][COLUMN])
{
    //printf("en func south%d %d %d\n", j, i, cell[i][j]);
    int flag=0;
    while(j<ROW && i<COLUMN)
    {
        //printf("en while %d %d\n", j, i);
        if(cell[i+1][j-1]==player)
        {
            //printf("en 1st if %d %d\n", j-1, i+1);
            break;
            
        }
        if(cell[i+1][j-1]==opponent)
        {
            i=i+1;
            j=j-1;
            flag=1;
            //printf("en 2 if %d %d\n", j, i);
        }
        if(cell[i+1][j-1]==0 || cell[i][j+1]==-1)
        {
            if(flag)
            {
                cell[i+1][j-1]=-1;
            }
            //printf("en 3 if %d %d\n", j, i);
            break;
        }
        return;
    }
}

int randomMove(const int cell[ROW][COLUMN])
{
    int i, j, x, y;
    
    for(i=0; i<ROW; i++)
    {
        for(j=0; j<COLUMN; j++)
        {
            if(cell[i][j]==-1)
            {
                printf("%d %d", j, i);
                return 0;
            }
        }
    }
}