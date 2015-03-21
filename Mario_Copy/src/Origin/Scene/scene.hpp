
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

  cScene(Font& font) : m_font(font) {}
  Font& m_font;
};
