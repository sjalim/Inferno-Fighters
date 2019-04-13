
#include "iGraphics.h"
#include "bitmap_loader.h"
#include <iostream>
#include <windows.h>
#include <mmsystem.h>
#include"variables.h"
#include"change.h"
#include"EnemyBlade.h"
#include "dinosaurs.h"
#include"loadImages.h"
#include"players.h"
#include"wrenchTerhune.h"
#include"life.h"
#include"score.h"
using namespace std;

//For showing entring name; called from iDraw method;return type void
void drawTextBox()
{
	//iShowBMP(0,0,Home[5]);
	iSetColor(150, 150, 150);
	iRectangle(300, 250, 250, 30);
	iText(300,290,"Enter the name:",GLUT_BITMAP_8_BY_13);
}

//For showing name ; called from iDraw method ; return type void
void pointshow()
{
	sprintf_s(str_point,"%d",point);
	iText(48,536,"Score:",GLUT_BITMAP_HELVETICA_18);
	iText(110,536,str_point,GLUT_BITMAP_HELVETICA_18);
}



void iDraw()
{
	//	cout << "iDraw"<< a++<< endl;
	iClear();
	//if(point > 100)
	//{

	//	lvl=2;
	//}
	//else if(point > 200)
	//{
	//	lvl=3;

	//}


	//in which phase the game is
	if(gameState==0)
	{
		//frontPage

		iShowImage2(0,0,Home[0]);




	}
	else if(gameState==1)
	{
		//manu
		iShowImage2(0,0,Home[1]);


	}


	else if(gameState==2)
	{

		if(playMode)
		{
			gameState=3;
		}
		else if(controlsPressed)
		{

			//controls
			iShowImage2(0,0,Home[3]);
			iShowImage(0,570,70,31,backButton);
		}
		else if(aboutPressed)
		{
			//story
			iShowImage2(0,0,Home[2]);
			iShowImage(0,570,70,31,backButton);
		}
		else if(leaderboardPressed)
		{

			//highscore
			iShowImage2(0,0,Home[4]);
			iShowImage(0,570,70,31,backButton);

			showScores();

		}
	}
	else if(gameState==3)
	{

		iShowImage(0,0,screenWidth,screenHight,levelSelectionBackgroundimage);
		iText(400,550,"Select Level:",GLUT_BITMAP_HELVETICA_18);
		iShowImage(0,570,70,31,backButton);


	}
	else if(gameState==4)
	{
		iShowImage(0,570,70,31,backButton);
		drawTextBox();
		iSetColor(255, 255, 255);
		iText(305, 260, str);
	}
	else if(gameState== 5)
	{
		iShowBMP(0,0,characterSelectionBackgournd);
		iShowImage(0,570,70,31,backButton);
	}
	else if(gameState==6)
	{
		if(lifeX<150){
			if(lvl==1)
			{





				for(i=0;i<12;i++)
				{
					iShowImage(background_x[i],0,100,600,backgroundPNG[lvl-1][i]);
				}
				/*shows the collision ,points,rendering of image of the enemy ;called from iDraw;return type void*/
				bladeMovement();
				//For showing point
				pointshow();
				iShowImage(0,570,70,31,backButton);
				if(mustofaPressed)
				{
					iShowImage(0,520,50,50,mustofaLife);
					mustofa();
					//iShowImage(30,30,72,70,mustofaLife);
				}
				else if(mariePrassed)
				{
					iShowImage(0,520,50,50,marieLife);
					marie();
				}
				else if(annahPressed)
				{
					iShowImage(0,520,50,50,annahLife);
					annah();
				}
				else if(sjPressed)
				{
					iShowImage(0,520,50,50,sjLife);
					sj();
				}
			}
			else if(lvl==2)
			{
				for(i=0;i<12;i++)
				{
					iShowImage(background_x[i],0,100,600,backgroundPNG[lvl-1][i]);
				}
				bladeMovement();
				wrenchTerhuneMovement();

				pointshow();
				iShowImage(0,570,70,31,backButton);
				if(mustofaPressed)
				{
					iShowImage(0,520,50,50,mustofaLife);
					mustofa();
					//iShowImage(30,30,72,70,mustofaLife);
				}
				else if(mariePrassed)
				{
					iShowImage(0,520,50,50,marieLife);
					marie();
				}
				else if(annahPressed)
				{
					iShowImage(0,520,50,50,annahLife);
					annah();
				}
				else if(sjPressed)
				{
					iShowImage(0,520,50,50,sjLife);
					sj();
				}

			}
			//insane
			else if(lvl ==3)
			{
				for(i=0;i<12;i++)
				{
					iShowImage(background_x[i],0,100,600,backgroundPNG[lvl-1][i]);
				}
				/*shows the collision ,points,rendering of image of the enemy blade ;called from iDraw;return type void*/
				bladeMovement();
				/*shows the collision ,points,rendering of image of the enemy wrenchTerhune ;called from iDraw;return type void*/
				wrenchTerhuneMovement();
				/*shows the collision ,points,rendering of image of the enemy 	dinosaurs;called from iDraw;return type void*/
				dinosaursMovement();
				pointshow();
				iShowImage(0,570,70,31,backButton);
				if(mustofaPressed)
				{
					//rendering of playable character mustofa and can do punch and kick;
					mustofa();
					iShowImage(0,520,50,50,mustofaLife);
					mustofa();
					
				}
				else if(mariePrassed)
				{
					//rendering of playable character maria and can do punch and kick;
					iShowImage(0,520,50,50,marieLife);
					marie();
				}
				else if(annahPressed)
				{
					//rendering of playable character annah and can do punch and kick;
					iShowImage(0,520,50,50,annahLife);
					annah();
				}
				else if(sjPressed)
				{
					//rendering of playable character sj and can do punch and kick;
					iShowImage(0,520,50,50,sjLife);
					sj();
				}
			}
		}
		else
		{
			iText(450,300,"Game Over",GLUT_BITMAP_HELVETICA_18);
			iText(450,250,"Your Score:",GLUT_BITMAP_HELVETICA_18);
			iText(550,250,str_point,GLUT_BITMAP_HELVETICA_18);
			iText(100,50,"Press Enter Button for Save Your Score.",GLUT_BITMAP_HELVETICA_18);
			gameOver = true;


		}




	}
}

