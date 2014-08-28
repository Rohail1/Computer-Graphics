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
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0,300,0,400);
	glViewport(0, 0, 639, 479);
}


void mydisplay()
{
	glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_POINTS); 
	glVertex2d(10, 22);      
	glVertex2d(15,  33); 
	glVertex2d(74, 200); 
	glVertex2d(78,  76); 
	glEnd(); 


	glBegin(GL_LINES); 
	glVertex2f(20.0, 100.0);        
	glVertex2f(100.0, 20.0);
	glColor3f(1.0, 1.0, 0.0); 
	glVertex2f(10.0, 60.0); 
	glVertex2f(5.0, 33.0);
	glEnd();


	glColor3f(0.5, 0.6, 0.0); 
	glLineWidth(4); 
	glBegin(GL_LINE_STRIP); 
	glVertex2f(200.0, 20.0); 
	glVertex2f(10.0, 20.0); 
	glVertex2f(200.0, 0.0); 
	glVertex2f(200.0, .0); 
	glEnd();


	glColor3f(1.0, 0.0, 1.0); 
	glPolygonMode(GL_BACK, GL_FILL);
	glLineWidth(4); 
	glBegin(GL_TRIANGLES); 
	glVertex2f(200.0, 300.0); 
	glVertex2f(150.0, 50.0); 
	glVertex2f(300.0, 50.0); 
	glEnd();

	glColor3f(0.0, 1.0, 0.0); 
	glLineWidth(4); 
	glPolygonMode(GL_FRONT, GLU_FILL); 
	glBegin(GL_TRIANGLE_STRIP); 
	glVertex2f(60.0, 200.0); 
	glVertex2f(120.0, 60.0); 
	glVertex2f(00.0, 60.0);  
		glVertex2f(60.0, 20.0);          //create 2ndtriangle  
		glVertex2f (5.0, 25.0);          //create 3rd triangle     
		glVertex2f (20.0, 29.0);       //create 4th triangle  
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