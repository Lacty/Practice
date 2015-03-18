
#pragma once
#include "environment.h"
#include "../Scene/test_enemy.h"
#include "../Scene/test_player.h"
#include "../Scene/test_interface.h"


// XXX: �����͊�{�I�ɕύX���Ȃ�����
//    : �ύX��������ꍇ�͕K���A���I
class cSceneManager {
  cTest_Enemy     m_enemy;
  cTest_Player    m_player;
  cTest_Interface m_interface;

public:
  cSceneManager();

  void update();
  void draw();
  void init();   // TIPS: �g�p�\��
};
