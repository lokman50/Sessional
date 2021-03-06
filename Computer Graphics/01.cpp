#include<bits/stdc++.h>
#include <windows.h>
#include <GL\glut.h>


void display()
{
	   glClear(GL_COLOR_BUFFER_BIT);
	   glColor3f(1.0, 0.0, 0.0);

	   glBegin(GL_LINES);
	   glVertex3f (-10, 20, 0.0);
	   glVertex3f (10, 20, 0.0);

       glVertex3f (10, 20, 0.0);
       glVertex3f (10, -20, 0.0);

       glVertex3f (10, -20, 0.0);
       glVertex3f (-10, -20, 0.0);

       glVertex3f (-10, -20, 0.0);
       glVertex3f (-10, 20, 0.0);
	   glEnd();



	   glBegin(GL_POLYGON);
	   glVertex3f (0, 0, 0.0);
	   glVertex3f (0, 25, 0.0);
	   glVertex3f (25, 25, 0.0);
       glVertex3f (25, 0, 0.0);

	   glEnd();
	   glFlush();
}


void init(void)
{
	glClearColor (0.0, 0.0, 0.0, 0.0);
	glOrtho(-50.0, 55.0, -50.0, 50.0, -1.0, 1.0);
}



int main (int argc, char **argv)
{
    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); //

    glutInitWindowSize(755,450);

    glutInitWindowPosition(100, 100);

    glutCreateWindow("Lab 2");

    glutDisplayFunc(display);

    init();

    glutMainLoop();

    return 0;
}
