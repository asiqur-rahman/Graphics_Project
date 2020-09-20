#include <iostream>
using namespace std;
#include<GL/gl.h>
#include <stdio.h>
#include<GL/gl.h>
#include <GL/glut.h>
#include <math.h>
#include <Windows.h>
#include <MMSystem.h>

int _planeMove=1;
int _leftCarMove=1;
int _rightCarMove=1;
int _leftShipMove=1;
int _rightShipMove=1;
int _middleCarMove=1;
int _lcloudMove=1;
int _rcloudMove=1;
int _raining=1;
int  night=1;
int rainhappen=0;
int carBoatStarts=1;
int _sunY=0;
int nightCheck=3;
int test=0;




void sunMaking()
{
    if(rainhappen==0)
    {


    glBegin(GL_POLYGON); // 1st circle yellow
    glColor3f(1.000, 1.000, 0.000);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=70;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x+1000,y+1350 );
	}
	glEnd();

	glBegin(GL_POLYGON);// 2nd circle
    glColor3f(1.0, 0.918,.584);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=65;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x+1000,y+1350 );
	}
	glEnd();

	glBegin(GL_POLYGON);// 3rd circle golden

	glEnd();
    }


}

void leftCloud()

{
    glBegin(GL_POLYGON); // ashCircleLeft
    if(rainhappen==0)
    {

glColor3f(0.2, 0.2, 0.2);

    }
    else{glColor3f(0.753, 0.753, 0.753);}
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=60;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x+195,y+1255 );
	}
	glEnd();

	glBegin(GL_POLYGON);//on ash
	if (rainhappen==1){
            glColor3f(0.412, 0.412, 0.412);
    }
    else{glColor3f(.933, .933, .933);}
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=60;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x+202,y+1262 );
	}
	glEnd();

	glBegin(GL_POLYGON);//left up
	glColor3f(.933, .933, .933);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=60;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x+250,y+1310 );
	}
	glEnd();



	glBegin(GL_POLYGON);//middle
 glColor3f(.933, .933, .933);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=70;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x+280,y+1290 );
	}
	glEnd();

	glBegin(GL_POLYGON);//top
glColor3f(.933, .933, .933);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=60;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x+300,y+1360 );
	}
	glEnd();



	glBegin(GL_POLYGON);//top right
    glColor3f(.933, .933, .933);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=60;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x+370,y+1340 );
	}
	glEnd();

	glBegin(GL_POLYGON);//down right ash
glColor3f(0.753, 0.753, 0.753);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=60;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x+375,y+1275 );
	}
	glEnd();


	glBegin(GL_POLYGON);//down right
    glColor3f(.933, .933, .933);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=60;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x+370,y+1280 );
	}
	glEnd();

	}

	void rightCloud(){

	// right cloud/////////////////


	glBegin(GL_POLYGON); // ashCircleLeft
    glColor3f(0.753, 0.753, 0.753);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=60;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x+1695,y+1255 );
	}
	glEnd();

	glBegin(GL_POLYGON);//on ash
    glColor3f(.933, .933, .933);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=60;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x+1702,y+1262 );
	}
	glEnd();



	glBegin(GL_POLYGON);//middle ash
    glColor3f( 	0.753, 0.753, 0.753);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=70;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x+1780,y+1280 );
	}
	glEnd();

	glBegin(GL_POLYGON);//middle
    glColor3f(.933, .933, .933);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=70;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x+1780,y+1290 );
	}
	glEnd();

	glBegin(GL_POLYGON);//top

    glColor3f(.933, .933, .933);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=60;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x+1800,y+1360 );
	}
	glEnd();

	glBegin(GL_POLYGON);//top right ash
	glColor3f(0.753, 0.753, 0.753);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=60;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x+1865,y+1330 );
	}
	glEnd();

	glBegin(GL_POLYGON);//top right
	glColor3f(.933, .933, .933);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=60;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x+1870,y+1340 );
	}
	glEnd();

	glBegin(GL_POLYGON);//down right ash
	   glColor3f(0.753, 0.753, 0.753);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=60;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x+1875,y+1275 );
	}
	glEnd();


	glBegin(GL_POLYGON);//down right
	glColor3f(.933, .933, .933);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=60;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x+1870,y+1280 );
	}
	glEnd();



}



void normalSky()

{

	glBegin(GL_POLYGON); //Sky
	glColor3f(0.118, 0.565, 1.000);

	glVertex2i(2000, 1500);
	glVertex2i(0, 1500);

	glColor3f(2.49, 1.87, 1.0);
	glVertex2i(0, 970);
	glVertex2i(2000, 970);
	glEnd();




    }









