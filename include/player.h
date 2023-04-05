#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include "piece.h"

class Player {
public:
    Player(const std::string& name, const PieceColor& color);
    std::string getName() const;
    PieceColor getColor() const;
    void incrementScore();
    int getScore() const;
private:
    std::string name_;
    PieceColor color_;
    int score_;
};

#endif // PLAYER_H
