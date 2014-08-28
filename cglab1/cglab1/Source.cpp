#include<iostream>
#include<glut.h>
void mydisplay();

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
	glColor3f(0, 0, 0);
	glPointSize(4.0);
	glLineWidth(2.0);
	gluOrtho2D(-0,100,0,100);
}


void mydisplay()
{
	glClear(GL_COLOR_BUFFER_BIT);

	glColor3f(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2f(15.0, 0.0);
	glVertex2f(15.0, 20.0);
	glEnd();

	glBegin(GL_LINES);
	glVertex2i(8, 56);
	glVertex2i(1, 90);
	glEnd();

	
	glBegin(GL_LINES);
	glVertex2i(27, 7);
	glVertex2i(32, 10);
	glEnd();

	glBegin(GL_LINES);
	glVertex2i(77,25);
	glVertex2i(56, 34);
	glEnd();

	glBegin(GL_LINES);
	glVertex2d(4, 10);
	glVertex2d(12, 45);
	glEnd();
	
	glColor3f(1, 0, 0);
	glBegin(GL_POINTS);
	glVertex2d(0, 0);
	glEnd();

	glColor3f(1, 0, 0);
	glBegin(GL_POINTS);
	glVertex2d(679, 0);
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