
#pragma once
#include "../common.h"
#include "../Object/object.h"


// TIPS: ����m�F�@�G
//     : ���R�ɕύX���đ��v
class cTest_Enemy {
  cObject m_enemy;

public:
  cTest_Enemy();

  void update();
  void draw();
};
