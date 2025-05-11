
#include "player.h"

Player::Player(QWidget *parent)
    : parent(parent), pos(100, 300), velocityY(0), isJumping(false), jumpCount(0) {
    playerImg.load(":/images/player.png");
}

void Player::draw(QPainter *painter) {
    painter->drawPixmap(pos.x(), pos.y(), playerImg);
}

void Player::updateState() {
    velocityY += 0.8;
    pos.ry() += velocityY;
    
    if (pos.y() >= 300) {
        pos.setY(300);
        velocityY = 0;
        isJumping = false;
        jumpCount = 0;
    }
}

void Player::handleKey(QKeyEvent *event) {
    if (event->key() == Qt::Key_Space || event->key() == Qt::Key_Up) {
        if (jumpCount < 2) {
            velocityY = -12;
            isJumping = true;
            jumpCount++;
        }
    }
}

QRect Player::rect() const {
    return QRect(pos.x(), pos.y(), playerImg.width(), playerImg.height());
}
