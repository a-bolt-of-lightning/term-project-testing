#include<stdio.h>
#include<stdlib.h>
//#include<time.h>

#define ROW 8
#define COLUMN 8
#define BLACK 1
#define WHITE 2

//function prototypes below:

void find_and_print_the_best_move(int const possible_moves_arr[][4], const int possible_moves_counter);

//
int flippedDisk(int const square[ROW][COLUMN], int i, int j, int const player, int const opponent, int x, int y);
//function to set a fixed worth for possible moves
void set_square_worth(const int square[ROW][COLUMN], int const player, int const opponent);
//function(s) to find the possible moves for player 
void possible_moves_eastward(const int opponent, const int player, int i,int j, int square[ROW][COLUMN]);
void possible_moves_westward(const int opponent, const int player, int j,int i, int square[ROW][COLUMN]);
void possible_moves_northward(const int opponent, const int player, int j,int i, int square[ROW][COLUMN]);
void possible_moves_southward(const int opponent, const int player, int j,int i, int square[ROW][COLUMN]);
void possible_moves_northeastward(const int opponent, const int player, int j,int i, int square[ROW][COLUMN]);
void possible_moves_northwestward(const int opponent, const int player, int j,int i, int square[ROW][COLUMN]);
void possible_moves_southeastward(const int opponent, const int player, int j,int i, int square[ROW][COLUMN]);
void possible_moves_southwestward(const int opponent, const int player, int j,int i, int square[ROW][COLUMN]);

int main( int argc, char * argv[] )
{
    int square[8][8];
    int i,j;
    int opponent, player=argv[9][0]-'0';


    //sets the color of player and opponent 
    if(player==BLACK)
        opponent=WHITE;
    
    else if (player==WHITE)
        opponent=BLACK;

    //constructs the board
    for(i=0; i<ROW; i++)
    {
        for(j=0; j<COLUMN; j++)
        {
            square[i][j]=argv[i+1][j]-'0';
        }
    }

    //sends the square to be checked for possible moves 
    for(i=0; i<8; i++)
    {
        for(j=0; j<8; j++)
        {
            if(square[i][j]==player)
            {
                if(square[i][j+1]==opponent) possible_moves_eastward(opponent, player, j+1,i, square);
                if(square[i][j-1]==opponent) possible_moves_westward(opponent, player, j-1, i, square);
                if(square[i-1][j]==opponent) possible_moves_northward(opponent, player, j, i-1, square);
                if(square[i+1][j]==opponent) possible_moves_southward(opponent, player, j, i+1, square);
                if(square[i-1][j+1]==opponent) possible_moves_northeastward(opponent, player, j+1, i-1, square);
                if(square[i-1][j-1]==opponent) possible_moves_northwestward(opponent, player, j-1, i-1, square);
                if(square[i+1][j+1]==opponent) possible_moves_southeastward(opponent, player, j+1, i+1, square);
                if(square[i+1][j-1]==opponent) possible_moves_southwestward(opponent, player, j-1, i+1, square);
            }
        }
    }
    
    /*
    for(i=0; i<ROW; i++)
    {
        for(j=0; j<COLUMN; j++)
        {
            printf("%3d", square[i][j]);
        }
        putchar('\n');
    }
    //printf("%d\n", player);
    */
    set_square_worth(square, player, opponent);
    return 0;
}

void possible_moves_eastward(const int opponent, const int player, int j,int i, int square[ROW][COLUMN])
{
    while(j<ROW && i<COLUMN && i>=0 && j>=0)
    {
        if(square[i][j]==player)
        {
            return;
        }
        
        if(square[i][j]==0 || square[i][j]==-1)
        {
            square[i][j]=-1;
            return;
        }
        j++;
    }
    return;
}   

void possible_moves_westward(const int opponent, const int player, int j,int i, int square[ROW][COLUMN])
{
    while(j<ROW && i<COLUMN && i>=0 && j>=0)
    {
        if(square[i][j]==player)
        {
            return;
        }
        
        if(square[i][j]==0 || square[i][j]==-1)
        {
            square[i][j]=-1;
            return;
        }
        j--;
    }
    return;
}

void possible_moves_northward(const int opponent, const int player, int j,int i, int square[ROW][COLUMN])
{
    while(j<ROW && i<COLUMN && i>=0 && j>=0)
    {
        if(square[i][j]==player)
        {
            return;
        }
        
        if(square[i][j]==0 || square[i][j]==-1)
        {
            square[i][j]=-1;
            return;
        }
        i--;
    }
    return;
}

void possible_moves_southward(const int opponent, const int player, int j,int i, int square[ROW][COLUMN])
{
    while(j<ROW && i<COLUMN && i>=0 && j>=0)
    {
        if(square[i][j]==player)
        {
            return;
        }
        
        if(square[i][j]==0 || square[i][j]==-1)
        {
            square[i][j]=-1;
            return;
        }
        i++;
    }
    return;
}

void possible_moves_northeastward(const int opponent, const int player, int j,int i, int square[ROW][COLUMN])
{
    while(j<ROW && i<COLUMN && i>=0 && j>=0)
    {
        if(square[i][j]==player)
        {
            return;
        }
        
        if(square[i][j]==0 || square[i][j]==-1)
        {
            square[i][j]=-1;
            return;
        }
        j++;
        i--;
    }
    return;
}

void possible_moves_northwestward(const int opponent, const int player, int j,int i, int square[ROW][COLUMN])
{
    while(j<ROW && i<COLUMN && i>=0 && j>=0)
    {
        if(square[i][j]==player)
        {
            return;
        }
        
        if(square[i][j]==0 || square[i][j]==-1)
        {
            square[i][j]=-1;
            return;
        }
        j--;
        i--;
    }
    return;
}

