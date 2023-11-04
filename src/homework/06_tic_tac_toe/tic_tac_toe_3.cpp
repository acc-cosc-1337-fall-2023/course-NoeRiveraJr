#include "tic_tac_toe_3.h"

bool TicTacToe3::check_column_win()
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

bool TicTacToe3::check_row_win()
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

bool TicTacToe3::check_diagonal_win()
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