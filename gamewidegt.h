#ifndef GAMEWIDGET_H
#define GAMEWIDGET_H

#include <QWidget>
#include <QTimer>
#include <QPixmap>
#include "player.h"
#include "obstacle.h"
#include "coin.h"
#include "score.h"
#include <QList>

class GameWidget : public QWidget {
    Q_OBJECT

public:
    GameWidget(QWidget *parent = nullptr);
    ~GameWidget();

protected:
    void paintEvent(QPaintEvent *) override;
    void keyPressEvent(QKeyEvent *event) override;

private slots:
    void gameLoop();
    void resetGame();

private:
    QTimer *timer;
    QPixmap bgImage;
    int bgX;

    Player *player;
    QList<Obstacle*> obstacles;
    QList<Coin*> coins;
    Score score;
    int frameCount;

    bool isGameOver;
};

#endif // GAMEWIDGET_H
