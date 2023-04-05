#ifndef PIECE_H
#define PIECE_H

enum class PieceColor 
{
    RED,
    BLACK
};

class Piece 
{
    public:
        Piece(const PieceColor& color);
        PieceColor getColor() const;
        bool isKing() const;
        void makeKing();
    private:
        PieceColor color_;
        bool isKing_;
};

#endif