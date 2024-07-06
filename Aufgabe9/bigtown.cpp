#include "bigtown.h"
#include <QGraphicsTextItem>
#include <QPolygon>
#include <cmath>

BigTown::BigTown(QString name, int x, int y):
    City(name, x, y) {
}

void BigTown::draw(QGraphicsScene& scene) const {

    qDebug() << QString("Big Town mit dem Namen %1 wird an X: %2 Y: %3 gemalt.")
                    .arg(this->name)
                    .arg(this->x).arg(this->y);
    QPen pen;
    pen.setWidth(3);
    pen.setColor(QColor(50, 255, 255));

    QBrush brush;
    brush.setColor(QColor(50, 255, 255));
    brush.setStyle(Qt::DiagCrossPattern);

    QPolygonF cityShape;

    // Kreis-Shape
    const int radius = 10;
    const int numPoints = 100;
    const double PI = 3.14159265358979323846;

    for (int i = 0; i < numPoints; ++i) {
        double angle = (2 * PI / numPoints) * i;
        double x = radius * cos(angle);
        double y = radius * sin(angle);
        cityShape << QPointF(x, y);
    }

    cityShape.translate(this->x, this->y);

    scene.addPolygon(cityShape, pen, brush);
    QGraphicsTextItem* text = new QGraphicsTextItem;
    text->setPos(this->x - 10, this->y + 5); // Position des Textes
    text->setPlainText(this->name); // Text
    // Kein Smartpointer o.ä. benötigt, da .addItem() Ownership übernimmt
    scene.addItem(text);
}
