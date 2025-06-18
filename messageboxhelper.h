#ifndef MESSAGEBOXHELPER_H
#define MESSAGEBOXHELPER_H

#include <QMessageBox>
#include <QObject>

class MessageBoxHelper : public QObject
{
    Q_OBJECT

public:
    enum MessageType {
        Info,
        Warning,
        Error,
        Question
    };

    static MessageBoxHelper& instance(); // Статический метод для получения единичного экземпляра

    void showMessage(QWidget *parent, MessageType type, const QString &title, const QString &text);

signals:
    void finished();

private:
    static MessageBoxHelper* m_instance; // Статическая переменная для хранения единственного экземпляра
    MessageBoxHelper(QObject *parent = nullptr); // Конструктор приватный
    ~MessageBoxHelper();
};

#endif // MESSAGEBOXHELPER_H
