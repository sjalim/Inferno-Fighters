#ifndef players_H_INCLUDED
#define players_H_INCLUDED

#include "variables.h"
#include "iGraphics.h"
#include "life.h"



void mustofa()
{
	if(run)
	{
		iShowImage2(characterX,characterY,mustofaRunning[runningImageIndex]);
	}
	else if(kickPressed)
	{
		iShowImage2(characterX,characterY,mutofaArrowKick[kickingImageIndex]);
		if(characterY<=22 && kickingImageIndex<=2)
		{
			characterY+=4;
		}
		else if(characterY>=10 && kickingImageIndex>2) 
		{
			characterY-=3;
		}
	}
	else if(punchPressed)
	{
		iShowImage2(characterX,characterY,mustofaPunched[punchImageIndexing]);
	}
	

	lifeDetector();

}

void sj()
{
	if(run)
	{
		iShowImage2(characterX,characterY,sjRunning[runningImageIndex]);
	}
	else if(kickPressed)
	{
		iShowImage2(characterX,characterY,sjKick[kickingImageIndex]);
		if(characterY<=22 && kickingImageIndex<=2)
		{
			characterY+=4;
		}
		else if(characterY>=10 && kickingImageIndex>2) 
		{
			characterY-=3;
		}
	}
	else if(punchPressed)
	{
		iShowImage2(characterX,characterY,sjPunched[punchImageIndexing]);
	}

	
	lifeDetector();
}
void annah()
{
	if(run)
	{
		iShowImage2(characterX,characterY,annahRunning[runningImageIndex]);
	}
	else if(kickPressed)
	{
		iShowImage2(characterX,characterY,annahKick[kickingImageIndex]);
		if(characterY<=22 && kickingImageIndex<=2)
		{
			characterY+=4;
		}
		else if(characterY>=10 && kickingImageIndex>2) 
		{
			characterY-=3;
		}
	}
	else if(punchPressed)
	{
		iShowImage2(characterX,characterY,annahPunched[punchImageIndexing]);
	}

	
	lifeDetector();
}
void marie()
{
	
	
	if(run)
	{

		iShowImage2(characterX,characterY,marieRunning[runningImageIndex]);
	}
	else if(kickPressed)
	{
		iShowImage2(characterX,characterY,marieKick[kickingImageIndex]);
		if(characterY<=22 && kickingImageIndex<=2)
		{
			characterY+=4;
		}
		else if(characterY>=10 && kickingImageIndex>2) 
		{
			characterY-=3;
		}
	}
	else if(punchPressed)
	{
		iShowImage2(characterX,characterY,mariePunched[punchImageIndexing]);
	}

	lifeDetector();
}




#endif // !MYHEADER_H_INCLUDED