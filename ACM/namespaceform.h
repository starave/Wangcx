#ifndef NAMESPACEFORM_H
#define NAMESPACEFORM_H

#include <QWidget>

namespace Ui {
class NameSpaceForm;
}

class NameSpaceForm : public QWidget
{
    Q_OBJECT

public:
    explicit NameSpaceForm(QWidget *parent = 0);
    ~NameSpaceForm();

private:
    Ui::NameSpaceForm *ui;
};

#endif // NAMESPACEFORM_H
