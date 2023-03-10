//
// Created by Wyatt Chrisman on 2/21/23.
//

#ifndef M2OEP_WCHRISMA_PLAYMAKER_H
#define M2OEP_WCHRISMA_PLAYMAKER_H

#include "Player.h"

class Playmaker : public Player {
public:
    Playmaker();

    explicit Playmaker(int rank, string name, int born, string position, int gamesPlayed,
                    int goals, int assists, int points, int penalty, double fightStat, double shotStat, double passStat);

    virtual std::string playerSaying() override;

    virtual std::string getPlayerType() override;
};


#endif //M2OEP_WCHRISMA_PLAYMAKER_H
