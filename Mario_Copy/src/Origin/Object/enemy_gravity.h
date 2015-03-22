
#pragma once
#include "object_interface.h"


class cEnemyGravity : public cObjectInterface {
public:

  cEnemyGravity(cObject*);
  
  void update();
  float getVelocity();


private:

  const float GRAVITY_POWER = 0.1f;
  float m_velocity_y;
};