void possible_moves_southeastward(const int opponent, const int player, int j,int i, int square[ROW][COLUMN])
{
    while(j<ROW && i<COLUMN && i>=0 && j>=0)
    {
        if(square[i][j]==player)
        {
            return;
        }
        
        if(square[i][j]==0 || square[i][j]==-1)
        {
            square[i][j]=-1;
            return;
        }
        j++;
        i++;
    }
    return;
}

void possible_moves_southwestward(const int opponent, const int player, int j,int i, int square[ROW][COLUMN])
{
    while(j<ROW && i<COLUMN && i>=0 && j>=0)
    {
        if(square[i][j]==player)
        {
            return;
        }
        
        if(square[i][j]==0 || square[i][j]==-1)
        {
            square[i][j]=-1;
            return;
        }
        i++;
        j--;
    }
    return;
}

void set_square_worth(const int square[ROW][COLUMN], int const player, int const opponent)
{
    int i, j;

    //fixed worth of each square
    int const squareWorth[ROW][COLUMN]= 
    {{99, -8, 8, 6, 6, 8, -8, 99},
    {-8 -24, -4, -3, -3, -4, -24, -8},
    {8, -4, 7, 4, 4, 7, -4, 8},
    {6, -3, 4, 0, 0, 4, -3, 6},
    {6, -3, 4, 0, 0, 4, -3, 6},
    {8, -4, 7, 4, 4, 7, -4, 8},
    {-8 -24, -4, -3, -3, -4, -24, -8},
    {99, -8, 8, 6, 6, 8, -8, 99}};
    
    int possible_moves_counter=0;

    for(i=0; i<ROW; i++)
    {
        for(j=0; j<COLUMN; j++)
        {
            if(square[i][j]==-1)
                possible_moves_counter++;
        }
    }

    int possible_moves_arr[possible_moves_counter][4];
    int k=0;
    for(i=0; i<ROW; i++)
    {
        for(j=0; j<COLUMN; j++)
        {
            if(square[i][j]==-1)
            {
                possible_moves_arr[k][0]=i;
                possible_moves_arr[k][1]=j;
                possible_moves_arr[k][2]=squareWorth[i][j];
                possible_moves_arr[k][3]=0;
                k++;
            }
        }
    }
    
    int max_worth=possible_moves_arr[0][2];
    int x=possible_moves_arr[0][1], y=possible_moves_arr[0][0];
    for(i=0; i<possible_moves_counter; i++)
    {
        if(possible_moves_arr[i][2]>max_worth)
        {
            max_worth=possible_moves_arr[i][2];
            x=possible_moves_arr[i][1];
            y=possible_moves_arr[i][0];
        }    
    }

    //printf("%d %d", x, y);

    for(i=0; i<possible_moves_counter; i++ )
    {
        if(possible_moves_arr[i][2]==max_worth)
        {
            possible_moves_arr[i][3]=
            flippedDisk(square, 0, 1, player, opponent, possible_moves_arr[i][1], possible_moves_arr[i][0])+
            flippedDisk(square, 0, -1, player, opponent, possible_moves_arr[i][1], possible_moves_arr[i][0])+
            flippedDisk(square, 1, 0, player, opponent, possible_moves_arr[i][1], possible_moves_arr[i][0])+
            flippedDisk(square, -1, 0, player, opponent, possible_moves_arr[i][1], possible_moves_arr[i][0])+
            flippedDisk(square, 1, 1, player, opponent, possible_moves_arr[i][1], possible_moves_arr[i][0])+
            flippedDisk(square, -1, 1, player, opponent, possible_moves_arr[i][1], possible_moves_arr[i][0])+
            flippedDisk(square, 1, -1, player, opponent, possible_moves_arr[i][1], possible_moves_arr[i][0])+
            flippedDisk(square, -1, -1, player, opponent, possible_moves_arr[i][1], possible_moves_arr[i][0]);
        }
    }

    //something to find the move with least flips
    find_and_print_the_best_move(possible_moves_arr, possible_moves_counter);
    
    /*
    for(i=0; i<possible_moves_counter; i++)
    {
        printf(" %d, %d, %d, %d\n ", possible_moves_arr[i][0], possible_moves_arr[i][1], possible_moves_arr[i][2], possible_moves_arr[i][3]);
    }
    */
}

int flippedDisk(int const square[ROW][COLUMN], int i, int j, int const player, int const opponent, int x, int y)
{
    int i_counter=i, j_counter=j;
    int disk_counter=0;
    //printf("%d %d \n", x, y);
    x=x+j;
    y=y+i;
    while(y<ROW && y>=0 && x<COLUMN && x>=0)
    {
        //printf("%d inside while %d %d\n", disk_counter, x, y);

        if((square[y][x]!=opponent && square[y][x]!=player))
            
            {
                //printf("%d while cond\n", disk_counter);
                 return 0;
            }   
        
        if(square[y][x]==opponent)
        {
            disk_counter++;
            //printf("opponent %d\n", disk_counter);
        }
            
        if(square[y][x]==player)
        {
            //printf("player %d\n", disk_counter);
            return disk_counter;
        }
            
        x=x+j;
        y=y+i;
    }
    //printf("%d outta while %d %d\n", disk_counter, x, y);
    return 0;
}

void find_and_print_the_best_move(int const possible_moves_arr[][4], const int possible_moves_counter)
{
    int i,x, y, min_flip=64;
    for(i=0; i<possible_moves_counter; i++)
    {
        if(possible_moves_arr[i][3]!=0)
        {
            if(possible_moves_arr[i][3]<min_flip)
            {
                min_flip=possible_moves_arr[i][3];
                x=possible_moves_arr[i][1];
                y=possible_moves_arr[i][0];
            }     
        }
    }

    printf("%d %d", x, y);
}
