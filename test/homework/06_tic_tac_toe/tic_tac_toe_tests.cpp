#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test if the board is full and game is a tie") 
{
	std::unique_ptr<TicTacToe> game = std::make_unique<TicTacToe>(10);
	game->start_game("X");
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(4);
	REQUIRE(game->game_over()==false);
	game->mark_board(5);
	REQUIRE(game->game_over()==false);
	game->mark_board(7);
	REQUIRE(game->game_over()==false);
	game->mark_board(6);
	REQUIRE(game->game_over()==false);
	game->mark_board(9);
	REQUIRE(game->game_over()==false);
	game->mark_board(8);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner()=="C");
}
/*
TEST_CASE("Testing win by first column") 
{
	TicTacToe game;
	game.start_game("X");
	game.mark_board(1);
	REQUIRE(game.game_over()==false);
	game.mark_board(2);
	REQUIRE(game.game_over()==false);
	game.mark_board(4);
	REQUIRE(game.game_over()==false);
	game.mark_board(3);
	REQUIRE(game.game_over()==false);
	game.mark_board(7);
	REQUIRE(game.game_over()==true);
	REQUIRE(game.get_winner()=="X");
}

TEST_CASE("Testing win by second column") 
{
	TicTacToe game;
	game.start_game("X");
	game.mark_board(2);
	REQUIRE(game.game_over()==false);
	game.mark_board(1);
	REQUIRE(game.game_over()==false);
	game.mark_board(5);
	REQUIRE(game.game_over()==false);
	game.mark_board(3);
	REQUIRE(game.game_over()==false);
	game.mark_board(8);
	REQUIRE(game.game_over()==true);
	REQUIRE(game.get_winner()=="X");
}

TEST_CASE("Testing win by third column") 
{
	TicTacToe game;
	game.start_game("X");
	game.mark_board(3);
	REQUIRE(game.game_over()==false);
	game.mark_board(1);
	REQUIRE(game.game_over()==false);
	game.mark_board(6);
	REQUIRE(game.game_over()==false);
	game.mark_board(2);
	REQUIRE(game.game_over()==false);
	game.mark_board(9);
	REQUIRE(game.game_over()==true);
	REQUIRE(game.get_winner()=="X");
}

TEST_CASE("Testing win by first row") 
{
	TicTacToe game;
	game.start_game("X");
	game.mark_board(1);
	REQUIRE(game.game_over()==false);
	game.mark_board(4);
	REQUIRE(game.game_over()==false);
	game.mark_board(2);
	REQUIRE(game.game_over()==false);
	game.mark_board(5);
	REQUIRE(game.game_over()==false);
	game.mark_board(3);
	REQUIRE(game.game_over()==true);
	REQUIRE(game.get_winner()=="X");
}

TEST_CASE("Testing win by second row") 
{
	TicTacToe game;
	game.start_game("X");
	game.mark_board(4);
	REQUIRE(game.game_over()==false);
	game.mark_board(1);
	REQUIRE(game.game_over()==false);
	game.mark_board(5);
	REQUIRE(game.game_over()==false);
	game.mark_board(2);
	REQUIRE(game.game_over()==false);
	game.mark_board(6);
	REQUIRE(game.game_over()==true);
	REQUIRE(game.get_winner()=="X");
}

TEST_CASE("Testing win by third row") 
{
	TicTacToe game;
	game.start_game("X");
	game.mark_board(7);
	REQUIRE(game.game_over()==false);
	game.mark_board(1);
	REQUIRE(game.game_over()==false);
	game.mark_board(8);
	REQUIRE(game.game_over()==false);
	game.mark_board(2);
	REQUIRE(game.game_over()==false);
	game.mark_board(9);
	REQUIRE(game.game_over()==true);
	REQUIRE(game.get_winner()=="X");
}

TEST_CASE("Testing win diagonally from top left") 
{
	TicTacToe game;
	game.start_game("X");
	game.mark_board(1);
	REQUIRE(game.game_over()==false);
	game.mark_board(2);
	REQUIRE(game.game_over()==false);
	game.mark_board(5);
	REQUIRE(game.game_over()==false);
	game.mark_board(3);
	REQUIRE(game.game_over()==false);
	game.mark_board(9);
	REQUIRE(game.game_over()==true);
	REQUIRE(game.get_winner()=="X");
}

TEST_CASE("Testing win diagonally from bottom left") 
{
	TicTacToe game;
	game.start_game("X");
	game.mark_board(7);
	REQUIRE(game.game_over()==false);
	game.mark_board(1);
	REQUIRE(game.game_over()==false);
	game.mark_board(5);
	REQUIRE(game.game_over()==false);
	game.mark_board(2);
	REQUIRE(game.game_over()==false);
	game.mark_board(3);
	REQUIRE(game.game_over()==true);
	REQUIRE(game.get_winner()=="X");
}

TEST_CASE("Testing TicTacToe Manager Class functionality")
{
	TicTacToe game;
	TicTacToeManager manager;
	int x,o,t;

	game.start_game("X");
	game.mark_board(1);
	REQUIRE(game.game_over()==false);
	game.mark_board(4);
	REQUIRE(game.game_over()==false);
	game.mark_board(2);
	REQUIRE(game.game_over()==false);
	game.mark_board(5);
	REQUIRE(game.game_over()==false);
	game.mark_board(3);
	REQUIRE(game.game_over()==true);
	REQUIRE(game.get_winner()=="X");
	manager.save_game(game);

	game.start_game("O");
	game.mark_board(1);
	REQUIRE(game.game_over()==false);
	game.mark_board(4);
	REQUIRE(game.game_over()==false);
	game.mark_board(2);
	REQUIRE(game.game_over()==false);
	game.mark_board(5);
	REQUIRE(game.game_over()==false);
	game.mark_board(3);
	REQUIRE(game.game_over()==true);
	REQUIRE(game.get_winner()=="O");
	manager.save_game(game);

	game.start_game("X");
	game.mark_board(1);
	REQUIRE(game.game_over()==false);
	game.mark_board(2);
	REQUIRE(game.game_over()==false);
	game.mark_board(3);
	REQUIRE(game.game_over()==false);
	game.mark_board(4);
	REQUIRE(game.game_over()==false);
	game.mark_board(5);
	REQUIRE(game.game_over()==false);
	game.mark_board(7);
	REQUIRE(game.game_over()==false);
	game.mark_board(6);
	REQUIRE(game.game_over()==false);
	game.mark_board(9);
	REQUIRE(game.game_over()==false);
	game.mark_board(8);
	REQUIRE(game.game_over()==true);
	REQUIRE(game.get_winner()=="C");

	manager.save_game(game);
	manager.get_winner_totals(x,o,t);
	REQUIRE(x == 1);
	REQUIRE(o == 1);
	REQUIRE(t == 1);

}
*/





