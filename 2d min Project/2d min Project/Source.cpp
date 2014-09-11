#include<iostream>
#include<math.h>
#include<glut.h>

#define PI 3.1415926535897932384626433832795
void mydisplay();

using namespace std;

void initializewindow()
{
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(1366, 700);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("2d Mini Project");
}
void registercallbacks()
{
	glutDisplayFunc(mydisplay);
}

void initGL()
{
	glClearColor(0.72, 0.86, 0.99, 0.4);
	glColor3f(0, 0, 0);
	glPointSize(4.0);
	glLineWidth(2.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, 300, 0, 400);
	glViewport(0, 0, 639, 479);
}


void mydisplay()
{
	int radius=20;
	float x, y;
	glClear(GL_COLOR_BUFFER_BIT);
	
	// Sea
	glBegin(GL_POLYGON);
	glColor3ub(273, 202, 223);
	glVertex2f(0, 0);
	glVertex2f(0, 100);
	glVertex2f(300, 100);
	glVertex2f(300, 0);
	glEnd();

	//grass
	glBegin(GL_POLYGON);
	glColor3ub(32, 121, 18);
	glVertex2f(0, 210);
	glVertex2f(0, 260);
	glVertex2f(300, 210);
	glVertex2f(300, 260);
	glEnd();

	//birds
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2d(35, 350);
	glVertex2d(38, 345);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2d(38, 345);
	glVertex2d(41, 350);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2d(45, 350);
	glVertex2d(48, 345);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2d(48, 345);
	glVertex2d(51, 350);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2d(40, 340);
	glVertex2d(43, 335);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2d(43, 335);
	glVertex2d(46, 340);
	glEnd();
	//bird set 2
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2d(195, 350);
	glVertex2d(198, 345);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2d(198, 345);
	glVertex2d(201, 350);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2d(215, 350);
	glVertex2d(218, 345);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2d(218, 345);
	glVertex2d(221, 350);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2d(200, 340);
	glVertex2d(203, 335);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2d(203, 335);
	glVertex2d(206, 340);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(240, 238, 29);
	for (float i = 0; i < 360.0; i++)
	{
		y = radius*sin(i);
		x = radius*cos(i);
		glVertex2f(x + 105, y + 270);
	}
	glEnd();
	
	
	//Mountain
	glBegin(GL_TRIANGLES);
	glColor3ub(181, 122, 18);
	glVertex2d(-20, 230);
	glVertex2d(60, 230);
	glVertex2d(20, 350);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3ub(181, 122, 18);
	glVertex2d(50, 230);
	glVertex2d(110, 230);
	glVertex2d(80, 350);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3ub(181, 122, 18);
	glVertex2d(100, 230);
	glVertex2d(160, 230);
	glVertex2d(130, 350);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3ub(181, 122, 18);
	glVertex2d(150, 230);
	glVertex2d(210, 230);
	glVertex2d(180, 350);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3ub(181, 122, 18);
	glVertex2d(200, 230);
	glVertex2d(260, 230);
	glVertex2d(230, 350);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3ub(181, 122, 18);
	glVertex2d(250, 230);
	glVertex2d(310, 230);
	glVertex2d(280, 350);
	glEnd();

	//Boat base
	glBegin(GL_POLYGON);
	glColor3ub(248, 171, 89);
	glVertex2f(100, 100);
	glVertex2f(90, 150);
	glVertex2f(200, 150);
	glVertex2f(190, 100);
	glEnd();

	//Boat Header 1
	glBegin(GL_TRIANGLES);
	glColor3ub(255, 255, 255);
	glVertex2d(140, 152);
	glVertex2d(140, 300);
	glVertex2d(95, 152);
	glEnd();
	//Boat Header 2
	glBegin(GL_TRIANGLES);
	glColor3ub(255, 255, 255);
	glVertex2d(142, 152);
	glVertex2d(142, 300);
	glVertex2d(195, 152);
	glEnd();




	glFlush();

}

void main(int agrc, char *argv[])
{


	glutInit(&agrc, argv);
	initializewindow();
	registercallbacks();
	initGL();
	glutMainLoop();
}