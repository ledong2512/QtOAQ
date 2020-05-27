#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"Game.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    Game *game;
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void resetPlayerStatus(int x);


public slots:
    void accessGameSlot();
private slots:

    void on_loginBtn_clicked();

    void on_nameSortBtn_clicked();

    void on_rankSortBtn_clicked();

private:
    Ui::MainWindow *ui;
    int check =0;
};
#endif // MAINWINDOW_H
