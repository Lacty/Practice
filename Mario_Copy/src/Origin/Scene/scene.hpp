
#pragma once
#include "../common.h"

//
// ���N���X
//

class cScene {
protected:

  cScene() {
    m_screen.init();
  }

  struct {
    short time;    // �_�Ń^�C�}�[
    short blink;   // �_�ŏ��
    float alpha;   // �����x

    void init() {
      time  = 0;
      blink = 0;
      alpha = 1.0f;
    }
  } m_screen;   // TIPS: �w�i�A�j���p�̃p�����[�^

public:

  virtual void update() = 0;
  virtual void draw()   = 0;
};