void building()
{
    // b1-from left most side

    glBegin(GL_POLYGON);
	glColor3f(0.282, 0.239, 0.545);
	glVertex2i(10, 970);
	glVertex2i(110, 970);
	glVertex2i(110, 1070);
	glVertex2i(10, 1070);
	glEnd();

	//back side
	glBegin(GL_POLYGON);
	glColor3f(0.294, 0.000, 0.510);
	glVertex2i(110, 970);
	glVertex2i(130, 970);
	glVertex2i(130, 1050);
	glVertex2i(110, 1070);
	glEnd();

	//windows
	glBegin(GL_POLYGON);
	if(night==1)
    {
        glColor3f(0.933, 0.910, 0.667);
    }
	else{glColor3f(0.2,0.2,0.2);}
	glVertex2i(20, 1000);
	glVertex2i(50, 1000);
	glVertex2i(50, 1050);
	glVertex2i(20, 1050);
	glEnd();

	glBegin(GL_POLYGON);
	if(night==1)
    {
        glColor3f(0.933, 0.910, 0.667);
    }
	else{glColor3f(0.2,0.2,0.2);}
	glVertex2i(70, 1000);
	glVertex2i(100, 1000);
	glVertex2i(100, 1050);
	glVertex2i(70, 1050);
	glEnd();



	// building 2

    glBegin(GL_POLYGON);
	glColor3f(0.235, 0.702, 0.443);
	glVertex2i(140, 970);
	glVertex2i(220, 970);
	glVertex2i(220, 1150);
	glVertex2i(140, 1150);
	glEnd();

	//back side
	glBegin(GL_POLYGON);
	glColor3f(0.180, 0.545, 0.341);
	glVertex2i(220, 970);
	glVertex2i(240, 970);
	glVertex2i(240, 1130);
	glVertex2i(220, 1150);
	glEnd();

	//windows  down
	glBegin(GL_POLYGON);
	glColor3f(0.2,0.2,0.2);
	glVertex2i(145, 1000);
	glVertex2i(175, 1000);
	glVertex2i(175, 1050);
	glVertex2i(145, 1050);
	glEnd();

	glBegin(GL_POLYGON);
	if(night==1)

        glColor3f(0.933, 0.910, 0.667);

	glColor3f(0.2,0.2,0.2);
	glVertex2i(180, 1000);
	glVertex2i(210, 1000);
	glVertex2i(210, 1050);
	glVertex2i(180, 1050);
	glEnd();

	//windows  UP

	glBegin(GL_POLYGON);



	glColor3f(0.2,0.2,0.2);
	glVertex2i(145, 1080);
	glVertex2i(175, 1080);
	glVertex2i(175, 1130);
	glVertex2i(145, 1130);
	glEnd();

	glBegin(GL_POLYGON);
	if(rainhappen==1|| night==1)
    {
        glColor3f(0.933, 0.910, 0.667);
    }
	else{glColor3f(0.2,0.2,0.2);}
	glVertex2i(180, 1080);
	glVertex2i(210, 1080);
	glVertex2i(210, 1130);
	glVertex2i(180, 1130);
	glEnd();

	// building 3

    glBegin(GL_POLYGON);
	glColor3f(0.000, 0.545, 0.545);
	glVertex2i(260, 970);
	glVertex2i(340, 970);
	glVertex2i(340, 1180);
	glVertex2i(260, 1180);
	glEnd();

	//back side
	glBegin(GL_POLYGON);
	glColor3f(0.000, 0.502, 0.502);
	glVertex2i(340, 970);
	glVertex2i(355, 970);
	glVertex2i(355, 1160);
	glVertex2i(340, 1180);
	glEnd();


	//windows  down
	glBegin(GL_POLYGON);
	glColor3f(0.2,0.2,0.2);
	glVertex2i(267, 1000);
	glVertex2i(297, 1000);
	glVertex2i(297, 1050);
	glVertex2i(267, 1050);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.2,0.2,0.2);
	glVertex2i(302, 1000);
	glVertex2i(332, 1000);
	glVertex2i(332, 1050);
	glVertex2i(302, 1050);
	glEnd();

	//windows  UP

	glBegin(GL_POLYGON);
	glColor3f(0.2,0.2,0.2);
	glVertex2i(267, 1080);
	glVertex2i(297, 1080);
	glVertex2i(297, 1130);
	glVertex2i(267, 1130);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.2,0.2,0.2);
	glVertex2i(302, 1080);
	glVertex2i(332, 1080);
	glVertex2i(332, 1130);
	glVertex2i(302, 1130);
	glEnd();

	// building 4

    glBegin(GL_POLYGON);
	glColor3f(0.855, 0.647, 0.125);
	glVertex2i(370, 970);
	glVertex2i(440, 970);
	glVertex2i(440, 1100);
	glVertex2i(370, 1100);
	glEnd();

	//back side
	glBegin(GL_POLYGON);
	glColor3f(0.722, 0.525, 0.043);
	glVertex2i(440, 970);
	glVertex2i(460, 970);
	glVertex2i(460, 1080);
	glVertex2i(440, 1100);
	glEnd();

	//windows  down
	glBegin(GL_POLYGON);
	glColor3f(0.2,0.2,0.2);
	glVertex2i(375, 985);
	glVertex2i(405, 985);
	glVertex2i(405, 1035);
	glVertex2i(375, 1035);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.2,0.2,0.2);
	glVertex2i(410, 985);
	glVertex2i(440, 985);
	glVertex2i(440, 1035);
	glVertex2i(410, 1035);
	glEnd();

	//windows  UP

	glBegin(GL_POLYGON);
	glColor3f(0.2,0.2,0.2);
	glVertex2i(375, 1040);
	glVertex2i(405, 1040);
	glVertex2i(405, 1090);
	glVertex2i(375, 1090);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.2,0.2,0.2);
	glVertex2i(410, 1040);
	glVertex2i(440, 1040);
	glVertex2i(440, 1090);
	glVertex2i(410, 1090);
	glEnd();


	// building 5

    glBegin(GL_POLYGON);
	glColor3f(0.502, 0.502, 0.502);
	glVertex2i(480, 970);
	glVertex2i(570, 970);
	glVertex2i(570, 1240);
	glVertex2i(480, 1240);
	glEnd();

	//back side
	glBegin(GL_POLYGON);
	glColor3f(0.412, 0.412, 0.412);
	glVertex2i(570, 970);
	glVertex2i(600, 970);
	glVertex2i(600, 1220);
	glVertex2i(570, 1240);
	glEnd();

	//windows  down
	glBegin(GL_POLYGON);
	glColor3f(0.2,0.2,0.2);
	glVertex2i(490, 1000);
	glVertex2i(520, 1000);
	glVertex2i(520, 1050);
	glVertex2i(490, 1050);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.2,0.2,0.2);
	glVertex2i(530, 1000);
	glVertex2i(560, 1000);
	glVertex2i(560, 1050);
	glVertex2i(530, 1050);
	glEnd();

	//windows  middle

	glBegin(GL_POLYGON);
	glColor3f(0.2,0.2,0.2);
	glVertex2i(490, 1080);
	glVertex2i(520, 1080);
	glVertex2i(520, 1130);
	glVertex2i(490, 1130);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.2,0.2,0.2);
	glVertex2i(530, 1080);
	glVertex2i(560, 1080);
	glVertex2i(560, 1130);
	glVertex2i(530, 1130);
	glEnd();

	//windows UP

	glBegin(GL_POLYGON);
	glColor3f(0.2,0.2,0.2);
	glVertex2i(490, 1160);
	glVertex2i(520, 1160);
	glVertex2i(520, 1210);
	glVertex2i(490, 1210);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.2,0.2,0.2);
	glVertex2i(530, 1160);
	glVertex2i(560, 1160);
	glVertex2i(560, 1210);
	glVertex2i(530, 1210);
	glEnd();

	// building 6

    glBegin(GL_POLYGON);
	glColor3f(0.753, 0.753, 0.753);
	glVertex2i(620, 970);
	glVertex2i(700, 970);
	glVertex2i(700, 1180);
	glVertex2i(620, 1180);
	glEnd();

	//back side
	glBegin(GL_POLYGON);
	glColor3f( 	0.663, 0.663, 0.663);
	glVertex2i(700, 970);
	glVertex2i(715, 970);
	glVertex2i(715, 1160);
	glVertex2i(700, 1180);
	glEnd();

	//windows  down
	glBegin(GL_POLYGON);
	glColor3f(0.2,0.2,0.2);
	glVertex2i(627, 1000);
	glVertex2i(657, 1000);
	glVertex2i(657, 1050);
	glVertex2i(627, 1050);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.2,0.2,0.2);
	glVertex2i(662, 1000);
	glVertex2i(692, 1000);
	glVertex2i(692, 1050);
	glVertex2i(662, 1050);
	glEnd();

	//windows  UP

	glBegin(GL_POLYGON);
	glColor3f(0.2,0.2,0.2);
	glVertex2i(627, 1080);
	glVertex2i(657, 1080);
	glVertex2i(657, 1130);
	glVertex2i(627, 1130);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.2,0.2,0.2);
	glVertex2i(662, 1080);
	glVertex2i(692, 1080);
	glVertex2i(692, 1130);
	glVertex2i(662, 1130);
	glEnd();


	// building 7

    glBegin(GL_POLYGON);
	glColor3f(0.941, 0.502, 0.502);
	glVertex2i(740, 970);
	glVertex2i(820, 970);
	glVertex2i(820, 1150);
	glVertex2i(740, 1150);
	glEnd();

	//back side
	glBegin(GL_POLYGON);
	glColor3f( 	0.804, 0.361, 0.36);
	glVertex2i(820, 970);
	glVertex2i(830, 970);
	glVertex2i(830, 1130);
	glVertex2i(820, 1150);
	glEnd();

	//windows  down
	glBegin(GL_POLYGON);
	glColor3f(0.2,0.2,0.2);
	glVertex2i(747, 1000);
	glVertex2i(777, 1000);
	glVertex2i(777, 1050);
	glVertex2i(747, 1050);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.2,0.2,0.2);
	glVertex2i(782, 1000);
	glVertex2i(812, 1000);
	glVertex2i(812, 1050);
	glVertex2i(782, 1050);
	glEnd();

	//windows  UP

	glBegin(GL_POLYGON);
	glColor3f(0.2,0.2,0.2);
	glVertex2i(747, 1080);
	glVertex2i(777, 1080);
	glVertex2i(777, 1130);
	glVertex2i(747, 1130);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.2,0.2,0.2);
	glVertex2i(782, 1080);
	glVertex2i(812, 1080);
	glVertex2i(812, 1130);
	glVertex2i(782, 1130);
	glEnd();

	// building 8 under sun

    glBegin(GL_POLYGON);
	glColor3f(0.600, 0.196, 0.800);
	glVertex2i(850, 970);
	glVertex2i(930, 970);
	glVertex2i(930, 1070);
	glVertex2i(850, 1070);
	glEnd();

	//back side
	glBegin(GL_POLYGON);
	glColor3f(0.580, 0.000, 0.827);
	glVertex2i(930, 970);
	glVertex2i(940, 970);
	glVertex2i(940, 1050);
	glVertex2i(930, 1070);
	glEnd();


	//windows  down
	glBegin(GL_POLYGON);
	glColor3f(0.2,0.2,0.2);
	glVertex2i(857, 995);
	glVertex2i(887, 995);
	glVertex2i(887, 1045);
	glVertex2i(857, 1045);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.2,0.2,0.2);
	glVertex2i(892, 995);
	glVertex2i(922, 995);
	glVertex2i(922, 1045);
	glVertex2i(892, 1045);
	glEnd();

	// building 9

    glBegin(GL_POLYGON);
	glColor3f(0.235, 0.702, 0.443);
	glVertex2i(960, 970);
	glVertex2i(1040, 970);
	glVertex2i(1040, 1180);
	glVertex2i(960, 1180);
	glEnd();

	//back side
	glBegin(GL_POLYGON);
	glColor3f( 0.180, 0.545, 0.34);
	glVertex2i(1040, 970);
	glVertex2i(1050, 970);
	glVertex2i(1050, 1160);
	glVertex2i(1040, 1180);
	glEnd();

	//windows  down
	glBegin(GL_POLYGON);
	glColor3f(0.2,0.2,0.2);
	glVertex2i(967, 1000);
	glVertex2i(997, 1000);
	glVertex2i(997, 1050);
	glVertex2i(967, 1050);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.2,0.2,0.2);
	glVertex2i(1002, 1000);
	glVertex2i(1032, 1000);
	glVertex2i(1032, 1050);
	glVertex2i(1002, 1050);
	glEnd();

	//windows  UP

	glBegin(GL_POLYGON);
	glColor3f(0.2,0.2,0.2);
	glVertex2i(967, 1080);
	glVertex2i(997, 1080);
	glVertex2i(997, 1130);
	glVertex2i(967, 1130);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.2,0.2,0.2);
	glVertex2i(1002, 1080);
	glVertex2i(1032, 1080);
	glVertex2i(1032, 1130);
	glVertex2i(1002, 1130);
	glEnd();


	// building 10

    glBegin(GL_POLYGON);
	glColor3f(0.125, 0.698, 0.667);
	glVertex2i(1070, 970);
	glVertex2i(1140, 970);
	glVertex2i(1140, 1160);
	glVertex2i(1070, 1160);
	glEnd();

	//back side
	glBegin(GL_POLYGON);
	glColor3f(0.000, 0.545, 0.545);
	glVertex2i(1140, 970);
	glVertex2i(1145, 970);
	glVertex2i(1145, 1140);
	glVertex2i(1140, 1160);
	glEnd();

	//windows  down
	glBegin(GL_POLYGON);
	glColor3f(0.2,0.2,0.2);
	glVertex2i(1075, 1000);
	glVertex2i(1105, 1000);
	glVertex2i(1105, 1050);
	glVertex2i(1075, 1050);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.2,0.2,0.2);
	glVertex2i(1110, 1000);
	glVertex2i(1140, 1000);
	glVertex2i(1140, 1050);
	glVertex2i(1110, 1050);
	glEnd();

	//windows  UP

	glBegin(GL_POLYGON);
	glColor3f(0.2,0.2,0.2);
	glVertex2i(1075, 1080);
	glVertex2i(1105, 1080);
	glVertex2i(1105, 1130);
	glVertex2i(1075, 1130);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.2,0.2,0.2);
	glVertex2i(1110, 1080);
	glVertex2i(1140, 1080);
	glVertex2i(1140, 1130);
	glVertex2i(1110, 1130);
	glEnd();

    // building 11

    glBegin(GL_POLYGON);
	glColor3f(0.282, 0.239, 0.545);
	glVertex2i(1180, 970);
	glVertex2i(1270, 970);
	glVertex2i(1270, 1240);
	glVertex2i(1180, 1240);
	glEnd();

	//back side
	glBegin(GL_POLYGON);
	glColor3f( 0.294, 0.000, 0.510);
	glVertex2i(1160, 970);
	glVertex2i(1180, 970);
	glVertex2i(1180, 1240);
	glVertex2i(1160, 1220);
	glEnd();

	//windows  down
	glBegin(GL_POLYGON);
	glColor3f(0.2,0.2,0.2);
	glVertex2i(1185, 1000);
	glVertex2i(1215, 1000);
	glVertex2i(1215, 1050);
	glVertex2i(1185, 1050);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.2,0.2,0.2);
	glVertex2i(1225, 1000);
	glVertex2i(1255, 1000);
	glVertex2i(1255, 1050);
	glVertex2i(1225, 1050);
	glEnd();

	//windows  middle

	glBegin(GL_POLYGON);
	glColor3f(0.2,0.2,0.2);
	glVertex2i(1185, 1080);
	glVertex2i(1215, 1080);
	glVertex2i(1215, 1130);
	glVertex2i(1185, 1130);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.2,0.2,0.2);
	glVertex2i(1225, 1080);
	glVertex2i(1255, 1080);
	glVertex2i(1255, 1130);
	glVertex2i(1225, 1130);
	glEnd();

	//windows UP

	glBegin(GL_POLYGON);
	glColor3f(0.2,0.2,0.2);
	glVertex2i(1185, 1160);
	glVertex2i(1215, 1160);
	glVertex2i(1215, 1210);
	glVertex2i(1185, 1210);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.2,0.2,0.2);
	glVertex2i(1225, 1160);
	glVertex2i(1255, 1160);
	glVertex2i(1255, 1210);
	glVertex2i(1225, 1210);
	glEnd();


    // building 12

    glBegin(GL_POLYGON);
	glColor3f(0.000, 0.545, 0.545);
	glVertex2i(1310, 970);
	glVertex2i(1400, 970);
	glVertex2i(1400, 1220);
	glVertex2i(1310, 1220);
	glEnd();

	//back side
	glBegin(GL_POLYGON);
	glColor3f(0.000, 0.502, 0.502);
	glVertex2i(1290, 970);
	glVertex2i(1310, 970);
	glVertex2i(1310, 1220);
	glVertex2i(1290, 1205);
	glEnd();

	//windows  down
	glBegin(GL_POLYGON);
	glColor3f(0.2,0.2,0.2);
	glVertex2i(1315, 995);
	glVertex2i(1345, 995);
	glVertex2i(1345, 1045);
	glVertex2i(1315, 1045);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.2,0.2,0.2);
	glVertex2i(1355, 995);
	glVertex2i(1385, 995);
	glVertex2i(1385, 1045);
	glVertex2i(1355, 1045);
	glEnd();

	//windows  middle

	glBegin(GL_POLYGON);
	glColor3f(0.2,0.2,0.2);
	glVertex2i(1315, 1075);
	glVertex2i(1345, 1075);
	glVertex2i(1345, 1125);
	glVertex2i(1315, 1125);
	glEnd();

	glBegin(GL_POLYGON);
  glColor3f(0.2,0.2,0.2);
	glVertex2i(1355, 1075);
	glVertex2i(1385, 1075);
	glVertex2i(1385, 1125);
	glVertex2i(1355, 1125);
	glEnd();

	//windows UP

	glBegin(GL_POLYGON);
	glColor3f(0.2,0.2,0.2);
	glVertex2i(1315, 1155);
	glVertex2i(1345, 1155);
	glVertex2i(1345, 1205);
	glVertex2i(1315, 1205);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.2,0.2,0.2);
	glVertex2i(1355, 1155);
	glVertex2i(1385, 1155);
	glVertex2i(1385, 1205);
	glVertex2i(1355, 1205);
	glEnd();

    // building 13

    glBegin(GL_POLYGON);
	glColor3f(0.855, 0.647, 0.125);
	glVertex2i(1440, 970);
	glVertex2i(1530, 970);
	glVertex2i(1530, 1100);
	glVertex2i(1440, 1100);
	glEnd();

	//back side
	glBegin(GL_POLYGON);
	glColor3f(0.722, 0.525, 0.043);
	glVertex2i(1420, 970);
	glVertex2i(1440, 970);
	glVertex2i(1440, 1100);
	glVertex2i(1420, 1080);
	glEnd();

		//windows  down
	glBegin(GL_POLYGON);
	glColor3f(0.2,0.2,0.2);
	glVertex2i(1450, 988);
	glVertex2i(1480, 988);
	glVertex2i(1480, 1038);
	glVertex2i(1450, 1038);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.2,0.2,0.2);
	glVertex2i(1490, 988);
	glVertex2i(1520, 988);
	glVertex2i(1520, 1038);
	glVertex2i(1490, 1038);
	glEnd();

	//windows  middle

	glBegin(GL_POLYGON);
	glColor3f(0.2,0.2,0.2);
	glVertex2i(1450, 1043);
	glVertex2i(1480, 1043);
	glVertex2i(1480, 1098);
	glVertex2i(1450, 1098);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.2,0.2,0.2);
	glVertex2i(1490, 1043);
	glVertex2i(1520, 1043);
	glVertex2i(1520, 1098);
	glVertex2i(1490, 1098);
	glEnd();

    // building 14

    glBegin(GL_POLYGON);
	glColor3f(0.753, 0.753, 0.753);
	glVertex2i(1570, 970);
	glVertex2i(1690, 970);
	glVertex2i(1690, 1240);
	glVertex2i(1570, 1240);
	glEnd();

	//back side
	glBegin(GL_POLYGON);
	glColor3f(0.663, 0.663, 0.663);
	glVertex2i(1545, 970);
	glVertex2i(1570, 970);
	glVertex2i(1570, 1240);
	glVertex2i(1545, 1220);
	glEnd();

	//windows  down
	glBegin(GL_POLYGON);
	glColor3f(0.2,0.2,0.2);
	glVertex2i(1590, 1000);
	glVertex2i(1620, 1000);
	glVertex2i(1620, 1050);
	glVertex2i(1590, 1050);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.2,0.2,0.2);
	glVertex2i(1640, 1000);
	glVertex2i(1670, 1000);
	glVertex2i(1670, 1050);
	glVertex2i(1640, 1050);
	glEnd();

	//windows  middle

	glBegin(GL_POLYGON);
	glColor3f(0.2,0.2,0.2);
	glVertex2i(1590, 1080);
	glVertex2i(1620, 1080);
	glVertex2i(1620, 1130);
	glVertex2i(1590, 1130);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.2,0.2,0.2);
	glVertex2i(1640, 1080);
	glVertex2i(1670, 1080);
	glVertex2i(1670, 1130);
	glVertex2i(1640, 1130);
	glEnd();

	//windows UP

	glBegin(GL_POLYGON);
	glColor3f(0.2,0.2,0.2);
	glVertex2i(1590, 1160);
	glVertex2i(1620, 1160);
	glVertex2i(1620, 1210);
	glVertex2i(1590, 1210);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.2,0.2,0.2);
	glVertex2i(1640, 1160);
	glVertex2i(1670, 1160);
	glVertex2i(1670, 1210);
	glVertex2i(1640, 1210);
	glEnd();


    // building 15

    glBegin(GL_POLYGON);
	glColor3f(0.235, 0.702, 0.443);
	glVertex2i(1730, 970);
	glVertex2i(1820, 970);
	glVertex2i(1820, 1190);
	glVertex2i(1730, 1190);
	glEnd();

	//back side
	glBegin(GL_POLYGON);
	glColor3f(0.180, 0.545, 0.341);
	glVertex2i(1705, 970);
	glVertex2i(1730, 970);
	glVertex2i(1730, 1190);
	glVertex2i(1705, 1170);
	glEnd();

	//windows  down
	glBegin(GL_POLYGON);
	glColor3f(0.2,0.2,0.2);
	glVertex2i(1740, 1000);
	glVertex2i(1770, 1000);
	glVertex2i(1770, 1050);
	glVertex2i(1740, 1050);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.2,0.2,0.2);
	glVertex2i(1780, 1000);
	glVertex2i(1810, 1000);
	glVertex2i(1810, 1050);
	glVertex2i(1780, 1050);
	glEnd();





    // building 16

    glBegin(GL_POLYGON);
	glColor3f(0.502, 0.502, 0.502);
	glVertex2i(1870, 970);
	glVertex2i(1990, 970);
	glVertex2i(1990, 1300);
	glVertex2i(1870, 1300);
	glEnd();

	//back side
	glBegin(GL_POLYGON);
	glColor3f(0.412, 0.412, 0.412);
	glVertex2i(1840, 970);
	glVertex2i(1870, 970);
	glVertex2i(1870, 1300);
	glVertex2i(1840, 1270);
	glEnd();

	//windows  down
	glBegin(GL_POLYGON);
	glColor3f(0.2,0.2,0.2);
	glVertex2i(1890, 1000);
	glVertex2i(1920, 1000);
	glVertex2i(1920, 1050);
	glVertex2i(1890, 1050);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.2,0.2,0.2);
	glVertex2i(1940, 1000);
	glVertex2i(1970, 1000);
	glVertex2i(1970, 1050);
	glVertex2i(1940, 1050);
	glEnd();

	//windows  middle

	glBegin(GL_POLYGON);
	glColor3f(0.2,0.2,0.2);
	glVertex2i(1890, 1080);
	glVertex2i(1920, 1080);
	glVertex2i(1920, 1130);
	glVertex2i(1890, 1130);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.2,0.2,0.2);
	glVertex2i(1940, 1080);
	glVertex2i(1970, 1080);
	glVertex2i(1970, 1130);
	glVertex2i(1940, 1130);
	glEnd();

	//windows UP

	glBegin(GL_POLYGON);
	glColor3f(0.2,0.2,0.2);
	glVertex2i(1890, 1160);
	glVertex2i(1920, 1160);
	glVertex2i(1920, 1210);
	glVertex2i(1890, 1210);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.2,0.2,0.2);
	glVertex2i(1940, 1160);
	glVertex2i(1970, 1160);
	glVertex2i(1970, 1210);
	glVertex2i(1940, 1210);
	glEnd();

	//windows UP

	glBegin(GL_POLYGON);
	if(night==1)
    {
        glColor3f(0.933, 0.910, 0.667);
    }
	else{glColor3f(0.2,0.2,0.2);}
	glVertex2i(1890, 1235);
	glVertex2i(1920, 1235);
	glVertex2i(1920, 1270);
	glVertex2i(1890, 1270);
	glEnd();

	glBegin(GL_POLYGON);
	if(night==1)
    {
        glColor3f(0.933, 0.910, 0.667);
    }
	else{glColor3f(0.2,0.2,0.2);}
	glVertex2i(1940, 1235);
	glVertex2i(1970, 1235);
	glVertex2i(1970, 1270);
	glVertex2i(1940, 1270);
	glEnd();


}


	// PLANE:

