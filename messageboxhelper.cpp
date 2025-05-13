// Utils/MessageBoxHelper.cpp

#include "messageboxhelper.h"

void MessageBoxHelper::showMessage(QWidget *parent, MessageType type, const QString &title, const QString &text) {
    QMessageBox msgBox(parent);

    msgBox.setWindowTitle(title);
    msgBox.setText(text);

    switch (type) {
    case Info:
        msgBox.setIcon(QMessageBox::Information);
        msgBox.setStandardButtons(QMessageBox::Ok);
        break;
    case Warning:
        msgBox.setIcon(QMessageBox::Warning);
        msgBox.setStandardButtons(QMessageBox::Ok);
        break;
    case Error:
        msgBox.setIcon(QMessageBox::Critical);
        msgBox.setStandardButtons(QMessageBox::Ok);
        break;
    case Question:
        msgBox.setIcon(QMessageBox::Question);
        msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
        break;
    }

    msgBox.setStyleSheet(R"(
        QMessageBox {
            background-color: #d9d9d9;
        }
        QLabel {
            color: #333333;
            font-size: 14px;
        }
        QPushButton {
            background-color: #007BFF;
            color: white;
            border-radius: 5px;
            padding: 5px 10px;
        }
        QPushButton:hover {
            background-color: #0056b3;
        }
    )");

    msgBox.exec();
}
