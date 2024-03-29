#ifndef GRAPHWIDGET_H
#define GRAPHWIDGET_H

#include <QGraphicsView>

#include "levelmanager.h"

class GraphWidget : public QGraphicsView
{
    Q_OBJECT
public:
    explicit GraphWidget(QWidget *parent = 0);

    void ItemMoved();
    void AddBeam(const QPolygonF& beamPath);
    void RemoveBeam();
    void LoadMainLevel(const Level& main_level);
    void PaintBeam();

protected:
    void keyPressEvent(QKeyEvent *event);
    LevelManager* level_manager_;
    QGraphicsScene* scene;
    Level* main_level_;
    QGraphicsPathItem *beam_item_;
    QLineF *beam_;

    //void timerEvent(QTimerEvent *event);
    //void drawBackground(QPainter *painter, const QRectF &rect);

signals:

public slots:

};

#endif // GRAPHWIDGET_H
