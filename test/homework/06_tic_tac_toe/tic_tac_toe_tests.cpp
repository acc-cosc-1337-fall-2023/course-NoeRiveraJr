#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test if the board is full and game is a tie for TicTacToe3") 
{
	std::unique_ptr<TicTacToe> game = std::make_unique<TicTacToe3>();
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

TEST_CASE("Testing win by first column for TicTacToe3") 
{
	std::unique_ptr<TicTacToe> game = std::make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(4);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(7);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner()=="X");
}

TEST_CASE("Testing win by second column for TicTacToe3") 
{
	std::unique_ptr<TicTacToe> game = std::make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(5);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(8);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner()=="X");
}

TEST_CASE("Testing win by third column for TicTacToe3") 
{
	std::unique_ptr<TicTacToe> game = std::make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(6);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(9);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner()=="X");
}

TEST_CASE("Testing win by first row for TicTacToe3") 
{
	std::unique_ptr<TicTacToe> game = std::make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(4);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(5);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner()=="X");
}

TEST_CASE("Testing win by second row for TicTacToe3") 
{
	std::unique_ptr<TicTacToe> game = std::make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(4);
	REQUIRE(game->game_over()==false);
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(5);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(6);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner()=="X");
}

TEST_CASE("Testing win by third row for TicTacToe3") 
{
	std::unique_ptr<TicTacToe> game = std::make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(7);
	REQUIRE(game->game_over()==false);
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(8);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(9);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner()=="X");
}

TEST_CASE("Testing win diagonally from top left for TicTacToe3") 
{
	std::unique_ptr<TicTacToe> game = std::make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(5);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(9);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner()=="X");
}

TEST_CASE("Testing win diagonally from bottom left for TicTacToe3") 
{
	std::unique_ptr<TicTacToe> game = std::make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(7);
	REQUIRE(game->game_over()==false);
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(5);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner()=="X");
}

TEST_CASE("Testing TicTacToe Manager Class functionality for TicTacToe3")
{
	TicTacToeManager manager;
	std::unique_ptr<TicTacToe> game1 = std::make_unique<TicTacToe3>();
	std::unique_ptr<TicTacToe> game2 = std::make_unique<TicTacToe3>();
	std::unique_ptr<TicTacToe> game3 = std::make_unique<TicTacToe3>();
	int x,o,t;

	game1->start_game("X");
	game1->mark_board(1);
	REQUIRE(game1->game_over()==false);
	game1->mark_board(4);
	REQUIRE(game1->game_over()==false);
	game1->mark_board(2);
	REQUIRE(game1->game_over()==false);
	game1->mark_board(5);
	REQUIRE(game1->game_over()==false);
	game1->mark_board(3);
	REQUIRE(game1->game_over()==true);
	REQUIRE(game1->get_winner()=="X");
	manager.save_game(game1);

	game2->start_game("O");
	game2->mark_board(1);
	REQUIRE(game2->game_over()==false);
	game2->mark_board(4);
	REQUIRE(game2->game_over()==false);
	game2->mark_board(2);
	REQUIRE(game2->game_over()==false);
	game2->mark_board(5);
	REQUIRE(game2->game_over()==false);
	game2->mark_board(3);
	REQUIRE(game2->game_over()==true);
	REQUIRE(game2->get_winner()=="O");
	manager.save_game(game2);

	game3->start_game("X");
	game3->mark_board(1);
	REQUIRE(game3->game_over()==false);
	game3->mark_board(2);
	REQUIRE(game3->game_over()==false);
	game3->mark_board(3);
	REQUIRE(game3->game_over()==false);
	game3->mark_board(4);
	REQUIRE(game3->game_over()==false);
	game3->mark_board(5);
	REQUIRE(game3->game_over()==false);
	game3->mark_board(7);
	REQUIRE(game3->game_over()==false);
	game3->mark_board(6);
	REQUIRE(game3->game_over()==false);
	game3->mark_board(9);
	REQUIRE(game3->game_over()==false);
	game3->mark_board(8);
	REQUIRE(game3->game_over()==true);
	REQUIRE(game3->get_winner()=="C");

	manager.save_game(game3);
	manager.get_winner_totals(x,o,t);
	REQUIRE(x == 1);
	REQUIRE(o == 1);
	REQUIRE(t == 1);
}



//START OF TICTACTOE4 Test Cases



TEST_CASE("Test if the board is full and game is a tie for TicTacToe4") 
{
	std::unique_ptr<TicTacToe> game = std::make_unique<TicTacToe4>();
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
	REQUIRE(game->game_over()==false);
	game->mark_board(10);
	REQUIRE(game->game_over()==false);
	game->mark_board(11);
	REQUIRE(game->game_over()==false);
	game->mark_board(12);
	REQUIRE(game->game_over()==false);
	game->mark_board(13);
	REQUIRE(game->game_over()==false);
	game->mark_board(14);
	REQUIRE(game->game_over()==false);
	game->mark_board(15);
	REQUIRE(game->game_over()==false);
	game->mark_board(16);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner()=="C");
}

TEST_CASE("Testing win by first column for TicTacToe4") 
{
	std::unique_ptr<TicTacToe> game = std::make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(5);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(9);
	REQUIRE(game->game_over()==false);
	game->mark_board(4);
	REQUIRE(game->game_over()==false);
	game->mark_board(13);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner()=="X");
}

TEST_CASE("Testing win by second column for TicTacToe4") 
{
	std::unique_ptr<TicTacToe> game = std::make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(6);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(10);
	REQUIRE(game->game_over()==false);
	game->mark_board(4);
	REQUIRE(game->game_over()==false);
	game->mark_board(14);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner()=="X");
}

