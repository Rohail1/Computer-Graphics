#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<glut.h>
#include<RGBPixMap.h>
#include<Windows.h>
#include "wav.h"
#define pi 3.543
using namespace std;

RGBpixmap pix[1];

void mydisplay();

void initializewindow(){
	
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(680, 420);
	glutInitWindowPosition(50, 50);
	glutCreateWindow("HEllo World BAT");

	//Hi this is me hello

}

void registercallbacks(){

	glutDisplayFunc(mydisplay);

}

void initGL(){

	glClearColor(0.5f, 0.5f, 0.7f, 0.0);
	glPointSize(4.0);
	glLineWidth(2.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-20,20,-20,20);
}


void mydisplay(){
	
	float r = 5, x, y;
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.69, 0.66, 0.37);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	
	/*glRasterPos2i(0, 0);
	glPixelZoom(1, 1);
	pix[0].draw();
	*/
	glBegin(GL_LINES);
	glVertex2d(15, 5);
	glVertex2d(15, 20);
	glEnd();

	glBegin(GL_POLYGON);
	for (float i = 0; i < 360.0; i++)
	{
		y = r*sin(i);
		x = r*cos(i);
		glVertex2f(x, y);
	}
	glEnd();
	
	//glFlush();
	glutSwapBuffers();

}

void main(int agrc, char *argv[])
{
	glutInit(&agrc, argv);
	initializewindow();
	registercallbacks();
	initGL();
	PlayBackgroundSound("backmusic.wav");
	//pix[0].readBMPFile("bg.bmp");
	glutMainLoop();


}