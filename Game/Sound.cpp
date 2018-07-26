#include "Sound.h"


// 0 : Back BGM
// 1 : Player Shot
// 2 : Enemy&Boss Shot
// 3 : Player ded
// 4 : Enemy ded
// 5 : Item Get
// 6 : Boss BGM
int sound_handle[6];	// Sound Handle

BOOL sound_flag[6];

void InitSound(void)
{
	sound_handle[0] = LoadSoundMem("Resources/Sound/BackBGM.wav");
	sound_handle[1] = LoadSoundMem("Resources/Sound/player_shot.wav");
	sound_handle[2] = LoadSoundMem("Resources/Sound/enemy_shot.wav");
	sound_handle[3] = LoadSoundMem("Resources/Sound/player_dead.wav");
	sound_handle[4] = LoadSoundMem("Resources/Sound/enemy_dead.wav");
	sound_handle[5] = LoadSoundMem("Resources/Sound/");

	sound_flag[0] = -1;
	sound_flag[1] = FALSE;
	sound_flag[2] = FALSE;
	sound_flag[3] = FALSE;
	sound_flag[4] = FALSE;
	sound_flag[5] = FALSE;
}

void UpdateSound(void)
{
	if (sound_flag[0] == TRUE)
	{
		PlaySoundMem(sound_handle[0], DX_PLAYTYPE_LOOP);
		sound_flag[0] = FALSE;
	}
	if (sound_flag[1] == TRUE)
	{
		PlaySoundMem(sound_handle[1], DX_PLAYTYPE_BACK);
		sound_flag[1] = FALSE;
	}
	if (sound_flag[2] == TRUE)
	{
		PlaySoundMem(sound_handle[2], DX_PLAYTYPE_BACK);
		sound_flag[2] = FALSE;
	}
	if (sound_flag[3] == TRUE)
	{
		PlaySoundMem(sound_handle[3], DX_PLAYTYPE_BACK);
		sound_flag[3] = FALSE;
	}
	if (sound_flag[4] == TRUE)
	{
		PlaySoundMem(sound_handle[4], DX_PLAYTYPE_BACK);
		sound_flag[4] = FALSE;
	}
	if (sound_flag[5] == TRUE)
	{
		PlaySoundMem(sound_handle[5], DX_PLAYTYPE_BACK);
		sound_flag[5] = FALSE;
	}
}