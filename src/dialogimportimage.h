#ifndef DIALOGIMPORTIMAGE_H
#define DIALOGIMPORTIMAGE_H

#include <QDialog>
#include <QGraphicsPixmapItem>

#include "tools/QGraphicsImportItem.h"

namespace Ui {
class DialogImportImage;
}

class DialogImportImage : public QDialog
{
    Q_OBJECT
    
public:
    explicit DialogImportImage(QString n_filepath, QWidget *parent = 0);
    ~DialogImportImage();

    QImage image();
    
private slots:
    void on_pushZoomIn_clicked();

    void on_pushZoomOut_clicked();

    void image_clicked(QPointF pos, bool pressed);

private:
    Ui::DialogImportImage *ui;

    qreal m_scale;
    QString m_filepath;
    QGraphicsScene *scene;
    QGraphicsImportItem * m_pixmap;

};

#endif // DIALOGIMPORTIMAGE_H