void iPassiveMouse(int x, int y)
{
	printf("x = %d, y= %d\n", x, y);
}

void iMouseMove(int mx, int my)
{
	//printf("x = %d, y= %d\n", mx, my);
}

void iMouse(int button, int state, int mx, int my)
{
	//enterPressed = false;
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{

		//printf("x = %d, y= %d\n",mx,my);
		if(mx>=80 && mx <= 286 && my >= 453 && my <=526 && gameState==1 )
		{
			gameState++;		
			playMode =true;
			controlsPressed= false;
			aboutPressed = false;
			leaderboardPressed = false;
			run = true;

		}
		else if(mx>=80 && mx<= 285 && my>= 344 && my<=417 && gameState==1 )
		{
			//controls
			if(musicOn)
			{
				musicOn = false;
				PlaySound(0,0,0);

			}
			else{
				musicOn =true;
				PlaySound("music files\\36_Continue 1.wav",NULL,SND_LOOP | SND_ASYNC);

			}
			gameState++;
			controlsPressed = true;
			playMode = false;
			aboutPressed = false;
			leaderboardPressed = false;
			run  = false;


		}
		else if(mx>=80 && mx<= 192 && my>= 129 && my<= 202 && gameState==1 )
		{
			//about
			if(musicOn)
			{
				musicOn = false;
				PlaySound(0,0,0);

			}
			else{
				musicOn =true;
				PlaySound("music files\\36_Continue 1.wav",NULL,SND_LOOP | SND_ASYNC);

			}
			gameState++;
			aboutPressed = true;
			controlsPressed= false;
			leaderboardPressed = false;
			playMode = false;
			run = false;
		}
		else if(mx>=80 && mx<= 290 && my>= 239 && my<= 313 && gameState==1 )
		{
			//highScore;
			if(musicOn)
			{
				musicOn = false;
				PlaySound(0,0,0);

			}
			else{
				musicOn =true;
				PlaySound("music files\\36_Continue 1.wav",NULL,SND_LOOP | SND_ASYNC);

			}
			gameState++;
			leaderboardPressed = true;
			aboutPressed = false;
			controlsPressed= false;
			playMode = false;
			run = false;
		}	

		if(mx>=348 && mx<= 670 && my>= 430 && my<= 515 && gameState==3)
		{
			//easy
			lvl=1;
			gameState++;

		}
		else if(mx>=348 && mx<= 670 && my>= 296 && my<= 386 && gameState==3)
		{
			//hard
			lvl=2;
			gameState++;

		}
		else if(mx>=348 && mx<= 670 && my>= 164 && my<= 254 && gameState==3)
		{
			//insane
			lvl=3;
			gameState++;
		}




		if(gameState==5){
			if(musicOn)
			{
				musicOn = false;
				PlaySound(0,0,0);

			}
			else{
				musicOn =true;
				PlaySound("music files\\03_Player Select.wav",NULL,SND_LOOP | SND_ASYNC);

			}



			if(mx>=415 && mx<= 585 && my>= 404 && my<= 477   )
			{
				gameState++;
				mariePrassed = true;
				mustofaPressed = false ;
				sjPressed = false;
				annahPressed = false;


			}
			else if(mx>=415 && mx<= 585 && my>= 311 && my<= 385 )
			{
				gameState++;

				mariePrassed = false;
				mustofaPressed =  true;
				sjPressed = false;
				annahPressed = false;
			}
			else if(mx>=415 && mx<= 585 && my>= 218 && my<= 288 )
			{
				gameState++;
				mariePrassed = false;
				mustofaPressed = false ;
				sjPressed = true;
				annahPressed = false;

			}
			else if(mx>=415 && mx<= 585 && my>= 123 && my<= 195 )
			{
				gameState++;
				mariePrassed = false;
				mustofaPressed = false ;
				sjPressed = false;
				annahPressed = true;
			}
		}
		if(mx>=0 && mx<= 66 && my>= 573 && my<= 600 )
		{
			gameState--;
		}
	}

}
void iKeyboard(unsigned char key)
{

	if(key=='\r' && gameOver && gameState==6){
		scoreArr[5].point= point;
		strcpy(scoreArr[5].name , str2);
		scoreArr[5].levelMark = lvl;
		//For saving score and name ; sorting the leaderboard
		score();

	}


	if(key=='\r' && gameState==0)
	{
	

			gameState++;
		
	}
	if(gameState==4 && key == '\r')
	{
		nameEntered = true;
		strcpy(str2, str);
		cout << str2 << endl;
		for(i = 0; i < len; i++)
			str[i] = 0;
		len = 0;
		gameState++;
	}
	else
	{
		str[len] = key;
		len++;
	}

	if(key == 'd' && playMode && gameState== 6  )
	{
		PlaySound("music files\\b.wav",NULL,SND_ASYNC);
		kickPressed =true;
		punchPressed = false;
		run = false;

	}
	else if(key=='f' && playMode && gameState== 6 )
	{
		PlaySound("music files\\b.wav",NULL,SND_ASYNC);
		punchPressed =true;
		kickPressed = false ;
		run = false;
	}
}

