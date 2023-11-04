//h
#include<iostream>
#include<memory>
#include<vector>
#include "tic_tac_toe.h"

#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

class TicTacToeManager
{
    public:
        void save_game(std::unique_ptr<TicTacToe>& b);
        void get_winner_totals(int& x, int& o, int& t);
    private:
        std::vector<std::unique_ptr<TicTacToe>> games;    
        int x_wins = 0;
        int o_wins = 0;
        int ties = 0;
        void update_winner_count(std::string winner);
};





#endif