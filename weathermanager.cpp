#include "weathermanager.h"

WeatherManager::WeatherManager() {
    manager = new QNetworkAccessManager(this);
    connect(manager, &QNetworkAccessManager::finished,this, &WeatherManager::onResult);
}

void WeatherManager::fetchWeather(QString &city)
{
    QString API_KEY="ad57cfaf197e3c2d462a20dbec0ec011";
    QString url = QString("https://api.openweathermap.org/data/2.5/weather?q=%1&appid=%2&units=metric&lang=ru").arg(city, API_KEY);
    QNetworkReply* rep = manager->get(QNetworkRequest(QUrl(url)));
}

void WeatherManager::onResult(QNetworkReply *reply)
{
    if(!reply->error()){
        QByteArray data=reply->readAll();
        QJsonDocument doc=QJsonDocument::fromJson(data);
        QJsonObject obj=doc.object();

        QString city = obj["name"].toString();

        QString weather = obj["weather"].toArray()[0].toObject()["description"].toString();
        double temp = obj["main"].toObject()["temp"].toDouble();
        double temp_feels = obj["main"].toObject()["feels_like"].toDouble();
        QString info = QString("%1: %2, %3°C, %4°C").arg(city, weather).arg(temp).arg(temp_feels);

        emit weatherReady(info);
    }
    else {
        qDebug() << reply->error();
    }
    reply->deleteLater();
}
