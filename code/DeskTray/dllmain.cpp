// dllmain.cpp : 定义 DLL 应用程序的入口点。
#include "stdafx.h"
#include "DeskTray.h"
USE_DEFAULT_DLL_MAIN;//需要替换原来的DllMain
BEGIN_CLIDMAP
	CLIDMAPENTRY_BEGIN
		CLIDMAPENTRY(CLSID_DeskTray,CDeskTray)
	CLIDMAPENTRY_END
END_CLIDMAP_AND_EXPORTFUN;
