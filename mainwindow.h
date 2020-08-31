#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

signals:
    void submitMessage(const QString &text);

private slots:
    void addNewText(const QString &text);
    void on_updatePushButton_clicked();

private:
    Ui::MainWindow *ui;
    QString list;
};
#endif // MAINWINDOW_H
