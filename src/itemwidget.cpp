#include <QIcon>
#include "itemwidget.h"

ItemWidget::ItemWidget(const QString &icon, QWidget *parent) :
    QWidget(parent),
    lblIcon(new QLabel()),
    layout(new QVBoxLayout())
{
    lblIcon->setPixmap(QIcon(":/"+icon+".svgz").pixmap(48,48));
    lblIcon->setAlignment(Qt::AlignCenter);
    layout->addWidget(lblIcon);
    setLayout(layout);
}

ItemWidget::~ItemWidget()
{
    delete lblIcon;
    delete layout;
}