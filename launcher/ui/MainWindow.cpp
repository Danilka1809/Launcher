#include "MainWindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    // Создаём веб-вью
    webView = new QWebEngineView(this);
    
    // Делаем его центральным виджетом (занимает всё окно)
    setCentralWidget(webView);
    
    // Загружаем нашу HTML страницу из ресурсов
    webView->load(QUrl("qrc:///mainpage.html"));
}

MainWindow::~MainWindow()
{
    // Очистка (Qt сам всё удалит)
}