void Plane()
{
    // Plane main body:
    glBegin(GL_POLYGON);
    glColor3f(0.737, 0.561, 0.561);
    glVertex2i(1350,1340);
	glVertex2i(1350,1395);
	glVertex2i(1170,1395);
	glVertex2i(1170,1340);

	glEnd();
	 //plane back triangle:
    glBegin(GL_TRIANGLES);
    glColor3f(0.737, 0.561, 0.561);
    glVertex2i(1170,1340);
    glVertex2i(1170,1395);
    glVertex2i(1070,1340);
    glEnd();


     //plane front triangle:
    glBegin(GL_TRIANGLES);
    glColor3f(0.737, 0.561, 0.561);
    glVertex2i(1350,1340);
    glVertex2i(1390,1340);
    glVertex2i(1350,1395);
    glEnd();

    //Plane bottom triangle:
    glBegin(GL_TRIANGLES);
    glColor3f(0.647, 0.165, 0.165);
    glVertex2i(1270,1350);
	glVertex2i(1220,1360);
	glVertex2i(1170,1310);

    glEnd();

    //Plane top triangle:
    glBegin(GL_TRIANGLES);
    glColor3f(0.647, 0.165, 0.165);
    glVertex2i(1200,1380);
	glVertex2i(1230,1395);
	glVertex2i(1150,1440);

    glEnd();

    // plane back small triangle:
    glBegin(GL_TRIANGLES);
    glColor3f(0.647, 0.165, 0.165);
    glVertex2i(1100,1340);
	glVertex2i(1113,1360);
	glVertex2i(1085,1370);

    glEnd();

    // plane front window:
    glBegin(GL_QUADS);
    if(night==1||rainhappen==1||rainhappen==1&&night==1)
    {
        glColor3f(1.000, 0.973, 0.863);

    }
    else{
    glColor3f(0.3, 0.3, 0.3);}
    glVertex2i(1330,1360);
	glVertex2i(1330,1370);
	glVertex2i(1290,1370);
	glVertex2i(1290,1360);

    glEnd();


}


