#include<iostream>
#include<glut.h>
void mydisplay();

using namespace std;

void initializewindow()
{
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(640, 480);
	glutInitWindowPosition(30, 30);
	glutCreateWindow("CG Lab1");
}
void registercallbacks()
{
	glutDisplayFunc(mydisplay);
}

void initGL()
{
	glClearColor(0.3, 1.0f, 1.0f, 0.0);

	glPointSize(4.0);
	glLineWidth(2.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, 300, 0, 400);
	glViewport(0, 0, 639, 479);
}


void mydisplay()
{
	glClear(GL_COLOR_BUFFER_BIT);

	glColor3ub(230, 147, 34);
	glBegin(GL_POLYGON);
	glVertex2f(50.0, 10.0);
	glVertex2f(30.0, 80.0);
	glVertex2f(230.0, 80.0);
	glVertex2f(200.0, 10.0);
	glEnd();

	glColor3ub(255, 255, 255);
	glBegin(GL_TRIANGLES);
	glVertex2f(120, 90);
	glVertex2f(220, 90);
	glVertex2f(120, 300);
	glEnd();

	glBegin(GL_TRIANGLES);
	glVertex2f(50, 90);
	glVertex2f(110, 90);
	glVertex2f(110, 250);
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