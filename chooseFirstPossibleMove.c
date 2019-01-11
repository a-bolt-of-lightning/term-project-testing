#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 8
#define COLUMN 8
#define BLACK 1
#define WHITE 2


//function prototypes below 

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

    if(player==BLACK)
        opponent=WHITE;
    
    else if (player==WHITE)
        opponent=BLACK;

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
                if(cell[i][j+1]==opponent) possible_moves_eastward(opponent, player, j+1,i, cell);
                if(cell[i][j-1]==opponent) possible_moves_westward(opponent, player, j-1, i, cell);
                if(cell[i-1][j]==opponent) possible_moves_northward(opponent, player, j, i-1, cell);
                if(cell[i+1][j]==opponent) possible_moves_southward(opponent, player, j, i+1, cell);
                if(cell[i-1][j+1]==opponent) possible_moves_northeastward(opponent, player, j+1, i-1, cell);
                if(cell[i-1][j-1]==opponent) possible_moves_northwestward(opponent, player, j-1, i-1, cell);
                if(cell[i+1][j+1]==opponent) possible_moves_southeastward(opponent, player, j+1, i+1, cell);
                if(cell[i+1][j-1]==opponent) possible_moves_southwestward(opponent, player, j-1, i+1, cell);


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
    while(j<ROW && i<COLUMN)
    {
        //printf("en while %d %d\n", j, i);
        if(cell[i][j]==player)
        {
            //printf("en 1st if %d %d\n", j+1, i);
            return;
            
        }
        
        if(cell[i][j]==0 || cell[i][j]==-1)
        {
            
            cell[i][j]=-1;
            return;
        }
        j++;
    }
    return;
}   

void possible_moves_westward(const int opponent, const int player, int j,int i, int cell[ROW][COLUMN])
{
    //printf("en func east %d %d %d\n", j, i, cell[i][j]);
    while(j<ROW && i<COLUMN)
    {
        //printf("en while %d %d\n", j, i);
        if(cell[i][j]==player)
        {
            //printf("en 1st if %d %d\n", j+1, i);
            return;
            
        }
        
        if(cell[i][j]==0 || cell[i][j]==-1)
        {
            
            cell[i][j]=-1;
            return;
        }
        j--;
    }
    return;
}


void possible_moves_northward(const int opponent, const int player, int j,int i, int cell[ROW][COLUMN])
{
    //printf("en func east %d %d %d\n", j, i, cell[i][j]);
    while(j<ROW && i<COLUMN)
    {
        //printf("en while %d %d\n", j, i);
        if(cell[i][j]==player)
        {
            //printf("en 1st if %d %d\n", j+1, i);
            return;
            
        }
        
        if(cell[i][j]==0 || cell[i][j]==-1)
        {
            
            cell[i][j]=-1;
            return;
        }
        i--;
    }
    return;
}

void possible_moves_southward(const int opponent, const int player, int j,int i, int cell[ROW][COLUMN])
{
    //printf("en func east %d %d %d\n", j, i, cell[i][j]);
    while(j<ROW && i<COLUMN)
    {
        //printf("en while %d %d\n", j, i);
        if(cell[i][j]==player)
        {
            //printf("en 1st if %d %d\n", j+1, i);
            return;
            
        }
        
        if(cell[i][j]==0 || cell[i][j]==-1)
        {
            
            cell[i][j]=-1;
            return;
        }
        i++;
    }
    return;
}

void possible_moves_northeastward(const int opponent, const int player, int j,int i, int cell[ROW][COLUMN])
{
    //printf("en func east %d %d %d\n", j, i, cell[i][j]);
    while(j<ROW && i<COLUMN)
    {
        //printf("en while %d %d\n", j, i);
        if(cell[i][j]==player)
        {
            //printf("en 1st if %d %d\n", j+1, i);
            return;
            
        }
        
        if(cell[i][j]==0 || cell[i][j]==-1)
        {
            
            cell[i][j]=-1;
            return;
        }
        j++;
        i--;
    }
    return;
}


void possible_moves_northwestward(const int opponent, const int player, int j,int i, int cell[ROW][COLUMN])
{
    //printf("en func east %d %d %d\n", j, i, cell[i][j]);
    while(j<ROW && i<COLUMN)
    {
        //printf("en while %d %d\n", j, i);
        if(cell[i][j]==player)
        {
            //printf("en 1st if %d %d\n", j+1, i);
            return;
            
        }
        
        if(cell[i][j]==0 || cell[i][j]==-1)
        {
            
            cell[i][j]=-1;
            return;
        }
        j--;
        i--;
    }
    return;
}


void possible_moves_southeastward(const int opponent, const int player, int j,int i, int cell[ROW][COLUMN])
{
    //printf("en func east %d %d %d\n", j, i, cell[i][j]);
    while(j<ROW && i<COLUMN)
    {
        //printf("en while %d %d\n", j, i);
        if(cell[i][j]==player)
        {
            //printf("en 1st if %d %d\n", j+1, i);
            return;
            
        }
        
        if(cell[i][j]==0 || cell[i][j]==-1)
        {
            
            cell[i][j]=-1;
            return;
        }
        j++;
        i++;
    }
    return;
}


void possible_moves_southwestward(const int opponent, const int player, int j,int i, int cell[ROW][COLUMN])
{
    //printf("en func east %d %d %d\n", j, i, cell[i][j]);
    while(j<ROW && i<COLUMN)
    {
        //printf("en while %d %d\n", j, i);
        if(cell[i][j]==player)
        {
            //printf("en 1st if %d %d\n", j+1, i);
            return;
            
        }
        
        if(cell[i][j]==0 || cell[i][j]==-1)
        {
            
            cell[i][j]=-1;
            return;
        }
        i++;
        j--;
    }
    return;
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