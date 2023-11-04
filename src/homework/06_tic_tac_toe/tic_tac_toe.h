//h
#include<string>
#include<vector>
#include<iostream>
#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

class TicTacToe
{
public:
    TicTacToe(int s) : pegs(s*s, " "){}
    std::vector<std::string> pegs;
    bool game_over();
    void start_game(std::string first_player);
    void mark_board(int position);
    std::string get_player() const{ return player; }
    void display_board() const;
    std::string get_winner() const{ return winner; }
private:
    std::string player;
    std::string winner;
    void clear_board();
    void set_next_player();
    void set_winner();
    bool check_board_full();
    virtual bool check_column_win();
    virtual bool check_row_win();
    virtual bool check_diagonal_win();
};





#endif