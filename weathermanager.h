#ifndef WEATHERMANAGER_H
#define WEATHERMANAGER_H
#include <QObject>
#include <QtCore>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QJsonDocument>
#include <QJsonObject>
class WeatherManager : public QObject
{
    Q_OBJECT
public:
    WeatherManager();

    void fetchWeather(QString &city);
signals:
    void weatherReady(const QString &info);
public slots:
    void onResult(QNetworkReply* reply);
private:
    QNetworkAccessManager *manager;
};

#endif // WEATHERMANAGER_H
