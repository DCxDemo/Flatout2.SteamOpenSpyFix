#include "stdafx.h"
#include "main.h"
#include <iostream>

BOOL APIENTRY DllMain( HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved )
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
		Patch();
		break;
	case DLL_PROCESS_DETACH:
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
		break;
	}
	return TRUE;
}


void Patch()
{
	char gamespy[] = "gamespy.com";
	char openspy[] = "openspy.org";

	//pointers to "gamespy.com"
	int ptrs[] = {
		0x656560,
		0x656574,
		0x676C89,
		0x676D6A,
		0x676D83,
		0x676D9B,
		0x676DB0,
		0x677783,
		0x681CF2,
		0x681D85,
		0x681DC5
	};

	//for each pointer in array
	for (int i = 0; i < sizeof(ptrs) / sizeof(int); i++)
	{
		char* target = (char*)ptrs[i];

		//make sure string equals gamespy.com, so we don't trash incompatible games.
		//hope i get it right haha
		if (!strcmp(target, gamespy))
			strcpy(target, openspy);
	}
}