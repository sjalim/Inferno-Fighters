#ifndef life_H_INCLUDED
#define life_H_INCLUDED
#include"variables.h"

void lifeDetector()
{

	
	iSetColor(255,0,0);
	iFilledRectangle(50,520,150,15);
	iSetColor(255,255,0);
	iFilledRectangle(50,520,150-lifeX,15);
	iRectangle(50,520,150,15);

}





#endif // !MYHEADER_H_INCLUDED