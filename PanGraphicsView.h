#ifndef PANGRAPHICSVIEW_H
#define PANGRAPHICSVIEW_H

#include <QGraphicsView>
#include <QMouseEvent>
#include <QCursor>
#include <QScrollBar>

class PanGraphicsView : public QGraphicsView {
    Q_OBJECT
public:
    explicit PanGraphicsView(QWidget *parent = nullptr);

protected:
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;

private:
    bool m_panning;
    QPoint m_lastPos;
};

#endif // PANGRAPHICSVIEW_H
