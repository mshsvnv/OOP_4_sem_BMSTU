#include "QMessageBox"

void showProgInfo(void) {
    QMessageBox::about(nullptr, "О программе", "3D viewer для поворота, масштабирования и перемещения каркасных моделей");
}

void showAuthorInfo(void) {
    QMessageBox::about(nullptr, "Об авторе", "Савинова Мария ИУ7-41Б");
}

void showInputInfo(void) {
    QMessageBox::about(nullptr, "О входных данных", "1. Кол-во ребер\n2. Связи между точками\n3. Кол-во точек\n4. Координаты x, y, z");
}

void showKeyInfo(void) {
    QMessageBox::about(nullptr, "О ключевой точке", "Точка, относительно которой производится поворот и масштабирование");
}
