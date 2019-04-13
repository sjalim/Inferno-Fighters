#ifndef EnemyBlade_H_INCLUDED
#define EnemyBlade_H_INCLUDED



#include"variables.h"

void bladeMovement()
{

	for(int i =0;i<bladeImageSimultaion;i++)
	{
	if(bladeArr[i].blade_X>=characterX  &&  bladeArr[i].blade_X<=(characterX+100)  &&  (bladeArr[i].blade_Y+50)>=characterY  && (bladeArr[i].blade_Y+50) <=(characterY+100)  && (punchPressed || kickPressed))
	{

		bladeArr[i].bladeON = false;
		cout << point++ <<endl;
	}
	if(bladeArr[i].blade_X>=characterX  &&  bladeArr[i].blade_X<=(characterX+100)  &&  (bladeArr[i].blade_Y+50)>=characterY  && (bladeArr[i].blade_Y+50) <=(characterY+100)  && !(punchPressed || kickPressed)&& bladeArr[i].bladeON)
	{
		lifeX+=2;
	}

		if(bladeArr[i].bladeON)
		{
			iShowBMP2(bladeArr[i].blade_X,bladeArr[i].blade_Y,bladeAttack[bladeArr[i].bladeImageIndex],0);
		}
	}
}

void setBladeVaribales()
{

	for(int i =0 ;i<bladeImageSimultaion;i++)
	{

		bladeArr[i].blade_X = screenWidth + rand()%700;
		bladeArr[i].blade_Y = rand() % 250;
		bladeArr[i].bladeON = true;

	}

}


#endif // !MYHEADER_H_INCLUDED