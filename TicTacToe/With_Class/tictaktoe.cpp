#include"tictaktoe.h"

game::game()
{
    for(int i=0;i<3;i++)
    {
        vector<int>s;
        for(int j=0;j<3;j++)
        {
            s.push_back(4);
        }
        currentboard.push_back(s);
    }
    currentPlayer = 0;
    moves = 0;
}

int game::currentmove(int player, pair<int, int> move)
{
    if (currentboard[move.first][move.second] == 4)
    {
        currentboard[move.first][move.second] = player;
    }
    else
    {
        cout<<"Invalid move!! Block already occupied."<<endl;
        return -1;
    }
    printBoard();
    return 0;
}

void game::printBoard()
{
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++)
        {
            if (currentboard[i][j] == 4)
                cout << "- ";
            else if (currentboard[i][j] == 0)
                cout << "X ";
            else
                cout << "O ";
        }
        cout << endl;
    }
}

int game::checkWinner() 
{
    
    for (int i = 0; i < 3; i++) 
    {
        if (currentboard[i][0] != 4 && currentboard[i][0] == currentboard[i][1] && currentboard[i][1] == currentboard[i][2])
            return currentboard[i][0];
        if (currentboard[0][i] != 4 && currentboard[0][i] == currentboard[1][i] && currentboard[1][i] == currentboard[2][i])
            return currentboard[0][i];
    }
    
    if (currentboard[0][0] != 4 && currentboard[0][0] == currentboard[1][1] && currentboard[1][1] == currentboard[2][2])
        return currentboard[0][0];
    if (currentboard[0][2] != 4 && currentboard[0][2] == currentboard[1][1] && currentboard[1][1] ==currentboard[2][0])
        return currentboard[0][2];
    
    return -1;
}

void game::menu()
{    
    while (true) 
    {
        cout << "Player " << (currentPlayer + 1) << "'s move (enter row and column): \n";
        int row, col;
        cin >> row >> col;
        if(row>2||row<0||col>2||col<0)
        {
            cout<<"Error!! Invlaid col or row number ."<<endl;
            continue;
        }
        int valid=currentmove(currentPlayer, {row, col});
        if(valid==-1)
        {
            continue;
        }
        moves++;

        int winner = checkWinner();
        if (winner != -1) 
        {
            cout << "Player " << (winner + 1) << " wins!" << endl;
            break;
        }
        if (moves == 9) 
        {
            cout << "It's a draw!" << endl;
            break;
        }
        currentPlayer = 1 - currentPlayer;
    }
}