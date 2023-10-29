//cpp
#include "tic_tac_toe_manager.h"

void TicTacToeManager::save_game(TicTacToe b)
{
    games.push_back(b);
    update_winner_count(b.get_winner());
}


void TicTacToeManager::update_winner_count(std::string winner)
{
    if(winner == "X")
    {
        x_wins += 1;
    }
    else if(winner == "O")
    {
        o_wins += 1;
    }
    else
    {
        ties += 1;
    }
}

void TicTacToeManager::get_winner_totals(int& x, int& o, int& t)
{
    x = x_wins;
    o = o_wins;
    t = ties;
}