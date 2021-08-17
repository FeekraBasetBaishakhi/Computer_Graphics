#include <windows.h>
#include <GL/glut.h>

GLfloat position = 0.0f;
GLfloat speed = 0.1f;

void update(int value) {

    if(position <-1.0)
        position = 1.0f;

    position -= speed;

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}


void screen()
{
    gluOrtho2D(-2,2,-2,2);
}
void display1() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
glPushMatrix();
glTranslatef(position,position,0);
glBegin(GL_TRIANGLES);
glColor3f(0,1,0);
glVertex2f( .0f, .0f );
glVertex2f( -0.5f,0.5f);
glVertex2f( -1.0f, 0.0f );


glEnd();

glBegin(GL_QUADS);
glColor3f(1,0,0);
glVertex2f( .0f, .0f );
glVertex2f( 0.0f, -0.5f );
glVertex2f( 0.5f, -0.5f );
glVertex2f( 0.5f,0.0f);



glEnd();
glPopMatrix();
glFlush();
}

int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitWindowSize(320, 320);
   glutInitWindowPosition(50, 50);
   glutCreateWindow("Translation Animation");
   glutDisplayFunc(display1);


   glutTimerFunc(100, update, 0);


   glutMainLoop();
   return 0;
}
