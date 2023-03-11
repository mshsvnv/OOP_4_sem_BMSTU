#include <QMessageBox>

#include "bug.h"

void showBugMessage(bugT &curBug) {

    switch(curBug) {
        case NO_MODEL:
            QMessageBox::warning(nullptr, "Предупреждение!", "Модель не была загружена!");
            break;
        case FILE_NAME_LEN:
            QMessageBox::warning(nullptr, "Предупреждение!", "Имя файла превышает допустимую длину!");
            break;
        case INVALID_FILE:
            QMessageBox::warning(nullptr, "Предупреждение!", "Некорректный файл!");
            break;
        case EMPTY_FILE:
            QMessageBox::warning(nullptr, "Предупреждение!", "Пустой файл!");
            break;
        case MEMORY_ERR:
            QMessageBox::warning(nullptr, "Предупреждение!", "Ошибка при выделении памяти!");
            break;
        case POINTS_AMOUNT:
            QMessageBox::warning(nullptr, "Предупреждение!", "Некорректное кол-во точек!");
            break;
        case EDGES_AMOUNT:
            QMessageBox::warning(nullptr, "Предупреждение!", "Некорректное кол-во ребер!");
            break;
        case POINT_ERR:
            QMessageBox::warning(nullptr, "Предупреждение!", "Некорректные данные для точки!");
            break;
        case EDGE_ERR:
            QMessageBox::warning(nullptr, "Предупреждение!", "Некорректные данные для грани!");
            break;
        default:
            break;
    }

    return;
}