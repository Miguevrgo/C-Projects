#include "Board.h"

Board::Board() {
	initializeBoard();
}

void Board::initializeBoard() {
	
	sf::Texture whiteSquareTexture;
	sf::Texture blackSquareTexture;

	if (!whiteSquareTexture.loadFromFile("white_square.png")) {
		// Handle when fails (Decide between exceptions or learn try and catch)
	}

	for (unsigned short int i = 0; i < DIM; i++) {
		for (unsigned short int j = 0; j < DIM; j++) {

			// Black Squares
			if ((i + j) % 2 == 0) {
				_board[i][j].sprite.setTexture(blackSquareTexture);
			}

			// White Squares
			if ((i + j) % 2 == 1) {
				_board[i][j].sprite.setTexture(whiteSquareTexture);
			}

			/*_________________________White Pieces___________________________*/
			std::string color = "WHITE";
			
			if (i == 1) {
				_board[i][j].piece = new Pawn(color);
			}


		}
	}
}

Pieces* Board::getPiece(unsigned int x, unsigned int y){
	return _board[x][y].piece;
}
