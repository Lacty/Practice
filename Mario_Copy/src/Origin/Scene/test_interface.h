
#pragma once
#include "../common.h"


// TIPS: ����m�F�@�C���^�[�t�F�C�X
class cTest_Interface {
public:
  cTest_Interface(Font&);

  void update();
  void draw();


private:

  Font& m_font;
};