void river() {


	glBegin(GL_POLYGON); // River

	glColor3f(0.686, 0.933, 0.933);
	glVertex2i(0, 200);

	if(rainhappen==1||rainhappen==1&&night==1)
    {
        glColor3f(0.663, 0.663, 0.663);
    }

    else if(night==1)
    {
        glColor3f(0.000, 0.000, 0.545);
    }

	else{glColor3f(1.4, .8, .949);}
	glVertex2i(1000, 200);

	glColor3f(0.106, 1.69, .918);
	glVertex2i(2000, 200);

    glColor3f(0.733, 0.886, .953);
	glVertex2i(2000, 970);

	glColor3f(0.733, 0.886, .953);
	glVertex2i(1000, 970);

	if(rainhappen==1||rainhappen==1&&night==1)
    {
        glColor3f(0.663, 0.663, 0.663);
    }
    if(test==1)
    {
        glColor3f(0.733, 0.886, .953);
    }
	glVertex2i(0, 970);

	glEnd();
    }




void nodirPar()
{
   glColor3f(0.4, 0.4, 0.4);


}



void leftBoat()
{
     //left side boat deck
    glBegin(GL_POLYGON);
    glColor3f(0.663, 0.663, 0.663);




	glVertex2i(700,800);
    glVertex2i(880,920);
glColor3f(0.78, 0.78, 0.78);
    glVertex2i(300,920);

 glColor3f(0.402, 0.402, 0.402);
    glVertex2i(300,800);

	glEnd();

	//left boat 1st floor

	glBegin(GL_POLYGON);
    glColor3f(0.439, 0.502, 0.565);

	glVertex2i(700,920);
    glVertex2i(650,980);

    glVertex2i(350,980);

    glVertex2i(350,920);



	glEnd();

	// left boat 2nd floor


glBegin(GL_POLYGON);
    glColor3f(0.373, 0.620, 0.627);

	glVertex2i(620,980);
    glVertex2i(570,1030);

    glVertex2i(390,1030);
    //glVertex2i(600,1030);

    glVertex2i(390,980);
    // glVertex2i(420,1030);


	glEnd();

	//left boat top floor

	glBegin(GL_POLYGON);
    glColor3f(0.282, 0.239, 0.545);

	glVertex2i(550,1030);
    glVertex2i(520,1070);

    glVertex2i(420,1070);

    glVertex2i(420,1030);


	glEnd();

	//left boat Window of 1st floor:


	glBegin(GL_POLYGON);

	if(night==1)
    {
        glColor3f(0.933, 0.910, 0.667);
    }
	else{
    glColor3f(0.957, 0.643, 0.376);}

	glVertex2i(580,940);
    glVertex2i(580,970);
    glVertex2i(545,970);
    glVertex2i(545,940);

glEnd();

glBegin(GL_POLYGON);

if(night==1)
    {
        glColor3f(0.933, 0.910, 0.667);
    }
	else{
    glColor3f(0.957, 0.643, 0.376);}

	glVertex2i(510,940);
    glVertex2i(510,970);
    glVertex2i(475,970);
    glVertex2i(475,940);


glEnd();

glBegin(GL_POLYGON);

   if(night==1)
    {
        glColor3f(0.933, 0.910, 0.667);
    }
	else{
    glColor3f(0.957, 0.643, 0.376);}

	glVertex2i(445,940);
    glVertex2i(445,970);
    glVertex2i(410,970);
    glVertex2i(410,940);

glEnd();

//Left Boat Window 2nd Floor:

glBegin(GL_POLYGON);

if(night==1)
    {
        glColor3f(0.933, 0.910, 0.667);
    }
	else{
    glColor3f(0.647, 0.165, 0.165);}

	glVertex2i(550,990);
    glVertex2i(550,1020);
    glVertex2i(510,1020);
    glVertex2i(510,990);

	glEnd();


glBegin(GL_POLYGON);

   if(night==1)
    {
        glColor3f(0.933, 0.910, 0.667);
    }
	else{
    glColor3f(0.647, 0.165, 0.165);}

	glVertex2i(475,990);
    glVertex2i(475,1020);
    glVertex2i(435,1020);
    glVertex2i(435,990);

	glEnd();


//Left Boat Window top floor:

	glBegin(GL_POLYGON);

	if(night==1)
    {
        glColor3f(0.933, 0.910, 0.667);
    }
	else{
    glColor3f(1.000, 1.545, 1.545);}

	glVertex2i(500,1040);
    glVertex2i(500,1055);
    glVertex2i(470,1055);
    glVertex2i(470,1040);

	glEnd();

}

