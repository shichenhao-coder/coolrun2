#ifndef OBSTACLE_H
#define OBSTACLE_H

#include <QPixmap>
#include <QRect>
#include <QPainter>

class Obstacle {
public:
    Obstacle(int x, int y);
    void draw(QPainter *painter);
    void update();
    QRect rect() const;
    bool isOffScreen() const;

private:
    QPixmap img;
    int x, y;
};

#endif // OBSTACLE_H

