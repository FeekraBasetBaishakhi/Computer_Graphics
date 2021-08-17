#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>>
# define PI           3.14159265358979323846
void display1() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

//house block
glBegin(GL_QUADS);
glColor3ub(122, 122, 82);
glVertex2f(-0.4, 0.5);
glVertex2f( -0.4, 0.04);
glVertex2f( 0.6, 0.04 );
glVertex2f( 0.6, 0.5 );
glEnd();
//window
glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-0.35, 0.47);
glVertex2f( -0.35, 0.17);
glVertex2f( -0.18, 0.17 );
glVertex2f( -0.18, 0.47 );
glEnd();

glBegin(GL_QUADS);
glColor3ub(204, 238, 255);
glVertex2f(-0.34, 0.45);
glVertex2f( -0.34, 0.29);
glVertex2f( -0.27, 0.29 );
glVertex2f( -0.27, 0.45 );
glEnd();

glBegin(GL_QUADS);
glColor3ub(204, 238, 255);
glVertex2f(-0.26, 0.45);
glVertex2f( -0.26, 0.29);
glVertex2f( -0.19, 0.29 );
glVertex2f( -0.19, 0.45 );
glEnd();

glBegin(GL_QUADS);
glColor3ub(204, 238, 255);
glVertex2f(-0.34, 0.28);
glVertex2f( -0.34, 0.18);
glVertex2f( -0.27, 0.18 );
glVertex2f( -0.27, 0.28 );
glEnd();

glBegin(GL_QUADS);
glColor3ub(204, 238, 255);
glVertex2f(-0.26, 0.28);
glVertex2f( -0.26, 0.18);
glVertex2f( -0.19, 0.18 );
glVertex2f( -0.19, 0.28 );
glEnd();
//door
glBegin(GL_QUADS);
glColor3ub(26, 26, 0);
glVertex2f(-0.09, 0.48);
glVertex2f( -0.09, 0.08);
glVertex2f( 0.07, 0.08 );
glVertex2f( 0.07, 0.48 );
glEnd();

//garage
glBegin(GL_QUADS);
glColor3ub(242, 242, 242);
glVertex2f(0.16, 0.42);
glVertex2f( 0.16, 0.047);
glVertex2f( 0.57, 0.047 );
glVertex2f( 0.57, 0.42 );
glEnd();


glBegin(GL_QUADS);
glColor3ub(245, 245, 239);
glVertex2f(-0.39, 0.56);
glVertex2f( -0.45, 0.52);
glVertex2f( -0.07, 0.52 );
glVertex2f( -0.11, 0.56 );
glEnd();
glEnd();
glBegin(GL_QUADS);
glColor3ub(38, 38, 38);
glVertex2f(-0.45, 0.52);
glVertex2f( -0.45, 0.5);
glVertex2f( 0.66, 0.5 );
glVertex2f( 0.66, 0.52 );
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(122, 122, 82);
glVertex2f(-0.23, 0.68);
glVertex2f( -0.39, 0.56);
glVertex2f( -0.11, 0.56);
glEnd();



glBegin(GL_QUADS);
glColor3ub(230, 230, 230);
glVertex2f(-0.23, 0.68);
glVertex2f( -0.1, 0.52);
glVertex2f( 0.66, 0.52 );
glVertex2f( 0.44, 0.68 );
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(122, 122, 82);
glVertex2f(0.08, 0.9);
glVertex2f( -0.24, 0.68);
glVertex2f( 0.44, 0.68);
glEnd();

glBegin(GL_QUADS);
glColor3ub(38, 38, 38);
glVertex2f(0.08, 0.9);
glVertex2f( 0.08, 0.87);
glVertex2f( 0.41, 0.68);
glVertex2f( 0.43, 0.68 );
glEnd();

glBegin(GL_QUADS);
glColor3ub(38, 38, 38);
glVertex2f(0.08, 0.9);
glVertex2f( -0.24, 0.68);
glVertex2f( -0.21, 0.67);
glVertex2f( 0.08, 0.87 );
glEnd();

glBegin(GL_QUADS);
glColor3ub(38, 38, 38);
glVertex2f(-0.23, 0.68);
glVertex2f(-0.39, 0.56);
glVertex2f( -0.37, 0.56);
glVertex2f( -0.23, 0.66 );
glEnd();

glBegin(GL_QUADS);
glColor3ub(38, 38, 38);
glVertex2f(-0.23, 0.68);
glVertex2f(-0.23, 0.66);
glVertex2f( -0.15, 0.56);
glVertex2f( -0.13, 0.56 );
glEnd();

	glFlush();
}


int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("Test");
	glutInitWindowSize(320, 320);
	glutDisplayFunc(display1);
	glutMainLoop();
	return 0;
}
