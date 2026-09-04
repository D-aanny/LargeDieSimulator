#ifndef LARGEDIESIMULATOR_MAINWINDOW_H
#define LARGEDIESIMULATOR_MAINWINDOW_H

#include <QMainWindow>
#include <QVBoxLayout>

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);

private:
    void setupUI();
    void setupDiceInputs() const;
    void setupCheckboxes();
    void setupButton() const;

    QVBoxLayout *mainLayout{};
};

#endif //LARGEDIESIMULATOR_MAINWINDOW_H
