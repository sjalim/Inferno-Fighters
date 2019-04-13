#ifndef variables_H_INCLUDED
#define variables_H_INCLUDED

#include"iGraphics.h"

#define screenWidth 1000
#define screenHight 600

#define bladeImageSimultaion 5
#define wrenchTerhuneImageSimultaion 5
#define dinosaursImageSimultaion 5

#define zero 0
#define homeNumberOfImages 7
#define backgroundNumberOfImages1 12
#define backgroundNumberOfImages2 12
#define backgroundNumberOfImages3 12

#define mustofaKickNumberOfImages 7
#define mustofaRunsNumberOFImages 9
#define mustofaPunchNumberOFImages 2

#define marieKickNumberOfImages 7
#define marieRunsNumberOFImages 8
#define mariePunchNumberOFImages 2

#define sjKickNumberOfImages 7
#define sjRunsNumberOFImages 8 
#define sjPunchNumberOFImages 2

#define annahKickNumberOfImages 7
#define annahRunsNumberOFImages 8
#define annahPunchNumberOFImages 2

#define bladeAttackNumberOfImages 10

#define wrenchTerhuneAttackNumberOfImages 3

#define dinosaursAttackNumberOfImages 7

#define addressSize 150

char Home_[homeNumberOfImages][addressSize]={"images\\frontPage1.bmp","images\\Manu.bmp","images\\story.bmp","images\\controls.bmp","images\\highScore.bmp","images\\textInputBackground.bmp","images\\next.bmp"};
char backGround_1[backgroundNumberOfImages1][addressSize] = {"images\\backGround1\\00.png","images\\backGround1\\01.png","images\\backGround1\\02.png","images\\backGround1\\03.png","images\\backGround1\\04.png","images\\backGround1\\05.png","images\\backGround1\\06.png","images\\backGround1\\07.png","images\\backGround1\\08.png","images\\backGround1\\09.png","images\\backGround1\\10.png","images\\backGround1\\11.png"};
char backGround_2[backgroundNumberOfImages2][addressSize] = {"images\\backGround2\\1.png","images\\backGround2\\2.png","images\\backGround2\\3.png","images\\backGround2\\4.png","images\\backGround2\\5.png","images\\backGround2\\6.png","images\\backGround2\\7.png","images\\backGround2\\8.png","images\\backGround2\\9.png","images\\backGround2\\10.png","images\\backGround2\\11.png","images\\backGround2\\12.png"};
char backGround_3[backgroundNumberOfImages2][addressSize] = {"images\\backGround3\\1.png","images\\backGround3\\2.png","images\\backGround3\\3.png","images\\backGround3\\4.png","images\\backGround3\\5.png","images\\backGround3\\6.png","images\\backGround3\\7.png","images\\backGround3\\8.png","images\\backGround3\\9.png","images\\backGround3\\10.png","images\\backGround3\\11.png","images\\backGround3\\12.png"};



char characterSelectionBackgournd[] = "images\\characterBackground.bmp";
char str[30],str2[30] ;




char mutofaArrowKick_[mustofaKickNumberOfImages][addressSize] ={"images\\playableCharacter\\mutofa\\arrow kick\\0.bmp","images\\playableCharacter\\mutofa\\arrow kick\\1.bmp","images\\playableCharacter\\mutofa\\arrow kick\\2.bmp","images\\playableCharacter\\mutofa\\arrow kick\\3.bmp","images\\playableCharacter\\mutofa\\arrow kick\\4.bmp","images\\playableCharacter\\mutofa\\arrow kick\\5.bmp","images\\playableCharacter\\mutofa\\arrow kick\\6.bmp"};
char mustofaRunning_[mustofaRunsNumberOFImages][addressSize] ={"images\\playableCharacter\\mutofa\\run\\1.bmp","images\\playableCharacter\\mutofa\\run\\2.bmp","images\\playableCharacter\\mutofa\\run\\3.bmp","images\\playableCharacter\\mutofa\\run\\4.bmp","images\\playableCharacter\\mutofa\\run\\5.bmp","images\\playableCharacter\\mutofa\\run\\6.bmp","images\\playableCharacter\\mutofa\\run\\7.bmp","images\\playableCharacter\\mutofa\\run\\8.bmp"};
char mustofaPunched_[2][addressSize]={"images\\playableCharacter\\mutofa\\punch\\0.bmp","images\\playableCharacter\\mutofa\\punch\\1.bmp"};
int mustofaLife;