TEST_CASE("Testing win by third column for TicTacToe4") 
{
	std::unique_ptr<TicTacToe> game = std::make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(7);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(11);
	REQUIRE(game->game_over()==false);
	game->mark_board(4);
	REQUIRE(game->game_over()==false);
	game->mark_board(15);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner()=="X");
}

TEST_CASE("Testing win by fourth column for TicTacToe4") 
{
	std::unique_ptr<TicTacToe> game = std::make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(4);
	REQUIRE(game->game_over()==false);
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(8);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(12);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(16);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner()=="X");
}

TEST_CASE("Testing win by first row for TicTacToe4") 
{
	std::unique_ptr<TicTacToe> game = std::make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(4);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(5);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(7);
	REQUIRE(game->game_over()==false);
	game->mark_board(4);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner()=="X");
}

TEST_CASE("Testing win by second row for TicTacToe4") 
{
	std::unique_ptr<TicTacToe> game = std::make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(5);
	REQUIRE(game->game_over()==false);
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(6);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(7);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(8);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner()=="X");
}

TEST_CASE("Testing win by third row for TicTacToe4") 
{
	std::unique_ptr<TicTacToe> game = std::make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(9);
	REQUIRE(game->game_over()==false);
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(10);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(11);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(12);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner()=="X");
}

TEST_CASE("Testing win by fourth row for TicTacToe4") 
{
	std::unique_ptr<TicTacToe> game = std::make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(13);
	REQUIRE(game->game_over()==false);
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(14);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(15);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(16);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner()=="X");
}

TEST_CASE("Testing win diagonally from top left for TicTacToe4") 
{
	std::unique_ptr<TicTacToe> game = std::make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(6);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(11);
	REQUIRE(game->game_over()==false);
	game->mark_board(9);
	REQUIRE(game->game_over()==false);
	game->mark_board(16);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner()=="X");
}

TEST_CASE("Testing win diagonally from bottom left for TicTacToe4") 
{
	std::unique_ptr<TicTacToe> game = std::make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(13);
	REQUIRE(game->game_over()==false);
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(10);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(7);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(4);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner()=="X");
}

TEST_CASE("Testing TicTacToe Manager Class functionality for TicTacToe4")
{
	TicTacToeManager manager;
	std::unique_ptr<TicTacToe> game1 = std::make_unique<TicTacToe4>();
	std::unique_ptr<TicTacToe> game2 = std::make_unique<TicTacToe4>();
	std::unique_ptr<TicTacToe> game3 = std::make_unique<TicTacToe4>();
	int x,o,t;

	game1->start_game("X");
	game1->mark_board(1);
	REQUIRE(game1->game_over()==false);
	game1->mark_board(5);
	REQUIRE(game1->game_over()==false);
	game1->mark_board(2);
	REQUIRE(game1->game_over()==false);
	game1->mark_board(6);
	REQUIRE(game1->game_over()==false);
	game1->mark_board(3);
	REQUIRE(game1->game_over()==false);
	game1->mark_board(7);
	REQUIRE(game1->game_over()==false);
	game1->mark_board(4);
	REQUIRE(game1->game_over()==true);
	REQUIRE(game1->get_winner()=="X");
	manager.save_game(game1);

	game2->start_game("O");
	game2->mark_board(1);
	REQUIRE(game2->game_over()==false);
	game2->mark_board(5);
	REQUIRE(game2->game_over()==false);
	game2->mark_board(2);
	REQUIRE(game2->game_over()==false);
	game2->mark_board(6);
	REQUIRE(game2->game_over()==false);
	game2->mark_board(3);
	REQUIRE(game2->game_over()==false);
	game2->mark_board(7);
	REQUIRE(game2->game_over()==false);
	game2->mark_board(4);
	REQUIRE(game2->game_over()==true);
	REQUIRE(game2->get_winner()=="O");
	manager.save_game(game2);

	game3->start_game("X");
	game3->mark_board(1);
	REQUIRE(game3->game_over()==false);
	game3->mark_board(2);
	REQUIRE(game3->game_over()==false);
	game3->mark_board(3);
	REQUIRE(game3->game_over()==false);
	game3->mark_board(4);
	REQUIRE(game3->game_over()==false);
	game3->mark_board(5);
	REQUIRE(game3->game_over()==false);
	game3->mark_board(7);
	REQUIRE(game3->game_over()==false);
	game3->mark_board(6);
	REQUIRE(game3->game_over()==false);
	game3->mark_board(9);
	REQUIRE(game3->game_over()==false);
	game3->mark_board(8);
	REQUIRE(game3->game_over()==false);
	game3->mark_board(10);
	REQUIRE(game3->game_over()==false);
	game3->mark_board(11);
	REQUIRE(game3->game_over()==false);
	game3->mark_board(12);
	REQUIRE(game3->game_over()==false);
	game3->mark_board(13);
	REQUIRE(game3->game_over()==false);
	game3->mark_board(14);
	REQUIRE(game3->game_over()==false);
	game3->mark_board(15);
	REQUIRE(game3->game_over()==false);
	game3->mark_board(16);
	REQUIRE(game3->game_over()==true);
	REQUIRE(game3->get_winner()=="C");

	manager.save_game(game3);
	manager.get_winner_totals(x,o,t);
	REQUIRE(x == 1);
	REQUIRE(o == 1);
	REQUIRE(t == 1);
}

