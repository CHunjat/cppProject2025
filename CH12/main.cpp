#include "SoundUtil.h"


//Winmm.lib : Window multi media library
int main()
{
	cout << "��������� �ִ¹��" << endl;

	// visual stduio audio file ����ϴ� ���
	// Windows.h �� playersound �Լ� ����ϱ�

	// SN_SYNC : ���� ������ ���� ����ǰ� �� �Ŀ� �Ʒ� �ڵ带 �����Ѵ�.
	// SND_ASYNC : �Ʒ��ڵ�� ������ ������ ����ȴ�.
	
	// �Ҹ��� ��µǰ� ������ true �ƴϸ� false
	
	SoundUtil::PlayBGM(_T("sound.wav"));


	cout << "�Ҹ� ��� " << endl;

	while (true)
	{

	}
}