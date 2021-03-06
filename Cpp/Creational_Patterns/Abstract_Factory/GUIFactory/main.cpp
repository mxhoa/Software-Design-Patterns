#include "factory\GUIFactory.h"
#include "factory\WinFactory.h"
#include "factory\MacFactory.h"
#include <iostream>


int main()
{
	GUIFactory* guiFactory;
	IButton *btn;
	IScrollBar *sb;

	guiFactory = new MacFactory;
	btn = guiFactory->createButton();
	btn->paint();
	sb = guiFactory->createScrollBar();
	sb->paint();



	guiFactory = new WinFactory;
	btn = guiFactory->createButton();
	btn->paint();
	sb = guiFactory->createScrollBar();
	sb->paint();

	system("PAUSE");

    return 0;
}