char sjRunning_[sjRunsNumberOFImages][addressSize] = {"images\\playableCharacter\\sj\\run\\0.bmp","images\\playableCharacter\\sj\\run\\1.bmp","images\\playableCharacter\\sj\\run\\2.bmp","images\\playableCharacter\\sj\\run\\3.bmp","images\\playableCharacter\\sj\\run\\4.bmp","images\\playableCharacter\\sj\\run\\5.bmp","images\\playableCharacter\\sj\\run\\6.bmp","images\\playableCharacter\\sj\\run\\7.bmp"};
char sjPunched_[sjPunchNumberOFImages][addressSize] = {"images\\playableCharacter\\sj\\punch\\0.bmp","images\\playableCharacter\\sj\\punch\\1.bmp"};
char sjKick_[sjKickNumberOfImages][addressSize] = {"images\\playableCharacter\\sj\\kick\\0.bmp","images\\playableCharacter\\sj\\kick\\1.bmp","images\\playableCharacter\\sj\\kick\\2.bmp","images\\playableCharacter\\sj\\kick\\3.bmp","images\\playableCharacter\\sj\\kick\\4.bmp","images\\playableCharacter\\sj\\kick\\5.bmp","images\\playableCharacter\\sj\\kick\\6.bmp"};
int sjLife;

char marieRunning_[marieRunsNumberOFImages][addressSize] ={"images\\playableCharacter\\marie\\run\\0.bmp","images\\playableCharacter\\marie\\run\\1.bmp","images\\playableCharacter\\marie\\run\\2.bmp","images\\playableCharacter\\marie\\run\\3.bmp","images\\playableCharacter\\marie\\run\\4.bmp","images\\playableCharacter\\marie\\run\\5.bmp","images\\playableCharacter\\marie\\run\\6.bmp","images\\playableCharacter\\marie\\run\\7.bmp"};
char mariePunched_[mariePunchNumberOFImages][addressSize] ={"images\\playableCharacter\\marie\\punch\\0.bmp","images\\playableCharacter\\marie\\punch\\1.bmp"}; 
char marieKick_[marieKickNumberOfImages][addressSize] = {"images\\playableCharacter\\marie\\kick\\0.bmp","images\\playableCharacter\\marie\\kick\\1.bmp","images\\playableCharacter\\marie\\kick\\2.bmp","images\\playableCharacter\\marie\\kick\\3.bmp","images\\playableCharacter\\marie\\kick\\4.bmp","images\\playableCharacter\\marie\\kick\\5.bmp","images\\playableCharacter\\marie\\kick\\6.bmp"} ;
int marieLife;

char annahRunning_[annahRunsNumberOFImages][addressSize] ={"images\\playableCharacter\\annah\\run\\0.bmp","images\\playableCharacter\\annah\\run\\1.bmp","images\\playableCharacter\\annah\\run\\2.bmp","images\\playableCharacter\\annah\\run\\3.bmp","images\\playableCharacter\\annah\\run\\4.bmp","images\\playableCharacter\\annah\\run\\5.bmp","images\\playableCharacter\\annah\\run\\6.bmp","images\\playableCharacter\\annah\\run\\7.bmp"};
char annahPunched_[annahPunchNumberOFImages][addressSize] ={"images\\playableCharacter\\annah\\punch\\0.bmp","images\\playableCharacter\\annah\\punch\\1.bmp"}; 
char annahKick_[annahKickNumberOfImages][addressSize] = {"images\\playableCharacter\\annah\\kick\\0.bmp","images\\playableCharacter\\annah\\kick\\1.bmp","images\\playableCharacter\\annah\\kick\\2.bmp","images\\playableCharacter\\annah\\kick\\3.bmp","images\\playableCharacter\\annah\\kick\\4.bmp","images\\playableCharacter\\annah\\kick\\5.bmp","images\\playableCharacter\\annah\\kick\\6.bmp"} ;
int annahLife;