/*
function iSpecialKeyboard() is called whenver user hits special keys like-
function keys, home, end, pg up, pg down, arraows etc. you have to use
appropriate constants to detect them. A list is:
GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{

	if (key == GLUT_KEY_F12)
	{
		if(musicOn)
		{
			musicOn= false;
			PlaySound(0,0,0);

		}

	}
	if(key == GLUT_KEY_END)
	{

		exit(1);
	}

	if(key== GLUT_KEY_UP && playMode)
	{
		for(i=0;i<10;i++)
		{
			if(characterY <=250){
				characterY +=2;
			}
		}
	}

	if(key ==GLUT_KEY_DOWN && playMode)
	{

		for(i=0;i<10;i++)
		{
			if(characterY > 0)
			{
				characterY -=2;
			}
		}
	}
}

//void iSetTimeCall1()
//{
//
//	
//		iSetTimer(100,change_blade);
//
//}
//
//void iSetTimerCall2()
//{
//	iSetTimer(100,change_blade);
//		iSetTimer(100,change_dinosaurs);
//
//}
//void iSetTimerCall3()
//{
//	
//
//}

int main()
{
	if(gameOver)
		score();


	setBladeVaribales();
	setwrenchTerhuneVaribales();
	setdinosaursVaribales();

	//cout<< "hell" <<endl;
	iSetTimer(200,change1);
	iSetTimer(100,change2);
	iSetTimer(100,change_blade);
	iSetTimer(100,change_dinosaurs);
	iSetTimer(100,change_wrenchTerhune);






	if(!musicOn){
		PlaySound("music files\\01_Introduction.wav",NULL ,SND_ASYNC | SND_FILENAME);
	}
	iInitialize(screenWidth, screenHight, "project");
	sjLife = iLoadImage("images\\playableCharacter\\sj\\life\\0.png");
	mustofaLife = iLoadImage("images\\playableCharacter\\mustofa\\life\\234.png");
	marieLife = iLoadImage("images\\playableCharacter\\marie\\life\\0.png");
	annahLife = iLoadImage("images\\playableCharacter\\annah\\life\\0.png");
	backButton = iLoadImage("images\\backButton.png");

	levelSelectionBackgroundimage=iLoadImage("images\\level.png");
	loadImages();


	iStart(); 

	return 0;
}

//	png load hocche nah 
//	game off hoye jacche kisu khon cholar por
