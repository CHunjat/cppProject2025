#include "SoundUtil.h"


//Winmm.lib : Window multi media library
int main()
{
	cout << "배경음악을 넣는방법" << endl;

	// visual stduio audio file 출력하는 방법
	// Windows.h 의 playersound 함수 사용하기

	// SN_SYNC : 사운드 파일이 전부 실행되고 난 후에 아래 코드를 실행한다.
	// SND_ASYNC : 아래코드와 별개로 파일이 실행된다.
	
	// 소리가 출력되고 있으면 true 아니면 false
	
	SoundUtil::PlayBGM(_T("sound.wav"));


	cout << "소리 출력 " << endl;

	while (true)
	{

	}
}