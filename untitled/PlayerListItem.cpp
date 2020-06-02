#include"PlayerListItem.h"
#include<QMouseEvent>
#include<QMenu>
#include<QLayout>
extern MainWindow *mainT;
PlayerListItem::PlayerListItem(QString playerNameInput,int x)
{
    playerName = new QLabel(playerNameInput);
    rank = new QLabel(QString::number(x));
    setStyleSheet("background: #66CC33;"
            " padding: 10px;"
            " border-radius: 5px ;"
            " border-bottom-left-radius: 5px;"
            " color: #fffaea;"
            "max-width: 571px;"
            );
    playerName->setStyleSheet("QLabel { min-width: 375px;}");
    rank->setStyleSheet("QLabel { min-width: 90;}");
    QGridLayout* layout = new QGridLayout();
    layout->addWidget(playerName, 1, 1);
    layout->addWidget(rank, 1, 2);
    layout->setSizeConstraint(QLayout::SetFixedSize);
    setLayout(layout);
}

void PlayerListItem::mousePressEvent(QMouseEvent *event)
{
    if( event->button() == Qt::RightButton )
        {
        QMenu* myMenu = new QMenu();
        QAction *fightAction=new QAction(QIcon(":/test/sword.png"),"Fight");
        myMenu->addAction(fightAction);
        connect(fightAction,&QAction::triggered,this,&PlayerListItem::challenge);// send challenge message
        connect(this,&PlayerListItem::goToGame,mainT,&MainWindow::accessGameSlot);
        myMenu->popup( QCursor::pos() );
        }
}
