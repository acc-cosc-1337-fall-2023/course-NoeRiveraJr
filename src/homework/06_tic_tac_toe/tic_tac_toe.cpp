//cpp
#include "tic_tac_toe.h"

using std::cout, std::string;

bool TicTacToe::game_over()
{
    if(check_column_win() || check_row_win() || check_diagonal_win())
    {
        set_winner();
        return true;
    }
    else if(check_board_full())
    {
        winner = "C";
        return true;
    }
    else
    {
        return false;
    }
}

void TicTacToe::start_game(std::string first_player)
{
    player = first_player;
    clear_board();
}

void TicTacToe::mark_board(int position)
{
    pegs[position-1] = player;
    set_next_player();
}

void TicTacToe::display_board() const
{
    for(long unsigned int i = 0; i < pegs.size(); i+=3)
    {
        cout<<pegs[i]<<"|"<<pegs[i+1]<<"|"<<pegs[i+2]<<"\n";
    }
}

bool TicTacToe::check_board_full()
{
    for(long unsigned int i = 0; i <pegs.size(); i++)
    {
        if(pegs[i]== " ")
        {
            return false;
        }
    }

    return true;
}


//private functions
void TicTacToe::clear_board()
{
    for(auto& peg: pegs)
    {
        peg = " ";
    }
}

void TicTacToe::set_next_player()
{
    if(player == "X")
    {
        player = "O";
    }
    else
    {
        player = "X";
    }
}

void TicTacToe::set_winner()
{
    if(player == "X")
    {
        winner = "O";
    }
    else
    {
        winner = "X";
    }
}

bool TicTacToe::check_column_win()
{
    int countX = 0;
    int countO = 0;
    for(int i = 0; i <=6; i+=3)
    {
        if(pegs[i] == "X")
        {
            countX++;
        }
        else if(pegs[i] == "O")
        {
            countO++;
        }
    }

    if(countX == 3 || countO == 3)
    {
        return true;
    }
    else
    {
        countX = 0;
        countO = 0;
    }

    for(int i = 1; i <= 7;i+=3)
    {
        if(pegs[i] == "X")
        {
            countX++;
        }
        else if(pegs[i] == "O")
        {
            countO++;
        }
    }

    if(countX == 3 || countO == 3)
    {
        return true;
    }
    else
    {
        countX = 0;
        countO = 0;
    }

    for(int i = 2; i <= 8;i+=3)
    {
        if(pegs[i] == "X")
        {
            countX++;
        }
        else if(pegs[i] == "O")
        {
            countO++;
        }
    }

    if(countX == 3 || countO == 3)
    {
        return true;
    }
    else
    {
        return false;
    }

}

bool TicTacToe::check_row_win()
{
    int countX = 0;
    int countO = 0;
    for(int i = 0; i <=2; i++)
    {
        if(pegs[i] == "X")
        {
            countX++;
        }
        else if(pegs[i] == "O")
        {
            countO++;
        }
    }

    if(countX == 3 || countO == 3)
    {
        return true;
    }
    else
    {
        countX = 0;
        countO = 0;
    }

    for(int i = 3; i <= 5;i++)
    {
        if(pegs[i] == "X")
        {
            countX++;
        }
        else if(pegs[i] == "O")
        {
            countO++;
        }
    }

    if(countX == 3 || countO == 3)
    {
        return true;
    }
    else
    {
        countX = 0;
        countO = 0;
    }

    for(int i = 6; i <= 8;i++)
    {
        if(pegs[i] == "X")
        {
            countX++;
        }
        else if(pegs[i] == "O")
        {
            countO++;
        }
    }

    if(countX == 3 || countO == 3)
    {
        return true;
    }
    else
    {
        return false;
    }

}

bool TicTacToe::check_diagonal_win()
{
    int countX = 0;
    int countO = 0;
    for(int i = 0; i <= 8;i+=4)
    {
        if(pegs[i] == "X")
        {
            countX++;
        }
        else if(pegs[i] == "O")
        {
            countO++;
        }
    }

    if(countX == 3 || countO == 3)
    {
        return true;
    }
    else
    {
        countX = 0;
        countO = 0;
    }

    for(int i = 2; i <= 6;i+=2)
    {
        if(pegs[i] == "X")
        {
            countX++;
        }
        else if(pegs[i] == "O")
        {
            countO++;
        }
    }

    if(countX == 3 || countO == 3)
    {
        return true;
    }
    else
    {
        return false;
    }

}