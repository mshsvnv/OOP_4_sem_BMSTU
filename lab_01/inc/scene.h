#ifndef __SCENE_H__
#define __SCENE_H__

#include <QGraphicsScene>

#define WIDTH 896
#define HEIGHT 851

struct scene {
    QGraphicsScene *scene;
};

using sceneT = struct scene;

void clearScene(sceneT &curScene);

#endif  // __SCENE_H__