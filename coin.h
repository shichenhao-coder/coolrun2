#ifndef COIN_H
#define COIN_H

#include <QPixmap>
#include <QRect>
#include <QPainter>

class Coin {
public:
    Coin(int x, int y);
    void draw(QPainter *painter);
    void update();
    QRect rect() const;
    bool isOffScreen() const;

private:
    QPixmap img;
    int x, y;
};

#endif // COIN_H