void rightBoat()
{
//RIGHT BOAT deck:
  glBegin(GL_POLYGON);
    glColor3f(0.412, 0.412, 0.412);

	glVertex2i(1750,900);
    glVertex2i(1750,960);
    glVertex2i(1550,960);

    glColor3f(0.502, 0.502, 0.502);
    glVertex2i(1600,900);

	glEnd();

// right boat 1st floor

	glBegin(GL_POLYGON);
    glColor3f(0.439, 0.502, 0.565);

	glVertex2i(1720,960);
    glVertex2i(1720,1000);
    glVertex2i(1615,1000);
    glVertex2i(1590,960);

	glEnd();

//  RIGHT BOAT TOP FLOOR:

	glBegin(GL_POLYGON);
    glColor3f(0.184, 0.310, 0.310);

	glVertex2i(1700,1000);
    glVertex2i(1700,1030);
    glVertex2i(1640,1030);
    glVertex2i(1625,1000);

	glEnd();

	// RIGHT boat window 1st floor:

	glBegin(GL_POLYGON);

	if(night==1)
    {
        glColor3f(0.933, 0.910, 0.667);
    }
	else{
    glColor3f(1.439, 1.502, 1.565);}

	glVertex2i(1705,970);
    glVertex2i(1705,990);
    glVertex2i(1675,990);
    glVertex2i(1675,970);

	glEnd();

	glBegin(GL_POLYGON);
	if(night==1)
    {
        glColor3f(0.933, 0.910, 0.667);
    }
	else{
    glColor3f(1.439, 1.502, 1.565);}

	glVertex2i(1650,970);
    glVertex2i(1650,990);
    glVertex2i(1620,990);
    glVertex2i(1620,970);

	glEnd();

	//WINDOW RIGHT BOAT TOP FLOOR

	glBegin(GL_POLYGON);

	if(night==1)
    {
        glColor3f(0.933, 0.910, 0.667);
    }
	else{
    glColor3f(1.439, 1.502, 1.565);}

	glVertex2i(1680,1005);
    glVertex2i(1680,1020);
    glVertex2i(1660,1020);
    glVertex2i(1660,1005);

	glEnd();


}

 void road ()
 {
     glBegin(GL_QUADS);//only road

	glColor3f(0.412, 0.412, 0.412);

	glVertex2i(0,15);
	glVertex2i(2000,50);
	glVertex2i(2000,550);
	glVertex2i(0,500);
	glEnd();

	// 3D testing



	//making 3d lining front side



	// white on under black

	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(150,2);
	glVertex2i(1850,5);
	glVertex2i(1850,45);
	glVertex2i(150,17);
	glEnd();

	//black

	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2i(300,2);
	glVertex2i(1700,5);
	glVertex2i(1700,45);
	glVertex2i(300,23);
	glEnd();


	glBegin(GL_POLYGON);// black
	glColor3f(0.0, 0.0, 0.0);
	glVertex2i(600,2);
	glVertex2i(1400,5);
	glVertex2i(1400,43);
	glVertex2i(600,27);
	glEnd();

	glBegin(GL_POLYGON);//white
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(750,2);
	glVertex2i(1250,3);
	glVertex2i(1250,41);
	glVertex2i(750,30);
	glEnd();

	glBegin(GL_POLYGON);//black
	glColor3f(0.0, 0.0, 0.0);
	glVertex2i(900,2);
	glVertex2i(1100,3);
	glVertex2i(1100,41);
	glVertex2i(900,35);
	glEnd();




	// divider line from right side

	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,1.0);
	glVertex2i(1800,250);
	glVertex2i(1950,260);
	glVertex2i(1930,270);
	glVertex2i(1780,265);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,1.0);
	glVertex2i(1400,230);
	glVertex2i(1550,240);
	glVertex2i(1530,250);
	glVertex2i(1380,245);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,1.0);
	glVertex2i(1000,210);
	glVertex2i(1150,220);
	glVertex2i(1130,230);
	glVertex2i(980,225);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,1.0);
	glVertex2i(600,190);
	glVertex2i(750,200);
	glVertex2i(730,210);
	glVertex2i(580,205);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,1.0);
	glVertex2i(200,170);
	glVertex2i(350,180);
	glVertex2i(330,190);
	glVertex2i(180,185);
    glEnd();


    // footpath beside river


    glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,1.0);
	glVertex2i(0,500);
	glVertex2i(2000,550);
	glVertex2i(2000,600);
	glVertex2i(0,550);
    glEnd();

    glBegin(GL_LINE_LOOP);
	glColor3f(0.0,0.0,0.0);
	glVertex2i(0,500);
	glVertex2i(2000,550);
	glVertex2i(2000,600);
	glVertex2i(0,550);
    glEnd();


    // divder coloring Black

    glBegin(GL_POLYGON);
	glColor3f(0.0,0.0,0.0);
	glVertex2i(150,505);
	glVertex2i(1850,545);
	glVertex2i(1850,595);
	glVertex2i(150,555);
    glEnd();

    // divider coloring white

    glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,1.0);
	glVertex2i(300,505);
	glVertex2i(1700,540);
	glVertex2i(1700,595);
	glVertex2i(300,560);
    glEnd();

    // divider coloring black 2

    glBegin(GL_POLYGON);
	glColor3f(0.0,0.0,0.0);
	glVertex2i(450,503);
	glVertex2i(1550,535);
	glVertex2i(1550,595);
	glVertex2i(450,565);
    glEnd();

    // divider coloring white 2

    glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,1.0);
	glVertex2i(600,508);
	glVertex2i(1400,531);
	glVertex2i(1400,593);
	glVertex2i(600,569);
    glEnd();

    // divider coloring white 3

    glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,1.0);
	glVertex2i(900,513);
	glVertex2i(1100,521);
	glVertex2i(1100,585);
	glVertex2i(900,578);
    glEnd();


 }



    void lamppost(){

    //left big lamppost stand
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2i(320,560);
	glVertex2i(340,560);
	glVertex2i(340,800);
	glVertex2i(320,800);
    glEnd();

    //middle big lamppost stand
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2i(1020,580);
	glVertex2i(1040,580);
	glVertex2i(1040,820);
	glVertex2i(1020,820);
    glEnd();


    //right big lamppost stand
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2i(1640,593);
	glVertex2i(1660,593);
	glVertex2i(1660,833);
	glVertex2i(1640,833);
    glEnd();


    //left lamppost stand left side
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2i(320,690);
	glVertex2i(320,700);
	glVertex2i(260,700);
	glVertex2i(260,690);
    glEnd();

   //left lamppost stand right side
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2i(320,690);
	glVertex2i(400,690);
	glVertex2i(400,700);
	glVertex2i(320,700);
    glEnd();

    //left lamppost stand lefttop side
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2i(260,690);
	glVertex2i(270,690);
	glVertex2i(270,750);
	glVertex2i(260,750);
    glEnd();

     //left lamppost stand righttop side
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2i(390,700);
	glVertex2i(400,700);
	glVertex2i(400,760);
	glVertex2i(390,760);
    glEnd();

     //middle lamppost stand left side
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2i(1020,710);
	glVertex2i(1020,720);
	glVertex2i(960,720);
	glVertex2i(960,710);
    glEnd();

    //middle lamppost stand right side
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2i(1020,710);
	glVertex2i(1100,710);
	glVertex2i(1100,720);
	glVertex2i(1020,720);
    glEnd();


     //middle lamppost stand lefttop side
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2i(960,720);
	glVertex2i(970,720);
	glVertex2i(970,780);
	glVertex2i(960,780);
    glEnd();



     //middle lamppost stand righttop side
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2i(1090,720);
	glVertex2i(1100,720);
	glVertex2i(1100,780);
	glVertex2i(1090,780);
    glEnd();

    //right lamppost stand left side
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2i(1640,730);
	glVertex2i(1640,740);
	glVertex2i(1580,740);
	glVertex2i(1580,730);
    glEnd();

    //right lamppost stand right side
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2i(1725,730);
	glVertex2i(1725,740);
	glVertex2i(1660,740);
	glVertex2i(1660,730);
    glEnd();


      //right lamppost stand lefttop side

     //right lamppost stand righttop side
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2i(1715,730);
	glVertex2i(1725,730);
	glVertex2i(1725,790);
	glVertex2i(1715,790);
    glEnd();

    //big left lamppost

    glBegin(GL_POLYGON);
    if (rainhappen==1||night==1)
        {
            glColor3f(1.000, 0.843, 0.000);}
            else{
	glColor3f(0.863, 0.863, 0.863);}

	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=40;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x+330,y+800 );
	}
	glEnd();
    //big middle lamppost

    glBegin(GL_POLYGON);
    if (rainhappen==1||night==1)
        {
            glColor3f(1.000, 0.843, 0.000);}
	else{glColor3f(0.863, 0.863, 0.863);}


	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=40;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x+1030,y+822 );
	}
	glEnd();

	//big right lamppost

	glBegin(GL_POLYGON);
	if (rainhappen==1||night==1)
        {

            glColor3f(1.000, 0.843, 0.000);}
	else{glColor3f(0.863, 0.863, 0.863);}
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=40;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x+1650,y+830 );
	}
	glEnd();

	// left left lamppost

	glBegin(GL_POLYGON);
	if(night==1)
    {
        glColor3f(0.933, 0.910, 0.667);
    }
	else{
    glColor3f(0.863, 0.863, 0.863);}


	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=30;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x+263,y+755 );
	}
	glEnd();

    //left right lamppost

    glBegin(GL_POLYGON);
    if(night==1)
    {
        glColor3f(0.933, 0.910, 0.667);
    }
	else{
    glColor3f(0.863, 0.863, 0.863);}


	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=30;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x+396,y+760 );
	}
	glEnd();


    // middle left lamppost
    glBegin(GL_POLYGON);
   if(night==1)
    {
        glColor3f(0.933, 0.910, 0.667);
    }
	else{
    glColor3f(0.863, 0.863, 0.863);}


	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=30;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x+961,y+782 );
	}
	glEnd();

	//middle right lamppost

	glBegin(GL_POLYGON);
    if(night==1)
    {
        glColor3f(0.933, 0.910, 0.667);
    }
	else{
    glColor3f(0.863, 0.863, 0.863);}


	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=30;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x+1100,y+782 );
	}
	glEnd();


     // right left lamppost

     glBegin(GL_POLYGON);

    glColor3f(0.863, 0.863, 0.863);

	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=30;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x+1575,y+798);
	}
	glEnd();

	// right right lamppost

	glBegin(GL_POLYGON);
    if(night==1)
    {
        glColor3f(0.933, 0.910, 0.667);
    }
	else{
    glColor3f(0.863, 0.863, 0.863);}


	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=30;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x+1720,y+798);
	}
	glEnd();
        }




 void rightCar()
{

    glBegin(GL_QUADS);
    glColor3f(0.294, 0.000, 0.510);
    glVertex2i(1500,150);
	glVertex2i(1900,150);
	glVertex2i(1900,300);
	glVertex2i(1500,300);
    glEnd();

    //2nd floor
    glBegin(GL_QUADS);
    glColor3f(0.502, 0.000, 0.502);
    glVertex2i(1900,300);
	glVertex2i(1900,400);
	glVertex2i(1600,400);
	glVertex2i(1500,300);

    glEnd();

    //front window
    glBegin(GL_TRIANGLES);

    glColor3f(0.690, 0.878, 0.902);

    glVertex2i(1600,300);
	glVertex2i(1600,400);
	glVertex2i(1500,300);

    glEnd();

    //door
    glBegin(GL_QUADS);
    glColor3f(0.690, 0.878, 0.902);
    glVertex2i(1600,300);
	glVertex2i(1600,200);
	glVertex2i(1620,200);
	glVertex2i(1620,300);

    glEnd();

    //left window
    glBegin(GL_QUADS);
    if(night==1)
    {
        glColor3f(0.933, 0.910, 0.667);
    }
	else{
    glColor3f(0.690, 0.878, 0.902);
    }
     glVertex2i(1640,320);
	glVertex2i(1730,320);
	glVertex2i(1730,380);
	glVertex2i(1640,380);
    glEnd();

   //right window
    glBegin(GL_QUADS);
   if(night==1)
    {
        glColor3f(0.933, 0.910, 0.667);
    }
	else{
    glColor3f(0.690, 0.878, 0.902);
    }
    glVertex2i(1770,320);
	glVertex2i(1860,320);
	glVertex2i(1860,380);
	glVertex2i(1770,380);
    glEnd();

    // chaakka

   glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
    glColor3f(0.000, 0.000, 0.000);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=40;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x+1600,y+150 );
	}
	glEnd();

	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
    glColor3f(0.000, 0.000, 0.000);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=40;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x+1800,y+150 );
	}
	glEnd();


	 //headlight
    glBegin(GL_QUADS);
    if(night==1||rainhappen==1)
    {
        glColor3f(0.933, 0.910, 0.667);
    }
	else{
    glColor3f(0.690, 0.878, 0.902);}
    glVertex2i(1500,185);
	glVertex2i(1488,185);
	glVertex2i(1488,215);
	glVertex2i(1500,215);
    glEnd();

}


   void leftCar()
   {


   //1st floor

    glBegin(GL_QUADS);
    glColor3f(0.000, 0.000, 0.502);
    glVertex2i(50,350);
	glVertex2i(450,350);
	glVertex2i(450,500);
	glVertex2i(50,500);
    glEnd();

    //2nd floor
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
    glVertex2i(50,600);
	glVertex2i(50,500);
	glVertex2i(450,500);
	glVertex2i(350,600);
    glEnd();

    //front window
    glBegin(GL_QUADS);
    glColor3f(0.690, 0.878, 0.902);

    glVertex2i(350,500);
	glVertex2i(450,500);
	glVertex2i(450,600);
	glVertex2i(350,600);

    glEnd();




    //front window top
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
    glVertex2i(450,600);
	glVertex2i(350,600);
	glVertex2i(350,580);
	glVertex2i(450,580);

    glEnd();

    //door
    glBegin(GL_QUADS);
    glColor3f(0.690, 0.878, 0.902);
    glVertex2i(350,500);
	glVertex2i(330,500);
	glVertex2i(330,400);
	glVertex2i(350,400);

    glEnd();
    //right window
    glBegin(GL_QUADS);
   if(night==1)
    {
        glColor3f(0.933, 0.910, 0.667);
    }
	else{
    glColor3f(0.690, 0.878, 0.902);
    }
    glVertex2i(260,520);
	glVertex2i(320,520);
	glVertex2i(320,580);
	glVertex2i(260,580);
    glEnd();

    //middle window
    glBegin(GL_QUADS);
   if(night==1)
    {
        glColor3f(0.933, 0.910, 0.667);
    }
	else{
    glColor3f(0.690, 0.878, 0.902);
    }
    glVertex2i(170,520);
	glVertex2i(230,520);
	glVertex2i(230,580);
	glVertex2i(170,580);
    glEnd();

    //left window
    glBegin(GL_QUADS);
   if(night==1)
    {
        glColor3f(0.933, 0.910, 0.667);
    }
	else{
    glColor3f(0.690, 0.878, 0.902);
    }
    glVertex2i(80,520);
	glVertex2i(140,520);
	glVertex2i(140,580);
	glVertex2i(80,580);
    glEnd();



   //chakka
	glColor3f(0.0,0.0,0.0);
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
    glColor3f(0.000, 0.000, 0.000);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=45;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x+150,y+350 );
	}
	glEnd();

	glColor3f(0.0,0.0,0.0);
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
    glColor3f(0.000, 0.000, 0.000);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=45;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x+350,y+350 );
	}
	glEnd();

	//headlight
	glBegin(GL_QUADS);
     if(night==1||rainhappen==1)
    {
        glColor3f(0.933, 0.910, 0.667);
    }
	else{
    glColor3f(0.690, 0.878, 0.902);}
    glVertex2i(450,400);
	glVertex2i(460,400);
	glVertex2i(460,430);
	glVertex2i(450,430);
    glEnd();
   }

