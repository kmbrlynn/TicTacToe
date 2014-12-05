



// Note that board is a 1D vector, displayed on 3 lines. NOT 2D.

/*
	instructions();

	Human humanPlayer;
	Computer computerPlayer;



	while (play again == yes) 
		game();


	return 0;
*/

main()
{
	// Buy a board, invite two players, and start a game
	Board board;	
	Human human;	
	Computer comp;	
	Game game;		

	// Board supplies instructions
	board.displayInstructions();
	// Human chooses to be x or o
	human.setPiece();
	// Computer chooses to be x or o
	comp.setPiece();

	// Play the game
	game.play();

	return 0;
}

















