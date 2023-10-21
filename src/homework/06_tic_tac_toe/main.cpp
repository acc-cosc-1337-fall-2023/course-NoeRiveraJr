#include "tic_tac_toe.h"
#include<iostream>
#include<string>

using std::cout; using std::cin; using std::string;

int main() 
{
	TicTacToe game;
	string first_player;
	char user_choice = 'y';
	do
	{
		do
		{
		cout<<"Enter first player(either X or O): ";
		cin>>first_player;
		if(!(first_player == "X" || first_player == "O" || first_player == "x" || first_player == "o"))
		{
			cout<<"Invalid input, please try again!\n";
		}
		} while(!(first_player == "X" || first_player == "O" || first_player == "x" || first_player == "o"));
		
		game.start_game(first_player);

		int position;

		while(!game.game_over())
		{
			cout<<"Enter a position: ";
			cin>>position;
			game.mark_board(position);
			game.display_board();
		}

		cout<<"Player "<<game.get_winner()<<" is the winner!\n\n";
		cout<<"Play again, enter y or Y? ";
		cin>>user_choice;

	}while(user_choice == 'y' || user_choice == 'Y');

	return 0;
}