#include "MainWindow.h"
#include <QWebEngineView>
#include <QDir>
#include <QUrl>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    webView = new QWebEngineView(this);
    setCentralWidget(webView);
    
    // Загружаем HTML из папки resources
    QString htmlPath = QDir::currentPath() + "/resources/mainpage.html";
    webView->load(QUrl::fromLocalFile(htmlPath));
}

MainWindow::~MainWindow() {}
