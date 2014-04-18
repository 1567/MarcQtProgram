#include "GraphPlot.h"

GraphPlot::GraphPlot(QWidget *parent)
    : QWidget(parent)
{
    setPalette(QPalette(QColor(250, 250, 200)));
    setAutoFillBackground(true);
}

void GraphPlot::paintEvent(QPaintEvent *)
{
    QPainter pa(this);
    pa.setPen(Qt::NoPen);
    pa.setBrush(Qt::blue);
    pa.drawEllipse(width() / 2-50,height() / 2 - 20,20,20);

}