void middleCar()
  {
    //1st floor
    glBegin(GL_QUADS);
    glColor3f(0.647, 0.165, 0.165);
    glVertex2i(1150,450);
	glVertex2i(1450,450);
	glVertex2i(1420,550);
	glVertex2i(1150,550);
    glEnd();
    //2nd floor
    glBegin(GL_QUADS);
    glColor3f(0.502, 0.502, 0.000);
    glVertex2i(1200,550);
	glVertex2i(1370,550);
	glVertex2i(1340,620);
	glVertex2i(1230,620);
    glEnd();

    //door
    glBegin(GL_QUADS);
    glColor3f(0.184, 0.310, 0.310);
    glVertex2i(1290,550);
	glVertex2i(1280,550);
	glVertex2i(1280,470);
	glVertex2i(1290,470);
    glEnd();
    //left window

    glBegin(GL_QUADS);
    if(night==1)
    {
        glColor3f(0.933, 0.910, 0.667);
    }
	else{
    glColor3f(0.690, 0.878, 0.902);
    }

	glVertex2i(1330,570);
    glVertex2i(1330,600);
    glVertex2i(1290,600);
    glVertex2i(1290,570);

	glEnd();

	 //right window

    glBegin(GL_QUADS);
    if(night==1)
    {
        glColor3f(0.933, 0.910, 0.667);
    }
	else{
    glColor3f(0.690, 0.878, 0.902);
    }

	glVertex2i(1275,570);
    glVertex2i(1275,600);
    glVertex2i(1235,600);
    glVertex2i(1235,570);

	glEnd();

    //wheel
    glColor3f(0.0,0.0,0.0);
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
    glColor3f(0.000, 0.000, 0.000);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=30;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x+1230,y+440 );
	}
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
    glColor3f(0.000, 0.000, 0.000);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=30;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x+1365,y+450 );
	}
	glEnd();

	//headlight
  glBegin(GL_QUADS);
  if(night==1||rainhappen==1)
    {
        glColor3f(0.933, 0.910, 0.667);
    }
	else{
    glColor3f(0.690, 0.878, 0.902);}
    glVertex2i(1443,475);
	glVertex2i(1450,475);
	glVertex2i(1450,490);
	glVertex2i(1437,490);
    glEnd();


}

