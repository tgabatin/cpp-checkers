#ifndef BOARD_H
#define BOARD_H

#include <array>
#include "piece.h"

class Board {
public:
    // Default constructor
    Board();

    // Get a piece at a given location
    const Piece& get_piece(int row, int col) const;

    // Place a piece at a given location
    void place_piece(const Piece& piece, int row, int col);

    // Move a piece from one location to another
    void move_piece(int start_row, int start_col, int end_row, int end_col);

private:
    std::array<std::array<Piece, 8>, 8> board_;
};

#endif // BOARD_H
