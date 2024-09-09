#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <vector>

using namespace std;

class game
{
    private:

    vector<vector<int>>currentboard;
    int currentPlayer;
    int moves;
    
    public:

    game();

    int currentmove(int player,pair<int,int>move);

    void printBoard();

    int checkWinner();

    void menu();

};

#endif // GAME_H