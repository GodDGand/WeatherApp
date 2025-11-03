#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)  : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    managerWeather = new WeatherManager();
    connect(ui->ButtonFind, &QPushButton::clicked, this, [this](){QString city = ui->cityWriter->text();managerWeather->fetchWeather(city);});

    connect(managerWeather, &WeatherManager::weatherReady, this, [this](const QString &info){ui->label->setText(info);});

}

MainWindow::~MainWindow()
{
    delete ui;
}
