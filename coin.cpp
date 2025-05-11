
#include "coin.h"

Coin::Coin(int x, int y) : x(x), y(y) {
    img.load(":/images/coin.png");
}

void Coin::draw(QPainter *painter) {
    painter->drawPixmap(x, y, img);
}

void Coin::update() {
    x -= 5;
}

QRect Coin::rect() const {
    return QRect(x, y, img.width(), img.height());
}

bool Coin::isOffScreen() const {
    return x + img.width() < 0;
}
