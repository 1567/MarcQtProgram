#include <QApplication>
#include <QFont>
#include <QGridLayout>
#include <QPushButton>

#include "GraphPlot.h"

class MyWidget : public QWidget
{
public:
    MyWidget(QWidget *parent = 0);
};

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
{
    QPushButton *quit = new QPushButton(tr("Выйти"));
  quit->setFont(QFont("Times", 18, QFont::Bold));
    QPushButton *plot = new QPushButton(tr("Построить"));

    plot->setFont(QFont("Times", 18, QFont::Bold));

 connect(quit, SIGNAL(clicked()), qApp, SLOT(quit()));



    GraphPlot *g = new GraphPlot;


    QGridLayout *gridLayout = new QGridLayout;
    gridLayout->addWidget(quit, 0, 0);
    gridLayout->addWidget(plot, 1,0 );
    gridLayout->addWidget(g, 1, 1, 2, 1);
    gridLayout->setColumnStretch(1, 10);
    setLayout(gridLayout);


}

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MyWidget widget;
    widget.setGeometry(100, 100, 500, 355);
    widget.show();
    return app.exec();
}
