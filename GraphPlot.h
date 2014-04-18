#ifndef GRAPHPLOT_H
#define GRAPHPLOT_H

#include <QPainter>
#include <QWidget>

class GraphPlot : public QWidget
{
    Q_OBJECT

public:
    GraphPlot(QWidget *parent = 0);

protected:
    void paintEvent(QPaintEvent */* event */);

};

#endif // GRAPHPLOT_H
