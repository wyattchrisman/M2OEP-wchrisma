//
// Created by Wyatt Chrisman on 2/21/23.
//

#include "Player.h"

Player::Player() {
    //set all variables to something that would stand out in the data as not fitting
    rank = -1;
    name = "XXX XXX";
    born = -1;
    position = "XXX XXX";
    gamesPlayed = -1;
    goals = -1;
    assists = -1;
    points = -1;
    penalty = -1;
}

Player::Player(int rank, string name, int born, string position, int gamesPlayed,
               int goals, int assists, int points, int penalty) {

    this->rank = rank;
    this->name = name;
    this->born = born;
    this->position = position;
    this->gamesPlayed = gamesPlayed;
    this->goals = goals;
    this->assists = assists;
    this->points = points;
    this->penalty = penalty;
}

int Player::getRank() const {
    return rank;
}

string Player::getName() const{
return name;
}

int Player::getBorn() const {
    return born;
}

string Player::getPosition() const {
    return position;
}

int Player::getGamesPlayed() const {
    return gamesPlayed;
}

int Player::getGoals() const {
    return goals;
}

int Player::getAssists() const {
    return assists;
}

int Player::getPoints() const {
    return points;
}

int Player::getPenalty() const {
    return penalty;
}

void Player::setRank(int rank) {
    this->rank = rank;
}

void Player::setName(string name) {
    this->name = name;
}

void Player::setBorn(int born) {
    this->born = born;
}

void Player::setPosition(string position) {
    this->position = position;
}

void Player::setGamesPlayed(int gamesPlayed) {
    this->gamesPlayed = gamesPlayed;
}

void Player::setGoals(int goals) {
    this->goals = goals;
}

void Player::setAssists(int assists) {
    this->assists = assists;
}

void Player::setPoints(int points) {
    this->points = points;
}

void Player::setPenalty(int penalty) {
    this->penalty = penalty;
}

/**
     *
     * NEED FIXING
     *
     */
//Player ostream& operator << (ostream& outs, const Player& pla){
//    outs << left << setw(23) << pla.getName();
//    outs << right << setw(5) << pla.getRank();
//    outs << setw(9) << pla.getBorn();
//    outs << setw(10) << pla.getPosition();
//    outs << setw(14) << pla.getGamesPlayed();
//    outs << setw(9) << pla.getGoals();
//    outs << setw(9) << pla.getAssists();
//    outs << setw(9) << pla.getPoints();
//    outs << setw(13) << pla.getPenalty();
//
//    return outs;
//}

bool operator < (const Player& lhs, const Player& rhs) {
    int result = lhs.getName().compare(rhs.getName());
    if(result < 0)
        return true;
    else
        return false;
}

bool operator > (const Player& lhs, const Player& rhs){
    int result = lhs.getName().compare(rhs.getName());
    if(result > 0)
        return true;
    else
        return false;
}

bool operator <= (const Player& lhs, const Player& rhs){
    int result = lhs.getName().compare(rhs.getName());
    if(result <= 0)
        return true;
    else
        return false;
}

bool operator >= (const Player& lhs, const Player& rhs){
    int result = lhs.getName().compare(rhs.getName());
    if(result >= 0)
        return true;
    else
        return false;
}

bool operator == (const Player& lhs, const Player& rhs){
    int result = lhs.getName().compare(rhs.getName());
    if(result == 0)
        return true;
    else
        return false;
}

bool operator != (const Player& lhs, const Player& rhs){
    int result = lhs.getName().compare(rhs.getName());
    if(result != 0)
        return true;
    else
        return false;
}
