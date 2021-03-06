#include "include/model/MyView.h"

void MyView::viewMap(float time) {
    if (Keyboard::isKeyPressed(Keyboard::Right)) {
        view.move(0.1 * time, 0);//скроллим карту вправо (см урок, когда мы двигали героя - всё тоже самое)
    }

    if (Keyboard::isKeyPressed(Keyboard::Down)) {
        view.move(0, 0.1 * time);//скроллим карту вниз (см урок, когда мы двигали героя - всё тоже самое)
    }

    if (Keyboard::isKeyPressed(Keyboard::Left)) {
        view.move(-0.1 * time, 0);//скроллим карту влево (см урок, когда мы двигали героя - всё тоже самое)
    }
    if (Keyboard::isKeyPressed(Keyboard::Up)) {
        view.move(0, -0.1 * time);//скроллим карту вправо (см урок, когда мы двигали героя - всё тоже самое)
    }
}

void MyView::getPlayerCoordinateForView(float x, float y) {
    float tempX = x;
    float tempY = y;
    if (x > 700) tempX = 700;
    if (x < 300) tempX = 300;
    if (y > 550) tempY = 550;
    if (y < 200) tempY = 200;

    view.setCenter(tempX, tempY);
}

void MyView::changeView() {
    if (Keyboard::isKeyPressed(Keyboard::LBracket)) {
        view.zoom(0.9994); //масштабируем, уменьшение
    }
    if (Keyboard::isKeyPressed(Keyboard::RBracket)) {
        view.zoom(1.0006f); //масштабируем, приближение
    }

//    if (Keyboard::isKeyPressed(Keyboard::R)) {
//        view.setRotation(90);//сразу же задает поворот камере
//        view.rotate(1);//постепенно поворачивает камеру (отрицательное значение - в обратную сторону)
//    }

    if (Keyboard::isKeyPressed(Keyboard::I)) {
        view.setSize(600, 400);//устанавливает размер камеры (наш исходный)
    }

//    if (Keyboard::isKeyPressed(Keyboard::P)) {
//        view.setSize(540, 380);//например другой размер
//    }
}

