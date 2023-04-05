#include "../include/player.h"

Player::Player(const std::string& name, const PieceColor& color) : name_(name), color_(color), score_(0) {}

std::string Player::getName() cost
{
    return name_;
}

PieceColor Player::getColor() const
{
    return color_;
}

void Player::incrementScore()
{
    ++score_;
}

int Player::getScore() const
{
    return score_;
}