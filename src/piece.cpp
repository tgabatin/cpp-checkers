#include "../include/piece.h"

Piece::Piece(const PieceColor& color) : color_(color), isKing_(false) {}

PieceColor Piece::getColor() const
{
    return color_;
}

bool Piece::isKing() const
{
    return isKing_;
}

void Piece::makeKing()
{
    isKing_ = true;
}