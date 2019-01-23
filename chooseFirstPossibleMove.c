#include<stdio.h>
#include<stdlib.h>
//#include<time.h>

#define ROW 8
#define COLUMN 8
#define BLACK 1
#define WHITE 2

//function prototypes below:
//function to set a fixed worth for possible moves
void set_square_worth(const int square[ROW][COLUMN]);
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
    printf("%d\n", player);
    */
    set_square_worth(square);
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

void set_square_worth(const int square[ROW][COLUMN])
{
    int i, j;

    //fixed worth of each square
    int const squareWorth[ROW][COLUMN]= {{99, -8, 8, 6, 6, 8, -8, 99},
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
    /*
    for(i=0; i<possible_moves_counter; i++)
    {
        printf(" %d, %d, %d, %d\n ", possible_moves_arr[i][0], possible_moves_arr[i][1], possible_moves_arr[i][2], possible_moves_arr[i][3]);
    }
    */
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

    printf("%d %d", x, y);

    // void func_to_count_flipped_disks_for_each_max_worth_move()


}