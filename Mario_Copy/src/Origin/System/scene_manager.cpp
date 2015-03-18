
#include "scene_manager.h"


cSceneManager::cSceneManager() {
}


void cSceneManager::update() {
  m_enemy.update();
  m_player.update();
  m_interface.update();
}


void cSceneManager::draw() {
  env::getInstance().begin();

  m_enemy.draw();
  m_player.draw();
  m_interface.draw();

  env::getInstance().end();
}


void cSceneManager::init() {
}
