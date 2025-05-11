#ifndef SCORE_H
#define SCORE_H

#include <QPainter>

class Score {
public:
    Score();
    void addCoin();
    void addDistance();
    void draw(QPainter *painter);

private:
    int coins;
    int distance;
};

#endif // SCORE_H