char life[4][addressSize] = {"images\\playableCharacter\\mustofa\\life\\0.bmp","images\\playableCharacter\\marie\\life\\0.bmp","images\\playableCharacter\\annnah\\life\\0.bmp","images\\playableCharacter\\sj\\life\\0.bmp"};

char bladeAttack[bladeAttackNumberOfImages][addressSize] = {"images\\Enemy\\Blade\\0.bmp","images\\Enemy\\Blade\\1.bmp","images\\Enemy\\Blade\\2.bmp","images\\Enemy\\Blade\\3.bmp","images\\Enemy\\Blade\\4.bmp","images\\Enemy\\Blade\\5.bmp","images\\Enemy\\Blade\\6.bmp","images\\Enemy\\Blade\\7.bmp","images\\Enemy\\Blade\\8.bmp","images\\Enemy\\Blade\\9.bmp"};
int bladeImages[10];

char wrenchTerhuneAttack[wrenchTerhuneAttackNumberOfImages][addressSize] = {"images\\Enemy\\wrenchTerhune\\0.bmp","images\\Enemy\\wrenchTerhune\\1.bmp","images\\Enemy\\wrenchTerhune\\2.bmp"};

char dinosaursAttack[dinosaursAttackNumberOfImages][addressSize] = {"images\\Enemy\\dinosaur\\0.bmp","images\\Enemy\\dinosaur\\1.bmp","images\\Enemy\\dinosaur\\2.bmp","images\\Enemy\\dinosaur\\3.bmp","images\\Enemy\\dinosaur\\4.bmp","images\\Enemy\\dinosaur\\5.bmp","images\\Enemy\\dinosaur\\6.bmp"};

int levelSelectionBackgroundimage;

int background_x[] = {0,100,200,300,400,500,600,700,800,900,1000,1100,1200};
int backButton_x ;
unsigned int backButton;
unsigned int backgroundPNG[3][12];
int gameState=0, characterY=10, mode=0, len=0, i,characterX=50;
int runningImageIndex=0, kickingImageIndex=0, punchImageIndexing = 0;


char str_point[1000000];

ImageInfo Home[homeNumberOfImages] ,backGround[backgroundNumberOfImages1];
ImageInfo mutofaArrowKick[mustofaKickNumberOfImages],mustofaPunched[mustofaPunchNumberOFImages],mustofaRunning[mustofaRunsNumberOFImages];
ImageInfo sjRunning[sjRunsNumberOFImages],sjKick[sjKickNumberOfImages],sjPunched[sjPunchNumberOFImages];
ImageInfo marieRunning[marieRunsNumberOFImages], marieKick[marieKickNumberOfImages], mariePunched[mariePunchNumberOFImages];
ImageInfo annahRunning[annahRunsNumberOFImages] , annahKick[annahKickNumberOfImages] , annahPunched[annahPunchNumberOFImages];


int tempScore, point =0,lvl =1,a=0;
int tempLevelMark;
int lifeX=0;
char highScoreString[100000],tempName[100000];

FILE *file ;

bool enterPressed =false,playMode =false ,controlsPressed = false ,aboutPressed = false ,kickPressed= false,run=false,jumpPressed=false,punchPressed=false,nameEntered = false,leaderboardPressed=false;
bool mustofaPressed = false , mariePrassed = false , sjPressed = false , annahPressed = false, backPressed = false;
bool playing = false,gameOver= false;
bool hardPressed = false , easyPressed = false,insanePressed = false ;
bool musicOn= false;
struct blade{
	int blade_X;
	int blade_Y;
	int bladeImageIndex ;
	bool bladeON;
};
blade bladeArr[bladeImageSimultaion];

struct wrenchTerhune{
	int wrenchTerhune_X;
	int wrenchTerhune_Y;
	int wrenchTerhuneImageIndex ;
	bool wrenchTerhuneON;
};
wrenchTerhune wrenchTerhuneArr[wrenchTerhuneImageSimultaion];


struct dinosaurs{
	int dinosaurs_X;
	int dinosaurs_Y;
	int dinosaursImageIndex ;
	bool dinosaursON;
};
dinosaurs dinosaursArr[dinosaursImageSimultaion];

 struct scores{
	int point;
	char name[20];
	int levelMark;

};
 scores scoreArr[6];


#endif // !MYHEADER_H_INCLUDED