void keyboard(unsigned char key, int x, int y)
{
    switch (key)
    {
      case 27:     // ESC key
         exit(0);
         break;
    }



}

void myDisplay(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);

	normalSky();


    glPushMatrix();

    sunMaking();
    glPopMatrix();



	river();
	if (carBoatStarts==1)
    {

       glPushMatrix();
	   glTranslatef( _lcloudMove,0.0f ,0.0f);
       leftCloud();
       glPopMatrix();

       glPushMatrix();
	   glTranslatef( _rcloudMove,0.0f ,0.0f);
       rightCloud();
       glPopMatrix();
    }

	if (carBoatStarts==1)
    {



    glPushMatrix();
	glTranslatef(_planeMove, 0.0f, 0.0f);
    Plane();
    glPopMatrix();
    }
    else if(carBoatStarts==0)
        {
            rightCloud();
            leftCloud();
            Plane();
        }


	building();

	nodirPar();


    if (carBoatStarts==1)
    {
	glPushMatrix();
	glTranslatef(_rightShipMove, 0.0f, 0.0f);
	rightBoat();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(_leftShipMove, 0.0f, 0.0f);
     leftBoat();
	glPopMatrix();
    }
    else if(carBoatStarts==0)
    {
      rightBoat();
      leftBoat();
    }


	road();

	lamppost();


