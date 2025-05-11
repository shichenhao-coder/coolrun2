#ifndef PLAYER_H
#define PLAYER_H

#include <QPixmap>
#include <QPointF>
#include <QKeyEvent>
#include <QWidget>
#include <QPainter>

class Player {
public:
    Player(QWidget *parent);
    void draw(QPainter *painter);
    void updateState();
    void handleKey(QKeyEvent *event);
    QRect rect() const;

private:
    QWidget *parent;
    QPixmap playerImg;
    QPointF pos;
    float velocityY;
    bool isJumping;
    int jumpCount;
};

#endif // PLAYER_H

