#include "score.h"

Score::Score() : coins(0), distance(0) {}

void Score::addCoin() {
    coins++;
}

void Score::addDistance() {
    distance++;
}

void Score::draw(QPainter *painter) {
    painter->setPen(Qt::black);
    painter->drawText(10, 20, QString("Distance: %1").arg(distance));
    painter->drawText(10, 40, QString("Coins: %1").arg(coins));
}
