
// PPVIS2.h: главный файл заголовка для приложения PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "включить pch.h до включения этого файла в PCH"
#endif

#include "resource.h"		// основные символы


// CPPVIS2App:
// Сведения о реализации этого класса: PPVIS2.cpp
//

class CPPVIS2App : public CWinApp
{
public:
	CPPVIS2App();

// Переопределение
public:
	virtual BOOL InitInstance();

// Реализация

	DECLARE_MESSAGE_MAP()
};

extern CPPVIS2App theApp;
