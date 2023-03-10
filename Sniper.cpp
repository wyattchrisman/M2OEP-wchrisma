//
// Created by Wyatt Chrisman on 2/21/23.
//

#include "Sniper.h"
using namespace std;

Sniper::Sniper() : Player(){
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

    fightStat = -1;
    shotStat = -1;
    passStat = -1;

}

Sniper::Sniper(int rank, string name, int born, string position, int gamesPlayed, int goals,
                 int assists, int points, int penalty, double fightStat, double shotStat, double passStat) :
        Player(rank, name, born, position, gamesPlayed,goals, assists,
               points, penalty, fightStat, shotStat*1.2, passStat){
}

string Sniper::playerSaying() {
    string catchPhrase;
    int i = rand()%10;
    if(0 <= i < 3) {
        catchPhrase = "I only need once shot, and you don't have one!";
    }
    if(3 <= i <= 6) {
        catchPhrase = "You should just give up now!";
    } else {
        catchPhrase = "I don't think this is going to end well for you!";
    }

    return catchPhrase;
}

string Sniper::getPlayerType() {
    return "Sniper";
}