if (carBoatStarts==1)
    {
	glPushMatrix();
	glTranslatef(_middleCarMove, 0.0f, 0.0f);
	middleCar();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(_leftCarMove, 0.0f, 0.0f);
    leftCar();
	glPopMatrix();



	glPushMatrix();
	glTranslatef(_rightCarMove, 0.0f, 0.0f);
	rightCar();
	glPopMatrix();
    }
    else if(carBoatStarts==0)
    {
        middleCar();
        leftCar();
        rightCar();                                                                                                                                                    //S. M. Tanvir Abid AIUB 14-2

    }



if(rainhappen==1)
    {


       glPushMatrix();
	   glTranslatef(0.0f ,_raining ,0.0f);
//
	   glPopMatrix();
    }


	glutPostRedisplay();
	glutSwapBuffers();
}

void update(int value) {

    _planeMove+=15;


    if(_planeMove>1000)
    {
        _planeMove=-1300;
     }


     _middleCarMove+=10;
      if(_middleCarMove>1600)
    {
      _middleCarMove=-1400;
     }

      _leftCarMove+=6;
      if(_leftCarMove>2000)
    {
       _leftCarMove=-1000;
     }


    _rightCarMove-=8;
    if(_rightCarMove<-2000)
    {
        _rightCarMove=500;
    }

 _leftShipMove+=5;
 if(_leftShipMove>2000)
    {
        _leftShipMove=-1000;
     }


 _rightShipMove-=12;
 if(_rightShipMove<-2000)
    {
        _rightShipMove=500;
    }



     _lcloudMove+=2;
     if(_lcloudMove>2000)
    {
        _lcloudMove=-400;
    }

    _rcloudMove+=2;
    if(_rcloudMove>600)
    {
        _rcloudMove=-2000;
    }



	glutPostRedisplay(); //Notify GLUT that the display has changed

	glutTimerFunc(20, update, 0); //Notify GLUT to call update again in 20 milliseconds
}

int main(int argc, char** argv)
 {

     cout<<"********** Running project version 26.1.3.5**************"<<endl;
     cout<<"********** Project for Computer Graphics**************"<<endl;
     cout<<"********** presented by**************"<<endl<<endl;
     cout<< " ABID, S. M. TANVIR--  AMERICAN INTERNATIONAL UNIVERSITY-BANGLADESH __COMPUTER SCIENCE & ENGINEERING BATCH-14-2 "<<endl<<endl<<endl;
     cout<< " INSTRUCTIONS :  "<<endl;
     cout<< " Press  'ESC' to STOP The project "<<endl;


	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(1350, 700);
	glutCreateWindow("City");
	gluOrtho2D(0.0, 2000.0, 0.0, 1500.0);
	glutKeyboardFunc(keyboard);

	glutDisplayFunc(myDisplay);

	glutTimerFunc(20, update, 0);
	glutFullScreen();
	sndPlaySound("3.wav",SND_ASYNC);
	glutMainLoop();


	return 0;
}
