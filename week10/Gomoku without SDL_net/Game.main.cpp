/*
 * Game.main.cpp
 *
 *  Created on: 2016. dec. 22.
 *      Author: Judo
 */

#include "MyGame.h"

int main(int argc, char* argv[]) {
 MyGame game;
 GameEngine engine(&game, 720, 720);
 engine.run();
 return 0;
}


