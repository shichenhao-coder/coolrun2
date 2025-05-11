#include "obstacle.h"

Obstacle::Obstacle(int x, int y) : x(x), y(y) {
    img.load(":/images/obstacle.png");
}

void Obstacle::draw(QPainter *painter) {
    painter->drawPixmap(x, y, img);
}

void Obstacle::update() {
    x -= 5;
}

QRect Obstacle::rect() const {
    return QRect(x, y, img.width(), img.height());
}

bool Obstacle::isOffScreen() const {
    return x + img.width() < 0;
}
