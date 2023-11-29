#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_manager.h"
#include<iostream>
#include<string>

using std::cout; using std::cin; using std::string;

int main() 
{
	
	TicTacToeManager manager;
	string first_player;
	string threeOrFour;
	char user_choice = 'y';
	do
	{
		std::unique_ptr<TicTacToe> game;
		
		do
		{
			cout<<"1. TicTacToe3\n";
			cout<<"2. TicTacToe4\n";
			cout<<"Please select an option: ";
			cin>>threeOrFour;
			if(!(threeOrFour == "1" || threeOrFour == "2"))
				{
					cout<<"Invalid input, please try again!\n";
				}
		} while (!(threeOrFour == "1" || threeOrFour == "2"));

		if(threeOrFour == "1")
		{
			game = std::make_unique<TicTacToe3>();
		}
		else
		{
			game = std::make_unique<TicTacToe4>();
		}
		do
			{
			cout<<"Enter first player(either X or O): ";
			cin>>first_player;
			if(!(first_player == "X" || first_player == "O" || first_player == "x" || first_player == "o"))
			{
				cout<<"Invalid input, please try again!\n";
			}
		} while(!(first_player == "X" || first_player == "O" || first_player == "x" || first_player == "o"));

		
		game->start_game(first_player);

		int position;

		while(!game->game_over())
		{
			cout<<"Enter a position: ";
			cin>>position;
			game->mark_board(position);
			game->display_board();
		}
		
		cout<<"Player "<<game->get_winner()<<" is the winner!\n\n"; 
		manager.save_game(game);
		int o,x,t;
		manager.get_winner_totals(x, o, t);
		cout<<"X wins: "<<x<<"\n";
		cout<<"O wins: "<<o<<"\n";
		cout<<"Ties: "<<t<<"\n\n";




		cout<<"Play again, enter y or Y? ";
		cin>>user_choice;
		cout<<"\n";


	}while(user_choice == 'y' || user_choice == 'Y');
	
	return 0;
}