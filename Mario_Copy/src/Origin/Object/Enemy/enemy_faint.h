
#pragma once
#include "../object_interface.h"
#include "../../System/environment.h"


class cEnemyFaint : public cObjectInterface {
public:

  cEnemyFaint(cEnemy*);

  void update();
  bool isFaint();


private:

  enum EnemyFaintStatus {
    FAINT,     // 気絶中
    ACTIVE     // 活動中
  };
  short m_faint_status;
};