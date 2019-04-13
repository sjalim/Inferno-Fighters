#ifndef dinosaurs_H_INCLUDED
#define dinosaurs_H_INCLUDED
#include "variables.h"



void dinosaursMovement()
{
	


	for(int i =0;i<dinosaursImageSimultaion;i++)
	{

if(dinosaursArr[i].dinosaurs_X>=characterX  &&  dinosaursArr[i].dinosaurs_X<=(characterX+100)  &&  (dinosaursArr[i].dinosaurs_Y+50)>=characterY  && (dinosaursArr[i].dinosaurs_Y+50) <=(characterY+100)  && (punchPressed || kickPressed))
	{

		dinosaursArr[i].dinosaursON = false;
		cout << point++ <<endl;


	}
if(dinosaursArr[i].dinosaurs_X>=characterX  &&  dinosaursArr[i].dinosaurs_X<=(characterX+100)  &&  (dinosaursArr[i].dinosaurs_Y+50)>=characterY  && (dinosaursArr[i].dinosaurs_Y+50) <=(characterY+100) && dinosaursArr[i].dinosaursON && !(punchPressed || kickPressed))
	{

		lifeX+=2;


	}
		if(dinosaursArr[i].dinosaursON)
		{
			iShowBMP2(dinosaursArr[i].dinosaurs_X,dinosaursArr[i].dinosaurs_Y,dinosaursAttack[dinosaursArr[i].dinosaursImageIndex],0);
		}
	}
}

void setdinosaursVaribales()
{

	for(int i =0 ;i<dinosaursImageSimultaion;i++)
	{

		dinosaursArr[i].dinosaurs_X = screenWidth + rand()%700;
		dinosaursArr[i].dinosaurs_Y = rand() % 250;
		dinosaursArr[i].dinosaursON = true;

	}

}



#endif // !MYHEADER_H_INCLUDED