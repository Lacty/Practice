
#pragma once
#include "../common.h"
#include "../Object/object.h"


// TIPS: ����m�F�@�v���C���[
//     : ���R�ɕύX���đ��v
class cTest_Player {
  cObject m_player;

public:
  cTest_Player();

  void update();
  void draw();
};
