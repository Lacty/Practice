
#pragma once
#include "../common.h"

//
// ���N���X
//

class cScene {
public:

  virtual void update() = 0;
  virtual void draw()   = 0;


protected:

  cScene() {
    m_effect.init();
  }

  struct {
    short time;    // �_�Ń^�C�}�[
    short blink;   // �_�ŏ��
    float alpha;   // �����x

    void init() {
      time = 0;
      blink = 0;
      alpha = 1.0f;
    }
  } m_effect;   // TIPS: ���o�p�̃p�����[�^
};
