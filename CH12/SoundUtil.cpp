#include "SoundUtil.h"

void SoundUtil::PlayerTitleSound(LPCWSTR filename)
{
	PlaySound(filename, NULL, SND_SYNC);
}

void SoundUtil::PlayBGM(LPCWSTR filename)
{
	PlaySound(filename, NULL, SND_ASYNC);
}
