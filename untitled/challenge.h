#ifndef CHALLENGE_H
#define CHALLENGE_H

#include <QDialog>

namespace Ui {
class challenge;
}

class challenge : public QDialog
{
    Q_OBJECT

public:
    explicit challenge(QWidget *parent = nullptr);
    ~challenge();

private:
    Ui::challenge *ui;
};

#endif // CHALLENGE_H
