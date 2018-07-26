#pragma once

#include "MyLibrary/MyLibrary.h"

extern BOOL sound_flag[6];
extern int sound_handle[6];

void InitSound(void);
void UpdateSound(void);