
#pragma once
#include "../common.h"
#include <string>


class cGadget {

  // TIPS: ���̃N���X�𒼐ڐ錾�ł��Ȃ��悤�ɂ���
  cGadget();

  Font m_font;

public:

  // TIPS: �R���X�g���N�^�ł͂Ȃ��A
  //     : ���̊֐����g���ċ@�\��񋟂���
  static cGadget get();

  // ���b�Z�[�W�E�B���h�E�̕`��
  void msgBox(const float2& pos,
              const float2& size,
              const Color& color);

  // ������̕`��
  void telop(const std::string& str,
             const float2& pos,
             const Color& color = Color::white);

  // ������̃t�H���g�T�C�Y��ݒ�
  void telopFontSize(const short size);

  // ������`�掞�̃T�C�Y���擾
  float2 getTelopSize(const std::string& str);
};

typedef cGadget  gadget;
