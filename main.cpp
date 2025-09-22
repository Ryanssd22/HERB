#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsEllipseItem>
#include <QGraphicsRectItem>
#include "PanGraphicsView.h"

int main(int argc, char **argv) {
    QApplication app(argc, argv);

    QGraphicsScene scene;
    scene.setSceneRect(-2000, -2000, 4000, 4000);

    const int gridSize = 200;
    for (int x = -1000; x <= 1000; x += gridSize) {
        for (int y = -1000; y <= 1000; y += gridSize) {
            auto *rect = scene.addRect(x, y, 120, 80, QPen(Qt::red), QBrush(Qt::lightGray));
            rect->setFlag(QGraphicsItem::ItemIsSelectable);
        }
    }

    auto *center = scene.addEllipse(-40, -40, 80, 80, QPen(Qt::red), QBrush(Qt::red));
    center->setZValue(0);

    PanGraphicsView view;
    view.setScene(&scene);
    view.setAlignment(Qt::AlignLeft | Qt::AlignTop);
    view.resize(900, 600);
    view.show();

    return app.exec();
}
