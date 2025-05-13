// Utils/MessageBoxHelper.h

#ifndef MESSAGEBOXHELPER_H
#define MESSAGEBOXHELPER_H

#include <QMessageBox>

class MessageBoxHelper {
public:
    enum MessageType {
        Info,       // Информационное сообщение
        Warning,    // Предупреждение
        Error,      // Ошибка
        Question    // Вопрос (с кнопками "Да" и "Нет")
    };

    static void showMessage(QWidget *parent, MessageType type, const QString &title, const QString &text);
};

#endif // MESSAGEBOXHELPER_H
