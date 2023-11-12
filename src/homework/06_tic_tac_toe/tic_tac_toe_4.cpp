#include "tic_tac_toe_4.h"

bool TicTacToe4::check_column_win()
{
    int countX = 0;
    int countO = 0;
    for(int i = 0; i <=12; i+=4)
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

    if(countX == 4 || countO == 4)
    {
        return true;
    }
    else
    {
        countX = 0;
        countO = 0;
    }

    for(int i = 1; i <= 13;i+=4)
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

    if(countX == 4 || countO == 4)
    {
        return true;
    }
    else
    {
        countX = 0;
        countO = 0;
    }

    for(int i = 2; i <= 14;i+=4)
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

    if(countX == 4 || countO == 4)
    {
        return true;
    }
    else
    {
        countX = 0;
        countO = 0;
    }

        for(int i = 3; i <= 15;i+=4)
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

    if(countX == 4 || countO == 4)
    {
        return true;
    }
    else
    {
        return false;
    }

}

bool TicTacToe4::check_row_win()
{
    int countX = 0;
    int countO = 0;
    for(int i = 0; i <=3; i++)
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

    if(countX == 4 || countO == 4)
    {
        return true;
    }
    else
    {
        countX = 0;
        countO = 0;
    }

    for(int i = 4; i <= 7;i++)
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

    if(countX == 4 || countO == 4)
    {
        return true;
    }
    else
    {
        countX = 0;
        countO = 0;
    }

    for(int i = 8; i <= 11;i++)
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

    if(countX == 4 || countO == 4)
    {
        return true;
    }
    else
    {
        countX = 0;
        countO = 0;
    }

    for(int i = 12; i <= 15;i++)
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

    if(countX == 4 || countO == 4)
    {
        return true;
    }
    else
    {
        return false;
    }

}

bool TicTacToe4::check_diagonal_win()
{
    int countX = 0;
    int countO = 0;
    for(int i = 0; i <= 15;i+=5)
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

    if(countX == 4 || countO == 4)
    {
        return true;
    }
    else
    {
        countX = 0;
        countO = 0;
    }

    for(int i = 3; i <= 12;i+=3)
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

    if(countX == 4 || countO == 4)
    {
        return true;
    }
    else
    {
        return false;
    }

}