#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>
# define PI           3.14159265358979323846
GLfloat o = 0.0f;
GLfloat m = 0.0f;
GLfloat n = 0.0f;
GLfloat v = 0.0f;
GLfloat l = 0.0f;

GLfloat position = 0.0f;
GLfloat speed = 0.042f;
GLfloat position1 = 0.0f;
GLfloat speed1 = 0.04f;
GLfloat position2 = 0.0f;
GLfloat speed2 = 0.004f;
void dis();
void display();

void sound()
{

    PlaySound("a.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);


}

void sound2()
{

    PlaySound("b.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);


}
void sound3()
{

    PlaySound("c.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);


}



void update(int value) {

    if(position >1.0)
        position = -1.0f;

    position += speed; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}

void update1(int value) {

    if(position1 >1.0)
        position1 = -1.0f;

    position1 += speed1; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(100, update1, 0);
}

void update2(int value) {

    if(position2 >1.0)
        position2 = -1.0f;

    position2 += speed2; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(100, update2, 0);
}



void screen()
{
    gluOrtho2D(-2,2,-2,2);
}

void Idle()
{
    glutPostRedisplay();//// marks the current window as needing to be redisplayed
}
//mouse_control_plane
void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON){
			speed += 0.04f;
			}
			if (button == GLUT_RIGHT_BUTTON)
	{speed -= 0.04f;
			}
	glutPostRedisplay();}




void late_night() {
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT| GL_DEPTH_BUFFER_BIT);


//sky
glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f( -1.0, 1.0 );
glVertex2f( -1.0, -1 );
glVertex2f( 1.0, -1 );
glVertex2f( 1.0, 1.0 );
glEnd();

int i;//sun
    GLfloat a=-.84f; GLfloat b=.86f; GLfloat radius1 =.08f;
	int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(230, 230, 230);
		glVertex2f(a, b); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a+ (radius1 * cos(i *  twicePi / triangleAmount)),
			    b+ (radius1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	int i1;//sun
    GLfloat a11=-.84f; GLfloat b11=.86f; GLfloat radius111 =.06f;
	int triangleAmount111 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi11 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(26, 26, 26);
		glVertex2f(a11, b11); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a11+ (radius111 * cos(i1 *  twicePi11 / triangleAmount111)),
			    b11+ (radius111 * sin(i1 * twicePi11 / triangleAmount111))
			);
		}
	glEnd();
glBegin(GL_LINES); //stars
glColor3ub(255, 255, 255);
glVertex2f(-0.9, 0.895);
glVertex2f(-0.9, 0.885);
glVertex2f(-0.895, 0.89);
glVertex2f(-0.905, 0.89);
glEnd();
glTranslatef(0,-0.18, 0);
glBegin(GL_LINES); //stars
glVertex2f(-0.6, 0.895);
glVertex2f(-0.6, 0.885);
glVertex2f(-0.595, 0.89);
glVertex2f(-0.605, 0.89);
glEnd();
glTranslatef(0,-0.18, 0);
glBegin(GL_LINES); //stars
glVertex2f(-0.4, 0.895);
glVertex2f(-0.4, 0.885);
glVertex2f(-0.3895, 0.89);
glVertex2f(-0.405, 0.89);
glEnd();
glLoadIdentity();


glBegin(GL_LINES); //stars
glColor3ub(255, 255, 255);
glVertex2f(-0.9, 0.895);
glVertex2f(-0.9, 0.885);
glVertex2f(-0.895, 0.89);
glVertex2f(-0.905, 0.89);
glEnd();

glBegin(GL_LINES); //stars
glColor3ub(255, 255, 255);
glVertex2f(-0.9, 0.895);
glVertex2f(-0.9, 0.885);
glVertex2f(-0.895, 0.89);
glVertex2f(-0.905, 0.89);
glEnd();

glBegin(GL_LINES); //stars
glColor3ub(255, 255, 255);
glVertex2f(-0.9, 0.895);
glVertex2f(-0.9, 0.885);
glVertex2f(-0.895, 0.89);
glVertex2f(-0.905, 0.89);
glEnd();

glBegin(GL_LINES); //stars
glColor3ub(255, 255, 255);
glVertex2f(-0.9, 0.895);
glVertex2f(-0.9, 0.885);
glVertex2f(-0.895, 0.89);
glVertex2f(-0.905, 0.89);
glEnd();

glBegin(GL_LINES); //stars
glColor3ub(255, 255, 255);
glVertex2f(-0.9, 0.895);
glVertex2f(-0.9, 0.885);
glVertex2f(-0.895, 0.89);
glVertex2f(-0.905, 0.89);
glEnd();

glBegin(GL_LINES); //stars
glColor3ub(255, 255, 255);
glVertex2f(-0.9, 0.895);
glVertex2f(-0.9, 0.885);
glVertex2f(-0.895, 0.89);
glVertex2f(-0.905, 0.89);
glEnd();

//background_buildings

glBegin(GL_QUADS);
glColor3ub(0, 0, 77);
glVertex2f( -1, 0.55 );
glVertex2f( -1, 0.25 );
glVertex2f( -0.9, 0.25);
glVertex2f( -0.9, 0.55);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 77);
glVertex2f( -0.9, 0.25 );
glVertex2f( -0.9, 0.7 );
glVertex2f( -0.8, 0.7);
glVertex2f( -0.8, 0.25);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 77);
glVertex2f( -0.8, 0.5 );
glVertex2f( -0.8, 0.25);
glVertex2f( -0.7, 0.25);
glVertex2f( -0.7, 0.5);
glEnd();


glBegin(GL_QUADS);
glColor3ub(0, 0, 77);
glVertex2f( -0.7, 0.45);
glVertex2f( -0.7, 0.25);
glVertex2f( -0.6, 0.25);
glVertex2f( -0.6, 0.45);
glEnd();


glBegin(GL_QUADS);
glColor3ub(0, 0, 77);
glVertex2f( -0.6, 0.6 );
glVertex2f( -0.6, 0.25);
glVertex2f( -0.55, 0.25);
glVertex2f( -0.55, 0.6);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 77);
glVertex2f( -0.55, 0.55 );
glVertex2f( -0.55, 0.25);
glVertex2f( -0.48, 0.25);
glVertex2f( -0.48, 0.55);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 77);
glVertex2f( -0.35, 0.5 );
glVertex2f( -0.35, 0.25);
glVertex2f( -0.3, 0.25);
glVertex2f( -0.3, 0.5);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 77);
glVertex2f( -0.3, 0.7);
glVertex2f( -0.3, 0.25);
glVertex2f( -0.22, 0.25);
glVertex2f( -0.22, 0.7);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 77);
glVertex2f( -0.22, 0.6);
glVertex2f( -0.22, 0.25);
glVertex2f( -0.15, 0.25);
glVertex2f( -0.15, 0.6);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 77);
glVertex2f( -0.15, 0.65);
glVertex2f( -0.15, 0.25);
glVertex2f( -0.07, 0.25);
glVertex2f( -0.07, 0.65);
glEnd();


glBegin(GL_QUADS);
glColor3ub(0, 0, 77);
glVertex2f( -0.07, 0.6);
glVertex2f( -0.07, 0.25);
glVertex2f( 0.0, 0.25);
glVertex2f( 0.0, 0.6);
glEnd();


glBegin(GL_QUADS);
glColor3ub(0, 0, 77);
glVertex2f( 0.4, 0.6);
glVertex2f( 0.4, 0.25);
glVertex2f( 0.2, 0.25);
glVertex2f( 0.2, 0.6);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 77);
glVertex2f( 0.4, 0.5);
glVertex2f( 0.4, 0.25);
glVertex2f( 0.5, 0.25);
glVertex2f( 0.5, 0.5);
glEnd();
glBegin(GL_QUADS);
glColor3ub(0, 0, 77);
glVertex2f( 0.5, 0.65);
glVertex2f( 0.5, 0.25);
glVertex2f( 0.55, 0.25);
glVertex2f( 0.55, 0.65);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 77);
glVertex2f( 0.55, 0.56);
glVertex2f( 0.55, 0.25);
glVertex2f( 0.65, 0.25);
glVertex2f( 0.65, 0.56);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 77);
glVertex2f( 0.65, 0.46);
glVertex2f( 0.65, 0.25);
glVertex2f( 0.73, 0.25);
glVertex2f( 0.73, 0.46);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 77);
glVertex2f( 0.73, 0.5);
glVertex2f( 0.73, 0.25);
glVertex2f( 0.85, 0.25);
glVertex2f( 0.85, 0.5);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 77);
glVertex2f( 0.85, 0.7);
glVertex2f( 0.85, 0.25);
glVertex2f( 0.9, 0.25);
glVertex2f( 0.9, 0.7);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 77);
glVertex2f( 0.9, 0.55);
glVertex2f( 0.9, 0.25);
glVertex2f( 0.95, 0.25);
glVertex2f( 0.95, 0.55);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 77);
glVertex2f( 0.95, 0.5);
glVertex2f( 0.95, 0.25);
glVertex2f( 1.0, 0.25);
glVertex2f( 1.0, 0.5);
glEnd();




//road
glBegin(GL_QUADS);
glColor3ub(77,77,77);
glVertex2f( -1.0, -0.5 );
glVertex2f( -1.0, -1 );
glVertex2f( 1.0, -1 );
glVertex2f( 1.0, -0.5 );
glEnd();

//ROAD DOT
glBegin(GL_QUADS);
glColor3ub(204, 204, 0);
glVertex2f( -0.9, -0.7 );
glVertex2f( -0.85, -0.75 );
glVertex2f( -0.65, -0.75 );
glVertex2f( -.7f, -0.7f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(204, 204, 0);
glVertex2f( -0.55, -0.7 );
glVertex2f( -0.5, -0.75 );
glVertex2f( -0.3, -0.75 );
glVertex2f( -0.35, -0.7);
glEnd();

glBegin(GL_QUADS);
glColor3ub(204, 204, 0);
glVertex2f( -0.2, -0.7 );
glVertex2f( -0.15, -0.75 );
glVertex2f( 0.05, -0.75 );
glVertex2f( 0, -0.7);
glEnd();

glBegin(GL_QUADS);
glColor3ub(204, 204, 0);
glVertex2f( 0.15, -0.7 );
glVertex2f( 0.2, -0.75);
glVertex2f( 0.4, -0.75 );
glVertex2f( 0.35, -0.7);
glEnd();

glBegin(GL_QUADS);
glColor3ub(204, 204, 0);
glVertex2f( 0.5, -0.7 );
glVertex2f( 0.55, -0.75);
glVertex2f( 0.75, -0.75 );
glVertex2f( 0.7, -0.7);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 255, 51);
glVertex2f( 0.85, -0.7 );
glVertex2f( 0.9, -0.75);
glVertex2f( 1.1, -0.75 );
glVertex2f( 1.05, -0.7);
glEnd();

glBegin(GL_QUADS);
glColor3ub(204, 204, 0);
glVertex2f( -1.25, -0.7 );
glVertex2f( -1.2, -0.75);
glVertex2f( -1, -0.75 );
glVertex2f( -1.05, -0.7);
glEnd();

//grass
glBegin(GL_QUADS);
glColor3ub(0, 51, 0);
glVertex2f(-1.39, -0.24 );
glVertex2f( -1.4, -0.5);
glVertex2f( 1.2, -0.5 );
glVertex2f( 1.2, -0.24);
glEnd();

//upper runway
glBegin(GL_QUADS);
glColor3ub(77,77,77);
glVertex2f(-1.4, 0.2 );
glVertex2f( -1.39, -0.24);
glVertex2f( 1.2, -0.24 );
glVertex2f( 1.2, 0.2);
glEnd();

//upper grass
glBegin(GL_QUADS);
glColor3ub(0, 51, 0);
glVertex2f(-1.0, 0.3 );
glVertex2f( -1.0, 0.165);
glVertex2f( 1.0, 0.165 );
glVertex2f( 1.0, 0.3);
glEnd();

//upper runway dot
glBegin(GL_QUADS);
glColor3ub(204, 204, 0);
glVertex2f( -1.23,-0.003 );
glVertex2f( -1.2, -0.1 );
glVertex2f( -1, -0.1 );
glVertex2f(-1.04, -0.003);
glEnd();

glBegin(GL_QUADS);
glColor3ub(204, 204, 0);
glVertex2f( -0.94,-0.004 );
glVertex2f( -0.88, -0.05 );
glVertex2f( -0.67, -0.05 );
glVertex2f(-0.73,  -0.004);
glEnd();

glBegin(GL_QUADS);
glColor3ub(204, 204, 0);
glVertex2f( -0.56,-0.004 );
glVertex2f( -0.49, -0.05 );
glVertex2f( -0.28, -0.05 );
glVertex2f(-0.35,  -0.004);
glEnd();

glBegin(GL_QUADS);
glColor3ub(204, 204, 0);
glVertex2f( -0.2,-0.004 );
glVertex2f( -0.117, -0.05 );
glVertex2f( 0.099, -0.05 );
glVertex2f(0.011,  -0.004);
glEnd();

glBegin(GL_QUADS);
glColor3ub(204, 204, 0);
glVertex2f( 0.16,-0.004 );
glVertex2f( 0.25, -0.05 );
glVertex2f( 0.46, -0.05 );
glVertex2f(0.37,  -0.004);
glEnd();

glBegin(GL_QUADS);
glColor3ub(204, 204, 0);
glVertex2f( 0.53,-0.004 );
glVertex2f( 0.62, -0.05 );
glVertex2f( 0.83, -0.05 );
glVertex2f(0.74,  -0.004);
glEnd();

glBegin(GL_QUADS);
glColor3ub(204, 204, 0);
glVertex2f( 0.88,-0.004 );
glVertex2f( 0.97, -0.05 );
glVertex2f( 1.2, -0.05 );
glVertex2f(1.06,  -0.004);
glEnd();

//upper_runway_line
glBegin(GL_QUADS);
glColor3ub(204, 204, 0);
glVertex2f(-1.4,-0.25 );
glVertex2f( -1.4, -0.24 );
glVertex2f( 1.2, -0.24 );
glVertex2f(1.2,  -0.25);
glEnd();

glBegin(GL_QUADS);
glColor3ub(204, 204, 0);
glVertex2f(-1.4,0.17 );
glVertex2f( -1.4, 0.16 );
glVertex2f( 1.2, 0.16 );
glVertex2f(1.2,  0.17);
glEnd();
//lower_line_runway
glBegin(GL_QUADS);
glColor3ub(255, 255, 51);
glVertex2f(-1., -0.5 );
glVertex2f( -1., -0.49 );
glVertex2f( 1, -0.49 );
glVertex2f(1,  -0.5);
glEnd();

glBegin(GL_QUADS);
glColor3ub(204, 204, 0);
glVertex2f(-1, -1 );
glVertex2f( -1, -0.98 );
glVertex2f( 1, -0.98 );
glVertex2f(1,  -1);
glEnd();





//tower
glBegin(GL_QUADS);
glColor3ub(0, 107, 179);
glVertex2f(0.59, 0.43 );
glVertex2f( 0.59, 0.4);
glVertex2f( 0.95, 0.4 );
glVertex2f( 0.95, 0.43);
glEnd();



glBegin(GL_QUADS);
glColor3ub(184, 184, 148);
glVertex2f(0.65, 0.4 );
glVertex2f( 0.65, 0.2);
glVertex2f( 0.89, 0.2 );
glVertex2f( 0.89, 0.4);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 107, 179);
glVertex2f(0.74, 0.32);
glVertex2f( 0.74, 0.3);
glVertex2f( 0.82, 0.3 );
glVertex2f( 0.82, 0.32);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 255, 255);
glVertex2f(0.75, 0.30);
glVertex2f( 0.75, 0.2);
glVertex2f( 0.81, 0.2 );
glVertex2f( 0.81, 0.30);
glEnd();
glBegin(GL_QUADS);
glColor3ub(184, 184, 148);
glVertex2f(0.81, 0.55 );
glVertex2f( 0.81, 0.43);
glVertex2f( 0.87, 0.43 );
glVertex2f( 0.87, 0.55);
glEnd();
glBegin(GL_QUADS);
glColor3ub(0, 107, 179);
glVertex2f(0.81, 0.56);
glVertex2f( 0.81, 0.55);
glVertex2f( 0.87, 0.55 );
glVertex2f( 0.87, 0.56);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 255, 0);
glVertex2f(0.79, 0.6);
glVertex2f( 0.81, 0.56);
glVertex2f( 0.87, 0.56 );
glVertex2f( 0.89, 0.6);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 107, 179);
glVertex2f(0.78, 0.62);
glVertex2f(0.78, 0.6);
glVertex2f( 0.9, 0.6 );
glVertex2f( 0.9, 0.62);
glEnd();
glBegin(GL_QUADS);
glColor3ub(255, 255, 0);
glVertex2f(0.77, 0.7);
glVertex2f( 0.78, 0.62);
glVertex2f( 0.9, 0.62);
glVertex2f( 0.91, 0.7);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 107, 179);
glVertex2f(0.77, 0.72);
glVertex2f(0.77, 0.7);
glVertex2f( 0.91, 0.7 );
glVertex2f( 0.91, 0.72);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 255, 0);
glVertex2f(0.8, 0.84);
glVertex2f( 0.81, 0.72);
glVertex2f( 0.87, 0.72);
glVertex2f( 0.883, 0.84);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 107, 179);
glVertex2f(0.8, 0.86);
glVertex2f(0.8, 0.84);
glVertex2f( 0.883, 0.84 );
glVertex2f( 0.883, 0.86);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 107, 179);
glVertex2f(0.84, 0.96);
glVertex2f(0.84, 0.86);
glVertex2f( 0.85, 0.86 );
glVertex2f( 0.85, 0.96);
glEnd();
//antenna_tower
glPushMatrix();
glTranslatef(0.8445,0.94,0.0);
glRotatef(l,0.0,1.01,0.0);
glBegin(GL_QUADS);
glColor3ub(0, 107, 179);
glVertex2f(0.0, 0.0);
glVertex2f(0.005, -0.007);
glVertex2f( 0.047,  0.041);
glVertex2f( 0.042, 0.05);
glEnd();
glPopMatrix();
l+=0.099f;
glLoadIdentity();

glBegin(GL_LINES);
glColor3ub(204, 242, 255);
glVertex2f(0.81, 0.84);
glVertex2f(0.82, 0.72);
glVertex2f(0.84, 0.84 );
glVertex2f( 0.84, 0.72);
glVertex2f(0.87, 0.84 );
glVertex2f( 0.86, 0.72);
glVertex2f(0.8, 0.8 );
glVertex2f( 0.88, 0.8);
glVertex2f(0.805, 0.74 );
glVertex2f( 0.875, 0.74);
glVertex2f(0.79, 0.699 );
glVertex2f( 0.806, 0.621);
glVertex2f(0.84, 0.699 );
glVertex2f( 0.84, 0.621);
glVertex2f(0.89, 0.699 );
glVertex2f( 0.875, 0.621);
glVertex2f(0.77, 0.66 );
glVertex2f( 0.91, 0.66);
glVertex2f(0.825, 0.6 );
glVertex2f( 0.825, 0.56);
glVertex2f(0.855, 0.6 );
glVertex2f( 0.855, 0.56);
glVertex2f(0.8, 0.58 );
glVertex2f( 0.88, 0.58);
glEnd();


//building

glBegin(GL_QUADS);
glColor3ub(102, 102, 153);
glVertex2f(-0.2, 0.55);
glVertex2f(-0.2, 0.5);
glVertex2f( 0.4,  0.5 );
glVertex2f( 0.4, 0.55);
glEnd();



glBegin(GL_QUADS);
glColor3ub(184, 184, 148);
glVertex2f(-0.17, 0.5);
glVertex2f(-0.17, 0.27);
glVertex2f( 0.37,  0.27 );
glVertex2f( 0.37, 0.5);
glEnd();

glBegin(GL_LINES);
glColor3ub(242, 242, 242);
glVertex2f(-0.17, 0.5 );
glVertex2f( 0.37, 0.5);
glVertex2f(-0.17, 0.27 );
glVertex2f( 0.37, 0.27);
glVertex2f(-0.06, 0.5);
glVertex2f(-0.06, 0.27);
glVertex2f(0.05, 0.5);
glVertex2f(0.05, 0.27);
glVertex2f(0.16, 0.5);
glVertex2f(0.16, 0.27);
glVertex2f(0.27, 0.5);
glVertex2f(0.27, 0.27);
glVertex2f(-0.17, 0.44);
glVertex2f(0.37, 0.44);
glVertex2f(-0.17, 0.37);
glVertex2f(0.37, 0.37);
glVertex2f(-0.17, 0.3);
glVertex2f(0.37, 0.3);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255,255, 255);
glVertex2f(0.006, 0.33 );
glVertex2f( 0.006, 0.27);
glVertex2f( 0.21, 0.27 );
glVertex2f( 0.21, 0.33);
glEnd();

glBegin(GL_QUADS);
glColor3ub(102, 102, 153);
glVertex2f(-0.07, 0.4);
glVertex2f(-0.07, 0.38);
glVertex2f( 0.28, 0.38 );
glVertex2f( 0.28, 0.4);
glEnd();

glBegin(GL_QUADS);
glColor3ub(122, 0, 153);
glVertex2f(-0.065, 0.38 );
glVertex2f( -0.065, 0.27);
glVertex2f( -0.06, 0.27 );
glVertex2f( -0.06, 0.38);
glEnd();

glBegin(GL_QUADS);
glColor3ub(122, 0, 153);
glVertex2f(0.019, 0.38 );
glVertex2f( 0.019, 0.27);
glVertex2f( 0.025, 0.27 );
glVertex2f( 0.025, 0.38);
glEnd();

glBegin(GL_QUADS);
glColor3ub(122, 0, 153);
glVertex2f(0.098, 0.38 );
glVertex2f( 0.098, 0.27);
glVertex2f( 0.104, 0.27 );
glVertex2f( 0.104, 0.38);
glEnd();

glBegin(GL_QUADS);
glColor3ub(122, 0, 153);
glVertex2f(0.187, 0.38 );
glVertex2f( 0.187, 0.27);
glVertex2f( 0.194, 0.27 );
glVertex2f( 0.194, 0.38);
glEnd();

glBegin(GL_QUADS);
glColor3ub(122, 0, 153);
glVertex2f(0.257, 0.38 );
glVertex2f( 0.257, 0.27);
glVertex2f( 0.265, 0.27 );
glVertex2f( 0.265, 0.38);
glEnd();

//tree
glBegin(GL_QUADS);
glColor3ub(204, 51, 0);
glVertex2f(0.46, 0.38 );
glVertex2f( 0.46, 0.27);
glVertex2f( 0.47, 0.27 );
glVertex2f( 0.47, 0.38);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0, 51, 0);
glVertex2f(0.46, 0.48 );
glVertex2f( 0.43, 0.37);
glVertex2f( 0.5, 0.37 );
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0, 51, 0);
glVertex2f(0.46, 0.48 );
glVertex2f( 0.43, 0.39);
glVertex2f( 0.5, 0.39);
glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(0, 51, 0);
glVertex2f(0.46, 0.48 );
glVertex2f( 0.43, 0.41);
glVertex2f( 0.5, 0.41 );
glEnd();



//tree
glBegin(GL_QUADS);
glColor3ub(204, 51, 0);
glVertex2f(-0.26, 0.38 );
glVertex2f( -0.26, 0.27);
glVertex2f( -0.27, 0.27 );
glVertex2f( -0.27, 0.38);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0, 51, 0);
glVertex2f(-0.26, 0.48 );
glVertex2f( -0.23, 0.37);
glVertex2f( -0.3, 0.37 );
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(0, 51, 0);
glVertex2f(-0.26, 0.48 );
glVertex2f( -0.23, 0.39);
glVertex2f( -0.3, 0.39 );
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(0, 51, 0);
glVertex2f(-0.26, 0.48 );
glVertex2f( -0.23, 0.41);
glVertex2f( -0.3, 0.41 );
glEnd();



    //windmill
glBegin(GL_LINES);
glColor3ub(26, 26, 0);
glVertex2f(-0.75, 0.5 );
glVertex2f(-0.8, 0.27 );
glVertex2f(-0.75, 0.5 );
glVertex2f(-0.7, 0.27 );
glVertex2f(-0.75, 0.5 );
glVertex2f(-0.75, 0.27 );
glVertex2f(-0.75, 0.5 );

glVertex2f(-0.736, 0.436 );
glVertex2f(-0.763, 0.436 );
glVertex2f(-0.736, 0.436 );
glVertex2f(-0.75, 0.41 );
glVertex2f(-0.736, 0.436 );
glVertex2f(-0.763, 0.436 );
glVertex2f(-0.75, 0.41 );


glVertex2f(-0.730, 0.407 );
glVertex2f(-0.769, 0.407 );
glVertex2f(-0.730, 0.407 );
glVertex2f(-0.75, 0.36 );
glVertex2f(-0.769, 0.407 );
glVertex2f(-0.730, 0.407 );
glVertex2f(-0.769, 0.407 );
glVertex2f(-0.75, 0.36 );

glVertex2f(-0.721, 0.36 );
glVertex2f(-0.78, 0.36 );
glVertex2f(-0.721, 0.36 );
glVertex2f(-0.75, 0.30 );
glVertex2f(-0.78, 0.36 );
glVertex2f(-0.721, 0.36);
glVertex2f(-0.78, 0.36);
glVertex2f(-0.75, 0.30 );

glEnd();


        glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack,
glTranslatef(-0.75,0.51,0);
glRotatef(o,0.0,0.0,1.0);//i=how many degree you want to rotate around an axis




glBegin(GL_TRIANGLES);
glColor3ub(153, 153, 102);
glVertex2f(0.0, 0.0 );
glVertex2f(0.087, 0.0007);
glVertex2f(0.078, 0.047 );


glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(153, 153, 102);
glVertex2f(0, 0 );
glVertex2f(-0.05, 0.08);
glVertex2f(-0.0005, 0.095 );




glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(153, 153, 102);
glVertex2f(0.0, 0.0 );
glVertex2f(-0.091, -0.0003 );
glVertex2f(-0.081, -0.05 );
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(153, 153, 102);
glVertex2f(0.0, 0.0 );
glVertex2f(0.0003, -0.088 );
glVertex2f(0.052, -0.07 );
glEnd();


glEnd();
glPopMatrix();//glPopMatrix pops the top matrix off the stack
    o+=0.1f;//i=i+.1=.2
glEnd();

int z;//windmill
    GLfloat c=-.75f; GLfloat d=.51f; GLfloat radius2 =.015f;
	int triangleAmount2 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 77);
		glVertex2f(c, d); // center of circle
		for(z = 0; z <= triangleAmount2;z++) {
			glVertex2f(
		            c+ (radius2 * cos(z *  twicePi2 / triangleAmount2)),
			    d+ (radius2 * sin(z * twicePi2 / triangleAmount2))
			);
		}
	glEnd();

//clock_tower
glBegin(GL_QUADS);
glColor3ub(153, 38, 0);
glVertex2f(-0.48, 0.68);
glVertex2f(-0.48, 0.29);
glVertex2f( -0.36, 0.29 );
glVertex2f( -0.36, 0.68);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 235, 153);
glVertex2f(-0.49, 0.82);
glVertex2f(-0.49, 0.65);
glVertex2f( -0.345, 0.65 );
glVertex2f(-0.345, 0.82);
glEnd();
glBegin(GL_QUADS);
glColor3ub(198, 140, 83);
glVertex2f(-0.52, 0.84);
glVertex2f(-0.52, 0.82);
glVertex2f( -0.32, 0.82 );
glVertex2f(-0.32, 0.84);
glEnd();

glBegin(GL_QUADS);
glColor3ub(198, 140, 83);
glVertex2f(-0.49, 0.86);
glVertex2f(-0.49, 0.84);
glVertex2f( -0.345, 0.84 );
glVertex2f(-0.345, 0.86);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(153, 38, 0);
glVertex2f(-0.42, 0.9 );
glVertex2f(-0.49, 0.86 );
glVertex2f(-0.345, 0.86);
glEnd();

//design_clock
glBegin(GL_QUADS);
glColor3ub(255, 102, 51);
glVertex2f(-0.48, 0.64);
glVertex2f(-0.48, 0.61);
glVertex2f( -0.36, 0.61 );
glVertex2f(-0.36, 0.64);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 102, 51);
glVertex2f(-0.47, 0.6);
glVertex2f(-0.47, 0.5);
glVertex2f( -0.46, 0.5 );
glVertex2f(-0.46, 0.6);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 102, 51);
glVertex2f(-0.45, 0.6);
glVertex2f(-0.45, 0.5);
glVertex2f( -0.44, 0.5 );
glVertex2f(-0.44, 0.6);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 102, 51);
glVertex2f(-0.43, 0.6);
glVertex2f(-0.43, 0.5);
glVertex2f( -0.41, 0.5 );
glVertex2f(-0.41, 0.6);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 102, 51);
glVertex2f(-0.4, 0.6);
glVertex2f(-0.4, 0.5);
glVertex2f( -0.39, 0.5 );
glVertex2f(-0.39, 0.6);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 102, 51);
glVertex2f(-0.38, 0.6);
glVertex2f(-0.38, 0.5);
glVertex2f( -0.37, 0.5 );
glVertex2f(-0.37, 0.6);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 102, 51);
glVertex2f(-0.47, 0.48);
glVertex2f(-0.47, 0.44);
glVertex2f( -0.46, 0.44 );
glVertex2f(-0.46, 0.48);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 102, 51);
glVertex2f(-0.45, 0.48);
glVertex2f(-0.45, 0.44);
glVertex2f( -0.44, 0.44 );
glVertex2f(-0.44, 0.48);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 102, 51);
glVertex2f(-0.4, 0.48);
glVertex2f(-0.4, 0.44);
glVertex2f( -0.39, 0.44 );
glVertex2f(-0.39, 0.48);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 102, 51);
glVertex2f(-0.38, 0.48);
glVertex2f(-0.38, 0.44);
glVertex2f( -0.37, 0.44 );
glVertex2f(-0.37, 0.48);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 102, 51);
glVertex2f(-0.47, 0.42);
glVertex2f(-0.47, 0.34);
glVertex2f( -0.46, 0.34 );
glVertex2f(-0.46, 0.42);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 102, 51);
glVertex2f(-0.45, 0.42);
glVertex2f(-0.45, 0.34);
glVertex2f( -0.44, 0.34 );
glVertex2f(-0.44, 0.42);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 102, 51);
glVertex2f(-0.43, 0.42);
glVertex2f(-0.43, 0.34);
glVertex2f( -0.41, 0.34 );
glVertex2f(-0.41, 0.42);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 102, 51);
glVertex2f(-0.4, 0.42);
glVertex2f(-0.4, 0.34);
glVertex2f( -0.39, 0.34 );
glVertex2f(-0.39, 0.42);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 102, 51);
glVertex2f(-0.38, 0.42);
glVertex2f(-0.38, 0.34);
glVertex2f( -0.37, 0.34 );
glVertex2f(-0.37, 0.42);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 102, 51);
glVertex2f(-0.48, 0.32);
glVertex2f(-0.48, 0.29);
glVertex2f( -0.36, 0.29 );
glVertex2f(-0.36, 0.32);
glEnd();

int f;//clock
    GLfloat e=-.419f; GLfloat g=0.73f; GLfloat radius3 =.065f;
	int triangleAmount3 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi3 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 235, 230); // clock
		glVertex2f(e, g); // center of circle
		for(f = 0; f <= triangleAmount3;f++) {
			glVertex2f(
		            e + (radius3 * cos(f *  twicePi3 / triangleAmount3)),
			    g + (radius3 * sin(f * twicePi3 / triangleAmount3))
			);
		}
	glEnd();

glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0);
glVertex2f(-0.42, 0.794);
glVertex2f(-0.42,0.78);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0);
glVertex2f(-0.42, 0.68);
glVertex2f(-0.42,0.668);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0);
glVertex2f(-0.365, 0.73);
glVertex2f(-0.356,0.73);
glEnd();

glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0);
glVertex2f(-0.48, 0.73);
glVertex2f(-0.47,0.73);

glVertex2f(-0.39, 0.788);
glVertex2f(-0.395,0.772);
glVertex2f(-0.37, 0.77);
glVertex2f(-0.378,0.759);
glVertex2f(-0.377, 0.706);
glVertex2f(-0.369,0.6966);
glVertex2f(-0.394, 0.69);
glVertex2f(-0.3887,0.6759);
glVertex2f(-0.447, 0.69);
glVertex2f(-0.451,0.6759);
glVertex2f(-0.4634, 0.706);
glVertex2f(-0.4703,0.6966);
glVertex2f(-0.45, 0.788);
glVertex2f(-0.447,0.773);
glVertex2f(-0.47, 0.77);
glVertex2f(-0.46,0.76);
glEnd();

//min_sec_stick
glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack,
glTranslatef(-0.419, 0.73,0);
glRotatef(m,0.0,0.0,-0.1);//i=how many degree you want to rotate around an axis

	glBegin(GL_TRIANGLES);
    glColor3ub(51, 51, 0);
    glVertex2f(0.0, 0.0);
    glVertex2f(0.0, 0.011 );
    glVertex2f(0.04, 0.04);
    glEnd();
glEnd();
glPopMatrix();//glPopMatrix pops the top matrix off the stack
m+=0.1f;//i=i+.1=.2
glLoadIdentity();
glEnd();

glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack,
glTranslatef(-0.419, 0.73,0);
glRotatef(n,0.0,0.0,-0.1);
    glBegin(GL_TRIANGLES);
    glColor3ub(51, 51, 0);
    glVertex2f(0.0, 0.0 );
    glVertex2f(-0.02, 0.029 );
    glVertex2f(-0.0082, -0.0048);
    glEnd();
glPopMatrix();//glPopMatrix pops the top matrix off the stack
n+=0.009f;//i=i+.1=.2
glLoadIdentity();
glEnd();


glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack,
glTranslatef(-0.419, 0.73,0);
glRotatef(v,0.0,0.0,-0.1);
    glBegin(GL_LINES);
    glColor3ub(51, 51, 0);
    glVertex2f(0,0 );
    glVertex2f(0.04, -0.05 );
    glEnd();
glPopMatrix();//glPopMatrix pops the top matrix off the stack
v+=0.3f;//i=i+.1=.2
glLoadIdentity();

	int w;//clock
    GLfloat r=-.419f; GLfloat p=0.73f; GLfloat radius4 =.009f;
	int triangleAmount4 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi4 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(190, 65, 130); // clock
		glVertex2f(r, p); // center of circle
		for(w = 0; w <= triangleAmount4;w++) {
			glVertex2f(
		            r + (radius4 * cos(w *  twicePi4 / triangleAmount4)),
			    p+ (radius4 * sin(w * twicePi4 / triangleAmount4))
			);
		}
	glEnd();
	//light
glEnable(GL_LIGHTING);//Enable Light Effect
GLfloat global_ambient1[] = {206,206,0.0,0.1};//ambient RGBA intensity of light
  glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient1);//A lighting model parameter.

glBegin(GL_QUADS);
glColor3ub(204, 204, 0);
glVertex2f(0.47, 0.42 );
glVertex2f( 0.47, 0.4 );
glVertex2f( 0.5, 0.4 );
glVertex2f(0.5, 0.42);
glEnd();
glBegin(GL_QUADS);
glColor3ub(204, 204, 0);
glVertex2f(-0.19, 0.42 );
glVertex2f( -0.19, 0.4 );
glVertex2f( -0.22, 0.4 );
glVertex2f(-0.22, 0.42);
glEnd();
glDisable(GL_LIGHTING);//Enable Light Effect
glBegin(GL_QUADS);
glColor3ub(71, 71, 107);
glVertex2f(0.482, 0.4);
glVertex2f(0.482, 0.2);
glVertex2f(0.488, 0.2 );
glVertex2f(0.488, 0.4);
glEnd();

glBegin(GL_QUADS);
glColor3ub(71, 71, 107);
glVertex2f(-0.21, 0.4);
glVertex2f(-0.21, 0.2);
glVertex2f(-0.204, 0.2);
glVertex2f(-0.204, 0.4);
glEnd();



glEnd();
glFlush();
}






void demo_late_night(int val){

glutDisplayFunc(late_night);
glLoadIdentity();
sound2();
}








void night() {
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);


//sky
glBegin(GL_QUADS);
glColor3ub(102, 217, 255);
glVertex2f( -1.0, 1.0 );
glVertex2f( -1.0, -1 );
glVertex2f( 1.0, -1 );
glVertex2f( 1.0, 1.0 );
glEnd();

int i;//sun
    GLfloat a=-.84f; GLfloat b=.86f; GLfloat radius1 =.08f;
	int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 0);
		glVertex2f(a, b); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a+ (radius1 * cos(i *  twicePi / triangleAmount)),
			    b+ (radius1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


glPushMatrix();
glTranslatef(position2,0,position2);
glBegin(GL_QUADS);
glColor3ub(255, 255, 255);
glVertex2f( 0.04, 0.86);
glVertex2f( 0.04, 0.85);
glVertex2f( 0.1, 0.85);
glVertex2f( 0.1,0.86 );
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(255, 255, 255);
glVertex2f( 0.05, 0.88);
glVertex2f( 0.04, 0.86);
glVertex2f( 0.07, 0.86);
glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(255, 255, 255);
glVertex2f( 0.084, 0.9);
glVertex2f( 0.06, 0.86);
glVertex2f( 0.1, 0.86);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(255, 255, 255);
glVertex2f( 0.44, 0.78);
glVertex2f(0.42, 0.75);
glVertex2f( 0.47, 0.75);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(255, 255, 255);
glVertex2f( 0.48, 0.8);
glVertex2f(0.45, 0.75);
glVertex2f( 0.51, 0.75);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(255, 255, 255);
glVertex2f( 0.7, 0.94);
glVertex2f(0.68, 0.92);
glVertex2f(0.72, 0.92);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(255, 255, 255);
glVertex2f(0.72, 0.96);
glVertex2f(0.7, 0.92);
glVertex2f(0.76, 0.92);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(255, 255, 255);
glVertex2f(-0.68, 0.88);
glVertex2f(-0.7, 0.84);
glVertex2f(-0.64, 0.84);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(255, 255, 255);
glVertex2f(-0.64, 0.89);
glVertex2f(-0.67, 0.84);
glVertex2f(-0.62, 0.84);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(255, 255, 255);
glVertex2f(-0.24, 0.92);
glVertex2f(-0.26, 0.88);
glVertex2f(-0.2, 0.88);
glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(255, 255, 255);
glVertex2f(-0.2, 0.94);
glVertex2f(-0.23, 0.88);
glVertex2f(-0.16, 0.88);
glEnd();


glPopMatrix();
glEnd();
glEnd();



//background_buildings

glBegin(GL_QUADS);
glColor3ub(0, 204, 204);
glVertex2f( -1, 0.55 );
glVertex2f( -1, 0.25 );
glVertex2f( -0.9, 0.25);
glVertex2f( -0.9, 0.55);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 204, 204);
glVertex2f( -0.9, 0.25 );
glVertex2f( -0.9, 0.7 );
glVertex2f( -0.8, 0.7);
glVertex2f( -0.8, 0.25);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 204, 204);
glVertex2f( -0.8, 0.5 );
glVertex2f( -0.8, 0.25);
glVertex2f( -0.7, 0.25);
glVertex2f( -0.7, 0.5);
glEnd();


glBegin(GL_QUADS);
glColor3ub(0, 204, 204);
glVertex2f( -0.7, 0.45);
glVertex2f( -0.7, 0.25);
glVertex2f( -0.6, 0.25);
glVertex2f( -0.6, 0.45);
glEnd();


glBegin(GL_QUADS);
glColor3ub(0, 204, 204);
glVertex2f( -0.6, 0.6 );
glVertex2f( -0.6, 0.25);
glVertex2f( -0.55, 0.25);
glVertex2f( -0.55, 0.6);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 204, 204);
glVertex2f( -0.55, 0.55 );
glVertex2f( -0.55, 0.25);
glVertex2f( -0.48, 0.25);
glVertex2f( -0.48, 0.55);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 204, 204);
glVertex2f( -0.35, 0.5 );
glVertex2f( -0.35, 0.25);
glVertex2f( -0.3, 0.25);
glVertex2f( -0.3, 0.5);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 204, 204);
glVertex2f( -0.3, 0.7);
glVertex2f( -0.3, 0.25);
glVertex2f( -0.22, 0.25);
glVertex2f( -0.22, 0.7);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 204, 204);
glVertex2f( -0.22, 0.6);
glVertex2f( -0.22, 0.25);
glVertex2f( -0.15, 0.25);
glVertex2f( -0.15, 0.6);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 204, 204);
glVertex2f( -0.15, 0.65);
glVertex2f( -0.15, 0.25);
glVertex2f( -0.07, 0.25);
glVertex2f( -0.07, 0.65);
glEnd();


glBegin(GL_QUADS);
glColor3ub(0, 204, 204);
glVertex2f( -0.07, 0.6);
glVertex2f( -0.07, 0.25);
glVertex2f( 0.0, 0.25);
glVertex2f( 0.0, 0.6);
glEnd();


glBegin(GL_QUADS);
glColor3ub(0, 204, 204);
glVertex2f( 0.4, 0.6);
glVertex2f( 0.4, 0.25);
glVertex2f( 0.2, 0.25);
glVertex2f( 0.2, 0.6);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 204, 204);
glVertex2f( 0.4, 0.5);
glVertex2f( 0.4, 0.25);
glVertex2f( 0.5, 0.25);
glVertex2f( 0.5, 0.5);
glEnd();
glBegin(GL_QUADS);
glColor3ub(0, 204, 204);
glVertex2f( 0.5, 0.65);
glVertex2f( 0.5, 0.25);
glVertex2f( 0.55, 0.25);
glVertex2f( 0.55, 0.65);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 204, 204);
glVertex2f( 0.55, 0.56);
glVertex2f( 0.55, 0.25);
glVertex2f( 0.65, 0.25);
glVertex2f( 0.65, 0.56);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 204, 204);
glVertex2f( 0.65, 0.46);
glVertex2f( 0.65, 0.25);
glVertex2f( 0.73, 0.25);
glVertex2f( 0.73, 0.46);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 204, 204);
glVertex2f( 0.73, 0.5);
glVertex2f( 0.73, 0.25);
glVertex2f( 0.85, 0.25);
glVertex2f( 0.85, 0.5);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 204, 204);
glVertex2f( 0.85, 0.7);
glVertex2f( 0.85, 0.25);
glVertex2f( 0.9, 0.25);
glVertex2f( 0.9, 0.7);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 204, 204);
glVertex2f( 0.9, 0.55);
glVertex2f( 0.9, 0.25);
glVertex2f( 0.95, 0.25);
glVertex2f( 0.95, 0.55);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 204, 204);
glVertex2f( 0.95, 0.5);
glVertex2f( 0.95, 0.25);
glVertex2f( 1.0, 0.25);
glVertex2f( 1.0, 0.5);
glEnd();




//road
glBegin(GL_QUADS);
glColor3ub(77,77,77);
glVertex2f( -1.0, -0.5 );
glVertex2f( -1.0, -1 );
glVertex2f( 1.0, -1 );
glVertex2f( 1.0, -0.5 );
glEnd();

//ROAD DOT
glBegin(GL_QUADS);
glColor3ub(204, 204, 0);
glVertex2f( -0.9, -0.7 );
glVertex2f( -0.85, -0.75 );
glVertex2f( -0.65, -0.75 );
glVertex2f( -.7f, -0.7f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(204, 204, 0);
glVertex2f( -0.55, -0.7 );
glVertex2f( -0.5, -0.75 );
glVertex2f( -0.3, -0.75 );
glVertex2f( -0.35, -0.7);
glEnd();

glBegin(GL_QUADS);
glColor3ub(204, 204, 0);
glVertex2f( -0.2, -0.7 );
glVertex2f( -0.15, -0.75 );
glVertex2f( 0.05, -0.75 );
glVertex2f( 0, -0.7);
glEnd();

glBegin(GL_QUADS);
glColor3ub(204, 204, 0);
glVertex2f( 0.15, -0.7 );
glVertex2f( 0.2, -0.75);
glVertex2f( 0.4, -0.75 );
glVertex2f( 0.35, -0.7);
glEnd();

glBegin(GL_QUADS);
glColor3ub(204, 204, 0);
glVertex2f( 0.5, -0.7 );
glVertex2f( 0.55, -0.75);
glVertex2f( 0.75, -0.75 );
glVertex2f( 0.7, -0.7);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 255, 51);
glVertex2f( 0.85, -0.7 );
glVertex2f( 0.9, -0.75);
glVertex2f( 1.1, -0.75 );
glVertex2f( 1.05, -0.7);
glEnd();

glBegin(GL_QUADS);
glColor3ub(204, 204, 0);
glVertex2f( -1.25, -0.7 );
glVertex2f( -1.2, -0.75);
glVertex2f( -1, -0.75 );
glVertex2f( -1.05, -0.7);
glEnd();

//grass
glBegin(GL_QUADS);
glColor3ub(0, 179, 0);
glVertex2f(-1.39, -0.24 );
glVertex2f( -1.4, -0.5);
glVertex2f( 1.2, -0.5 );
glVertex2f( 1.2, -0.24);
glEnd();

//upper runway
glBegin(GL_QUADS);
glColor3ub(77,77,77);
glVertex2f(-1.4, 0.2 );
glVertex2f( -1.39, -0.24);
glVertex2f( 1.2, -0.24 );
glVertex2f( 1.2, 0.2);
glEnd();

//upper grass
glBegin(GL_QUADS);
glColor3ub(0, 179, 0);
glVertex2f(-1.0, 0.3 );
glVertex2f( -1.0, 0.165);
glVertex2f( 1.0, 0.165 );
glVertex2f( 1.0, 0.3);
glEnd();

//upper runway dot
glBegin(GL_QUADS);
glColor3ub(204, 204, 0);
glVertex2f( -1.23,-0.003 );
glVertex2f( -1.2, -0.1 );
glVertex2f( -1, -0.1 );
glVertex2f(-1.04, -0.003);
glEnd();

glBegin(GL_QUADS);
glColor3ub(204, 204, 0);
glVertex2f( -0.94,-0.004 );
glVertex2f( -0.88, -0.05 );
glVertex2f( -0.67, -0.05 );
glVertex2f(-0.73,  -0.004);
glEnd();

glBegin(GL_QUADS);
glColor3ub(204, 204, 0);
glVertex2f( -0.56,-0.004 );
glVertex2f( -0.49, -0.05 );
glVertex2f( -0.28, -0.05 );
glVertex2f(-0.35,  -0.004);
glEnd();

glBegin(GL_QUADS);
glColor3ub(204, 204, 0);
glVertex2f( -0.2,-0.004 );
glVertex2f( -0.117, -0.05 );
glVertex2f( 0.099, -0.05 );
glVertex2f(0.011,  -0.004);
glEnd();

glBegin(GL_QUADS);
glColor3ub(204, 204, 0);
glVertex2f( 0.16,-0.004 );
glVertex2f( 0.25, -0.05 );
glVertex2f( 0.46, -0.05 );
glVertex2f(0.37,  -0.004);
glEnd();

glBegin(GL_QUADS);
glColor3ub(204, 204, 0);
glVertex2f( 0.53,-0.004 );
glVertex2f( 0.62, -0.05 );
glVertex2f( 0.83, -0.05 );
glVertex2f(0.74,  -0.004);
glEnd();

glBegin(GL_QUADS);
glColor3ub(204, 204, 0);
glVertex2f( 0.88,-0.004 );
glVertex2f( 0.97, -0.05 );
glVertex2f( 1.2, -0.05 );
glVertex2f(1.06,  -0.004);
glEnd();

//upper_runway_line
glBegin(GL_QUADS);
glColor3ub(204, 204, 0);
glVertex2f(-1.4,-0.25 );
glVertex2f( -1.4, -0.24 );
glVertex2f( 1.2, -0.24 );
glVertex2f(1.2,  -0.25);
glEnd();

glBegin(GL_QUADS);
glColor3ub(204, 204, 0);
glVertex2f(-1.4,0.17 );
glVertex2f( -1.4, 0.16 );
glVertex2f( 1.2, 0.16 );
glVertex2f(1.2,  0.17);
glEnd();
//lower_line_runway
glBegin(GL_QUADS);
glColor3ub(255, 255, 51);
glVertex2f(-1., -0.5 );
glVertex2f( -1., -0.49 );
glVertex2f( 1, -0.49 );
glVertex2f(1,  -0.5);
glEnd();

glBegin(GL_QUADS);
glColor3ub(204, 204, 0);
glVertex2f(-1, -1 );
glVertex2f( -1, -0.98 );
glVertex2f( 1, -0.98 );
glVertex2f(1,  -1);
glEnd();




//plane
glPushMatrix();
glTranslatef(position,0,position);
glBegin(GL_QUADS);//body
glColor3ub(242, 242, 242);
glVertex2f(-0.88,  -0.36 );
glVertex2f( -0.80, -0.60);
glVertex2f( -0.35, -0.60 );
glVertex2f( -0.35,  -0.36);
glEnd();

glBegin(GL_QUADS);//plane lower body line
glColor3ub(0, 0, 153);
glVertex2f(-0.83,-0.53 );
glVertex2f( -0.82, -0.54);
glVertex2f( -0.35, -0.54 );
glVertex2f( -0.35,  -0.53);
glEnd();
glBegin(GL_QUADS);//middle wing of plane
glColor3ub(0, 0, 153);
glVertex2f(-0.86, -0.4 );
glVertex2f( -0.93, -0.5);
glVertex2f( -0.89, -0.5 );
glVertex2f( -0.75,  -0.4);
glEnd();

glBegin(GL_QUADS);//upper back wing
glColor3ub(242, 242, 242);
glVertex2f(-0.88,  -0.18 );
glVertex2f( -0.88, -0.36);
glVertex2f( -0.716, -0.36 );
glVertex2f( -0.82,   -0.18);
glEnd();
glBegin(GL_QUADS);//middle wing of plane line
glColor3ub(0, 0, 153);
glVertex2f(-0.83, -0.18 );
glVertex2f( -0.73, -0.36);
glVertex2f( -0.71, -0.36 );
glVertex2f( -0.82,  -0.18);
glEnd();
glBegin(GL_QUADS);//middle wing of plane line
glColor3ub(0, 0, 153);
glVertex2f(-0.88, -0.18 );
glVertex2f( -0.88, -0.2);
glVertex2f( -0.81, -0.2 );
glVertex2f( -0.82,  -0.18);
glEnd();

glBegin(GL_QUADS);//middle wing of plane
glColor3ub(0, 0, 153);
glVertex2f(-0.72, -0.2 );
glVertex2f( -0.62, -0.36);
glVertex2f( -0.49, -0.36 );
glVertex2f( -0.67,  -0.2);
glEnd();

glBegin(GL_QUADS);//middle wing lower of plane
glColor3ub(0, 0, 153);
glVertex2f(-0.68, -0.51 );
glVertex2f( -0.65,  -0.55);
glVertex2f( -0.52,  -0.55 );
glVertex2f( -0.48,  -0.51);
glEnd();

glBegin(GL_QUADS);//middle wing lower of plane
glColor3ub(0, 0, 153);
glVertex2f(-0.65, -0.55 );
glVertex2f( -0.73, -0.71);
glVertex2f( -0.68,  -0.71 );
glVertex2f( -0.52,  -0.55);
glEnd();

glBegin(GL_LINES);//gate plane
glColor3ub(0, 0, 153);
glVertex2f(-0.7,-0.40 );
glVertex2f( -0.74,  -0.40);
glVertex2f( -0.74, -0.5);
glVertex2f( -0.7, -0.5);
glVertex2f( -0.7, -0.5);
glVertex2f(-0.7,-0.40);
glVertex2f( -0.74, -0.5);
glVertex2f( -0.74,  -0.40);
glEnd();

glBegin(GL_QUADS);//window plane
glColor3ub(0, 51, 102);
glVertex2f(-0.68, -0.45 );
glVertex2f( -0.68, -0.5);
glVertex2f( -0.65, -0.5 );
glVertex2f( -0.65,  -0.45);
glEnd();

glBegin(GL_QUADS);//window plane
glColor3ub(0, 51, 102);
glVertex2f(-0.62, -0.45 );
glVertex2f( -0.62, -0.5);
glVertex2f( -0.59, -0.5 );
glVertex2f( -0.59,  -0.45);
glEnd();

glBegin(GL_QUADS);//window plane
glColor3ub(0, 51, 102);
glVertex2f(-0.56, -0.45 );
glVertex2f( -0.56, -0.5);
glVertex2f( -0.53, -0.5 );
glVertex2f( -0.53,  -0.45);
glEnd();

glBegin(GL_QUADS);//window plane
glColor3ub(0, 51, 102);
glVertex2f(-0.50, -0.45 );
glVertex2f( -0.50, -0.5);
glVertex2f( -0.47, -0.5 );
glVertex2f( -0.47,  -0.45);
glEnd();

glBegin(GL_QUADS);//window plane
glColor3ub(0, 51, 102);
glVertex2f(-0.44, -0.45 );
glVertex2f( -0.44, -0.5);
glVertex2f( -0.41, -0.5 );
glVertex2f( -0.41,  -0.45);
glEnd();

glBegin(GL_QUADS);//window plane
glColor3ub(0, 51, 102);
glVertex2f(-0.38, -0.45 );
glVertex2f( -0.38, -0.5);
glVertex2f( -0.35, -0.5 );
glVertex2f( -0.35,  -0.45);
glEnd();

glBegin(GL_QUADS);//place face upper
glColor3ub(242, 242, 242);
glVertex2f(-0.35,  -0.36 );
glVertex2f( -0.35, -0.48);
glVertex2f( -0.17, -0.48 );
glVertex2f( -0.26,  -0.36);
glEnd();

glBegin(GL_QUADS);//window front plane
glColor3ub(0, 51, 102);
glVertex2f(-0.32, -0.39 );
glVertex2f( -0.29, -0.48);
glVertex2f( -0.169, -0.48);
glVertex2f( -0.238,  -0.39);
glEnd();
glBegin(GL_QUADS);//place face lower
glColor3ub(242, 242, 242);
glVertex2f(-0.35,  -0.48 );
glVertex2f( -0.35, -0.6);
glVertex2f( -0.26, -0.6 );
glVertex2f( -0.17,   -0.48);
glEnd();

glBegin(GL_QUADS);//place weel stand lower
glColor3f(0, 0, 0);
glVertex2f(-0.36,  -0.6);
glVertex2f( -0.36, -0.64);
glVertex2f( -0.35, -0.64);
glVertex2f( -0.35,   -0.6);
glEnd();

int j;//wheel
    GLfloat x=-.357f; GLfloat y=-0.64f; GLfloat radius =.015f;
	int triangleAmount1 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi1 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(242, 242, 242); //
		glVertex2f(x, y); // center of circle
		for(j = 0; j <= triangleAmount1;j++) {
			glVertex2f(
		            x + (radius * cos(j *  twicePi1 / triangleAmount1)),
			    y + (radius * sin(j * twicePi1 / triangleAmount1))
			);
		}
	glEnd();
	glPopMatrix();





//tower
glBegin(GL_QUADS);
glColor3ub(0, 107, 179);
glVertex2f(0.59, 0.43 );
glVertex2f( 0.59, 0.4);
glVertex2f( 0.95, 0.4 );
glVertex2f( 0.95, 0.43);
glEnd();



glBegin(GL_QUADS);
glColor3ub(184, 184, 148);
glVertex2f(0.65, 0.4 );
glVertex2f( 0.65, 0.2);
glVertex2f( 0.89, 0.2 );
glVertex2f( 0.89, 0.4);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 107, 179);
glVertex2f(0.74, 0.32);
glVertex2f( 0.74, 0.3);
glVertex2f( 0.82, 0.3 );
glVertex2f( 0.82, 0.32);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 255, 255);
glVertex2f(0.75, 0.30);
glVertex2f( 0.75, 0.2);
glVertex2f( 0.81, 0.2 );
glVertex2f( 0.81, 0.30);
glEnd();
glBegin(GL_QUADS);
glColor3ub(184, 184, 148);
glVertex2f(0.81, 0.55 );
glVertex2f( 0.81, 0.43);
glVertex2f( 0.87, 0.43 );
glVertex2f( 0.87, 0.55);
glEnd();
glBegin(GL_QUADS);
glColor3ub(0, 107, 179);
glVertex2f(0.81, 0.56);
glVertex2f( 0.81, 0.55);
glVertex2f( 0.87, 0.55 );
glVertex2f( 0.87, 0.56);
glEnd();

glBegin(GL_QUADS);
glColor3ub(128, 204, 255);
glVertex2f(0.79, 0.6);
glVertex2f( 0.81, 0.56);
glVertex2f( 0.87, 0.56 );
glVertex2f( 0.89, 0.6);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 107, 179);
glVertex2f(0.78, 0.62);
glVertex2f(0.78, 0.6);
glVertex2f( 0.9, 0.6 );
glVertex2f( 0.9, 0.62);
glEnd();
glBegin(GL_QUADS);
glColor3ub(128, 204, 255);
glVertex2f(0.77, 0.7);
glVertex2f( 0.78, 0.62);
glVertex2f( 0.9, 0.62);
glVertex2f( 0.91, 0.7);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 107, 179);
glVertex2f(0.77, 0.72);
glVertex2f(0.77, 0.7);
glVertex2f( 0.91, 0.7 );
glVertex2f( 0.91, 0.72);
glEnd();

glBegin(GL_QUADS);
glColor3ub(128, 204, 255);
glVertex2f(0.8, 0.84);
glVertex2f( 0.81, 0.72);
glVertex2f( 0.87, 0.72);
glVertex2f( 0.883, 0.84);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 107, 179);
glVertex2f(0.8, 0.86);
glVertex2f(0.8, 0.84);
glVertex2f( 0.883, 0.84 );
glVertex2f( 0.883, 0.86);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 107, 179);
glVertex2f(0.84, 0.96);
glVertex2f(0.84, 0.86);
glVertex2f( 0.85, 0.86 );
glVertex2f( 0.85, 0.96);
glEnd();
//antenna_tower
glPushMatrix();
glTranslatef(0.8445,0.94,0.0);
glRotatef(l,0.0,1.01,0.0);
glBegin(GL_QUADS);
glColor3ub(0, 107, 179);
glVertex2f(0.0, 0.0);
glVertex2f(0.005, -0.007);
glVertex2f( 0.047,  0.041);
glVertex2f( 0.042, 0.05);
glEnd();
glPopMatrix();
l+=0.099f;
glLoadIdentity();

glBegin(GL_LINES);
glColor3ub(204, 242, 255);
glVertex2f(0.81, 0.84);
glVertex2f(0.82, 0.72);
glVertex2f(0.84, 0.84 );
glVertex2f( 0.84, 0.72);
glVertex2f(0.87, 0.84 );
glVertex2f( 0.86, 0.72);
glVertex2f(0.8, 0.8 );
glVertex2f( 0.88, 0.8);
glVertex2f(0.805, 0.74 );
glVertex2f( 0.875, 0.74);
glVertex2f(0.79, 0.699 );
glVertex2f( 0.806, 0.621);
glVertex2f(0.84, 0.699 );
glVertex2f( 0.84, 0.621);
glVertex2f(0.89, 0.699 );
glVertex2f( 0.875, 0.621);
glVertex2f(0.77, 0.66 );
glVertex2f( 0.91, 0.66);
glVertex2f(0.825, 0.6 );
glVertex2f( 0.825, 0.56);
glVertex2f(0.855, 0.6 );
glVertex2f( 0.855, 0.56);
glVertex2f(0.8, 0.58 );
glVertex2f( 0.88, 0.58);
glEnd();


//building

glBegin(GL_QUADS);
glColor3ub(102, 102, 153);
glVertex2f(-0.2, 0.55);
glVertex2f(-0.2, 0.5);
glVertex2f( 0.4,  0.5 );
glVertex2f( 0.4, 0.55);
glEnd();



glBegin(GL_QUADS);
glColor3ub(184, 184, 148);
glVertex2f(-0.17, 0.5);
glVertex2f(-0.17, 0.27);
glVertex2f( 0.37,  0.27 );
glVertex2f( 0.37, 0.5);
glEnd();

glBegin(GL_LINES);
glColor3ub(242, 242, 242);
glVertex2f(-0.17, 0.5 );
glVertex2f( 0.37, 0.5);
glVertex2f(-0.17, 0.27 );
glVertex2f( 0.37, 0.27);
glVertex2f(-0.06, 0.5);
glVertex2f(-0.06, 0.27);
glVertex2f(0.05, 0.5);
glVertex2f(0.05, 0.27);
glVertex2f(0.16, 0.5);
glVertex2f(0.16, 0.27);
glVertex2f(0.27, 0.5);
glVertex2f(0.27, 0.27);
glVertex2f(-0.17, 0.44);
glVertex2f(0.37, 0.44);
glVertex2f(-0.17, 0.37);
glVertex2f(0.37, 0.37);
glVertex2f(-0.17, 0.3);
glVertex2f(0.37, 0.3);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255,255, 255);
glVertex2f(0.006, 0.33 );
glVertex2f( 0.006, 0.27);
glVertex2f( 0.21, 0.27 );
glVertex2f( 0.21, 0.33);
glEnd();

glBegin(GL_QUADS);
glColor3ub(102, 102, 153);
glVertex2f(-0.07, 0.4);
glVertex2f(-0.07, 0.38);
glVertex2f( 0.28, 0.38 );
glVertex2f( 0.28, 0.4);
glEnd();

glBegin(GL_QUADS);
glColor3ub(122, 0, 153);
glVertex2f(-0.065, 0.38 );
glVertex2f( -0.065, 0.27);
glVertex2f( -0.06, 0.27 );
glVertex2f( -0.06, 0.38);
glEnd();

glBegin(GL_QUADS);
glColor3ub(122, 0, 153);
glVertex2f(0.019, 0.38 );
glVertex2f( 0.019, 0.27);
glVertex2f( 0.025, 0.27 );
glVertex2f( 0.025, 0.38);
glEnd();

glBegin(GL_QUADS);
glColor3ub(122, 0, 153);
glVertex2f(0.098, 0.38 );
glVertex2f( 0.098, 0.27);
glVertex2f( 0.104, 0.27 );
glVertex2f( 0.104, 0.38);
glEnd();

glBegin(GL_QUADS);
glColor3ub(122, 0, 153);
glVertex2f(0.187, 0.38 );
glVertex2f( 0.187, 0.27);
glVertex2f( 0.194, 0.27 );
glVertex2f( 0.194, 0.38);
glEnd();

glBegin(GL_QUADS);
glColor3ub(122, 0, 153);
glVertex2f(0.257, 0.38 );
glVertex2f( 0.257, 0.27);
glVertex2f( 0.265, 0.27 );
glVertex2f( 0.265, 0.38);
glEnd();

//tree
glBegin(GL_QUADS);
glColor3ub(204, 51, 0);
glVertex2f(0.46, 0.38 );
glVertex2f( 0.46, 0.27);
glVertex2f( 0.47, 0.27 );
glVertex2f( 0.47, 0.38);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0, 179, 0);
glVertex2f(0.46, 0.48 );
glVertex2f( 0.43, 0.37);
glVertex2f( 0.5, 0.37 );
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0, 179, 0);
glVertex2f(0.46, 0.48 );
glVertex2f( 0.43, 0.39);
glVertex2f( 0.5, 0.39);
glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(0, 179, 0);
glVertex2f(0.46, 0.48 );
glVertex2f( 0.43, 0.41);
glVertex2f( 0.5, 0.41 );
glEnd();



//tree
glBegin(GL_QUADS);
glColor3ub(204, 51, 0);
glVertex2f(-0.26, 0.38 );
glVertex2f( -0.26, 0.27);
glVertex2f( -0.27, 0.27 );
glVertex2f( -0.27, 0.38);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0, 179, 0);
glVertex2f(-0.26, 0.48 );
glVertex2f( -0.23, 0.37);
glVertex2f( -0.3, 0.37 );
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(0, 179, 0);
glVertex2f(-0.26, 0.48 );
glVertex2f( -0.23, 0.39);
glVertex2f( -0.3, 0.39 );
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(0, 179, 0);
glVertex2f(-0.26, 0.48 );
glVertex2f( -0.23, 0.41);
glVertex2f( -0.3, 0.41 );
glEnd();



    //windmill
glBegin(GL_LINES);
glColor3ub(26, 26, 0);
glVertex2f(-0.75, 0.5 );
glVertex2f(-0.8, 0.27 );
glVertex2f(-0.75, 0.5 );
glVertex2f(-0.7, 0.27 );
glVertex2f(-0.75, 0.5 );
glVertex2f(-0.75, 0.27 );
glVertex2f(-0.75, 0.5 );

glVertex2f(-0.736, 0.436 );
glVertex2f(-0.763, 0.436 );
glVertex2f(-0.736, 0.436 );
glVertex2f(-0.75, 0.41 );
glVertex2f(-0.736, 0.436 );
glVertex2f(-0.763, 0.436 );
glVertex2f(-0.75, 0.41 );


glVertex2f(-0.730, 0.407 );
glVertex2f(-0.769, 0.407 );
glVertex2f(-0.730, 0.407 );
glVertex2f(-0.75, 0.36 );
glVertex2f(-0.769, 0.407 );
glVertex2f(-0.730, 0.407 );
glVertex2f(-0.769, 0.407 );
glVertex2f(-0.75, 0.36 );

glVertex2f(-0.721, 0.36 );
glVertex2f(-0.78, 0.36 );
glVertex2f(-0.721, 0.36 );
glVertex2f(-0.75, 0.30 );
glVertex2f(-0.78, 0.36 );
glVertex2f(-0.721, 0.36);
glVertex2f(-0.78, 0.36);
glVertex2f(-0.75, 0.30 );

glEnd();


        glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack,
glTranslatef(-0.75,0.51,0);
glRotatef(o,0.0,0.0,1.0);//i=how many degree you want to rotate around an axis




glBegin(GL_TRIANGLES);
glColor3ub(153, 153, 102);
glVertex2f(0.0, 0.0 );
glVertex2f(0.087, 0.0007);
glVertex2f(0.078, 0.047 );


glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(153, 153, 102);
glVertex2f(0, 0 );
glVertex2f(-0.05, 0.08);
glVertex2f(-0.0005, 0.095 );




glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(153, 153, 102);
glVertex2f(0.0, 0.0 );
glVertex2f(-0.091, -0.0003 );
glVertex2f(-0.081, -0.05 );
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(153, 153, 102);
glVertex2f(0.0, 0.0 );
glVertex2f(0.0003, -0.088 );
glVertex2f(0.052, -0.07 );
glEnd();


glEnd();
glPopMatrix();//glPopMatrix pops the top matrix off the stack
    o+=0.1f;//i=i+.1=.2
glEnd();

int z;//windmill
    GLfloat c=-.75f; GLfloat d=.51f; GLfloat radius2 =.015f;
	int triangleAmount2 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 77);
		glVertex2f(c, d); // center of circle
		for(z = 0; z <= triangleAmount2;z++) {
			glVertex2f(
		            c+ (radius2 * cos(z *  twicePi2 / triangleAmount2)),
			    d+ (radius2 * sin(z * twicePi2 / triangleAmount2))
			);
		}
	glEnd();

//clock_tower
glBegin(GL_QUADS);
glColor3ub(217, 179, 140);
glVertex2f(-0.48, 0.68);
glVertex2f(-0.48, 0.29);
glVertex2f( -0.36, 0.29 );
glVertex2f( -0.36, 0.68);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 235, 153);
glVertex2f(-0.49, 0.82);
glVertex2f(-0.49, 0.65);
glVertex2f( -0.345, 0.65 );
glVertex2f(-0.345, 0.82);
glEnd();
glBegin(GL_QUADS);
glColor3ub(198, 140, 83);
glVertex2f(-0.52, 0.84);
glVertex2f(-0.52, 0.82);
glVertex2f( -0.32, 0.82 );
glVertex2f(-0.32, 0.84);
glEnd();

glBegin(GL_QUADS);
glColor3ub(198, 140, 83);
glVertex2f(-0.49, 0.86);
glVertex2f(-0.49, 0.84);
glVertex2f( -0.345, 0.84 );
glVertex2f(-0.345, 0.86);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(164, 193, 193);
glVertex2f(-0.42, 0.9 );
glVertex2f(-0.49, 0.86 );
glVertex2f(-0.345, 0.86);
glEnd();

//design_clock
glBegin(GL_QUADS);
glColor3ub(198, 140, 83);
glVertex2f(-0.48, 0.64);
glVertex2f(-0.48, 0.61);
glVertex2f( -0.36, 0.61 );
glVertex2f(-0.36, 0.64);
glEnd();

glBegin(GL_QUADS);
glColor3ub(198, 140, 83);
glVertex2f(-0.47, 0.6);
glVertex2f(-0.47, 0.5);
glVertex2f( -0.46, 0.5 );
glVertex2f(-0.46, 0.6);
glEnd();

glBegin(GL_QUADS);
glColor3ub(198, 140, 83);
glVertex2f(-0.45, 0.6);
glVertex2f(-0.45, 0.5);
glVertex2f( -0.44, 0.5 );
glVertex2f(-0.44, 0.6);
glEnd();

glBegin(GL_QUADS);
glColor3ub(198, 140, 83);
glVertex2f(-0.43, 0.6);
glVertex2f(-0.43, 0.5);
glVertex2f( -0.41, 0.5 );
glVertex2f(-0.41, 0.6);
glEnd();

glBegin(GL_QUADS);
glColor3ub(198, 140, 83);
glVertex2f(-0.4, 0.6);
glVertex2f(-0.4, 0.5);
glVertex2f( -0.39, 0.5 );
glVertex2f(-0.39, 0.6);
glEnd();

glBegin(GL_QUADS);
glColor3ub(198, 140, 83);
glVertex2f(-0.38, 0.6);
glVertex2f(-0.38, 0.5);
glVertex2f( -0.37, 0.5 );
glVertex2f(-0.37, 0.6);
glEnd();

glBegin(GL_QUADS);
glColor3ub(198, 140, 83);
glVertex2f(-0.47, 0.48);
glVertex2f(-0.47, 0.44);
glVertex2f( -0.46, 0.44 );
glVertex2f(-0.46, 0.48);
glEnd();

glBegin(GL_QUADS);
glColor3ub(198, 140, 83);
glVertex2f(-0.45, 0.48);
glVertex2f(-0.45, 0.44);
glVertex2f( -0.44, 0.44 );
glVertex2f(-0.44, 0.48);
glEnd();

glBegin(GL_QUADS);
glColor3ub(198, 140, 83);
glVertex2f(-0.4, 0.48);
glVertex2f(-0.4, 0.44);
glVertex2f( -0.39, 0.44 );
glVertex2f(-0.39, 0.48);
glEnd();

glBegin(GL_QUADS);
glColor3ub(198, 140, 83);
glVertex2f(-0.38, 0.48);
glVertex2f(-0.38, 0.44);
glVertex2f( -0.37, 0.44 );
glVertex2f(-0.37, 0.48);
glEnd();

glBegin(GL_QUADS);
glColor3ub(198, 140, 83);
glVertex2f(-0.47, 0.42);
glVertex2f(-0.47, 0.34);
glVertex2f( -0.46, 0.34 );
glVertex2f(-0.46, 0.42);
glEnd();

glBegin(GL_QUADS);
glColor3ub(198, 140, 83);
glVertex2f(-0.45, 0.42);
glVertex2f(-0.45, 0.34);
glVertex2f( -0.44, 0.34 );
glVertex2f(-0.44, 0.42);
glEnd();

glBegin(GL_QUADS);
glColor3ub(198, 140, 83);
glVertex2f(-0.43, 0.42);
glVertex2f(-0.43, 0.34);
glVertex2f( -0.41, 0.34 );
glVertex2f(-0.41, 0.42);
glEnd();

glBegin(GL_QUADS);
glColor3ub(198, 140, 83);
glVertex2f(-0.4, 0.42);
glVertex2f(-0.4, 0.34);
glVertex2f( -0.39, 0.34 );
glVertex2f(-0.39, 0.42);
glEnd();

glBegin(GL_QUADS);
glColor3ub(198, 140, 83);
glVertex2f(-0.38, 0.42);
glVertex2f(-0.38, 0.34);
glVertex2f( -0.37, 0.34 );
glVertex2f(-0.37, 0.42);
glEnd();

glBegin(GL_QUADS);
glColor3ub(198, 140, 83);
glVertex2f(-0.48, 0.32);
glVertex2f(-0.48, 0.29);
glVertex2f( -0.36, 0.29 );
glVertex2f(-0.36, 0.32);
glEnd();

int f;//clock
    GLfloat e=-.419f; GLfloat g=0.73f; GLfloat radius3 =.065f;
	int triangleAmount3 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi3 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 235, 230); // clock
		glVertex2f(e, g); // center of circle
		for(f = 0; f <= triangleAmount3;f++) {
			glVertex2f(
		            e + (radius3 * cos(f *  twicePi3 / triangleAmount3)),
			    g + (radius3 * sin(f * twicePi3 / triangleAmount3))
			);
		}
	glEnd();

glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0);
glVertex2f(-0.42, 0.794);
glVertex2f(-0.42,0.78);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0);
glVertex2f(-0.42, 0.68);
glVertex2f(-0.42,0.668);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0);
glVertex2f(-0.365, 0.73);
glVertex2f(-0.356,0.73);
glEnd();

glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0);
glVertex2f(-0.48, 0.73);
glVertex2f(-0.47,0.73);

glVertex2f(-0.39, 0.788);
glVertex2f(-0.395,0.772);
glVertex2f(-0.37, 0.77);
glVertex2f(-0.378,0.759);
glVertex2f(-0.377, 0.706);
glVertex2f(-0.369,0.6966);
glVertex2f(-0.394, 0.69);
glVertex2f(-0.3887,0.6759);
glVertex2f(-0.447, 0.69);
glVertex2f(-0.451,0.6759);
glVertex2f(-0.4634, 0.706);
glVertex2f(-0.4703,0.6966);
glVertex2f(-0.45, 0.788);
glVertex2f(-0.447,0.773);
glVertex2f(-0.47, 0.77);
glVertex2f(-0.46,0.76);
glEnd();

//min_sec_stick
glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack,
glTranslatef(-0.419, 0.73,0);
glRotatef(m,0.0,0.0,-0.1);//i=how many degree you want to rotate around an axis

	glBegin(GL_TRIANGLES);
    glColor3ub(51, 51, 0);
    glVertex2f(0.0, 0.0);
    glVertex2f(0.0, 0.011 );
    glVertex2f(0.04, 0.04);
    glEnd();
glEnd();
glPopMatrix();//glPopMatrix pops the top matrix off the stack
m+=0.1f;//i=i+.1=.2
glLoadIdentity();
glEnd();

glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack,
glTranslatef(-0.419, 0.73,0);
glRotatef(n,0.0,0.0,-0.1);
    glBegin(GL_TRIANGLES);
    glColor3ub(51, 51, 0);
    glVertex2f(0.0, 0.0 );
    glVertex2f(-0.02, 0.029 );
    glVertex2f(-0.0082, -0.0048);
    glEnd();
glPopMatrix();//glPopMatrix pops the top matrix off the stack
n+=0.009f;//i=i+.1=.2
glLoadIdentity();
glEnd();


glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack,
glTranslatef(-0.419, 0.73,0);
glRotatef(v,0.0,0.0,-0.1);
    glBegin(GL_LINES);
    glColor3ub(51, 51, 0);
    glVertex2f(0,0 );
    glVertex2f(0.04, -0.05 );
    glEnd();
glPopMatrix();//glPopMatrix pops the top matrix off the stack
v+=0.3f;//i=i+.1=.2
glLoadIdentity();

	int w;//clock
    GLfloat r=-.419f; GLfloat p=0.73f; GLfloat radius4 =.009f;
	int triangleAmount4 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi4 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(190, 65, 130); // clock
		glVertex2f(r, p); // center of circle
		for(w = 0; w <= triangleAmount4;w++) {
			glVertex2f(
		            r + (radius4 * cos(w *  twicePi4 / triangleAmount4)),
			    p+ (radius4 * sin(w * twicePi4 / triangleAmount4))
			);
		}
	glEnd();
	//light

glBegin(GL_QUADS);
glColor3ub(204, 204, 0);
glVertex2f(0.47, 0.42 );
glVertex2f( 0.47, 0.4 );
glVertex2f( 0.5, 0.4 );
glVertex2f(0.5, 0.42);
glEnd();
glBegin(GL_QUADS);
glColor3ub(71, 71, 107);
glVertex2f(0.48, 0.4);
glVertex2f(0.48, 0.2);
glVertex2f(0.49, 0.2 );
glVertex2f(0.49, 0.4);
glEnd();
glBegin(GL_QUADS);
glColor3ub(204, 204, 0);
glVertex2f(-0.19, 0.42 );
glVertex2f( -0.19, 0.4 );
glVertex2f( -0.22, 0.4 );
glVertex2f(-0.22, 0.42);
glEnd();
glBegin(GL_QUADS);
glColor3ub(71, 71, 107);
glVertex2f(-0.21, 0.4);
glVertex2f(-0.21, 0.2);
glVertex2f(-0.204, 0.2);
glVertex2f(-0.204, 0.4);
glEnd();


glEnd();
glutTimerFunc(5200,demo_late_night,0);
glFlush();
}





void night_demo(int val) {

 glutDisplayFunc(night);
 glLoadIdentity();
 sound3();

}




void day() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

//sky
glBegin(GL_QUADS);
glColor3ub(230, 255, 247);
glVertex2f( -1.0, 1.0 );
glVertex2f( -1.0, -1 );
glVertex2f( 1.0, -1 );
glVertex2f( 1.0, 1.0 );
glEnd();

int i;//sun
    GLfloat a=-.84f; GLfloat b=.86f; GLfloat radius1 =.08f;
	int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 153);
		glVertex2f(a, b); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a+ (radius1 * cos(i *  twicePi / triangleAmount)),
			    b+ (radius1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



//cloud
glPushMatrix();
glTranslatef(position2,0,position2);
glBegin(GL_QUADS);
glColor3ub(255, 255, 255);
glVertex2f( 0.04, 0.86);
glVertex2f( 0.04, 0.85);
glVertex2f( 0.1, 0.85);
glVertex2f( 0.1,0.86 );
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(255, 255, 255);
glVertex2f( 0.05, 0.88);
glVertex2f( 0.04, 0.86);
glVertex2f( 0.07, 0.86);
glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(255, 255, 255);
glVertex2f( 0.084, 0.9);
glVertex2f( 0.06, 0.86);
glVertex2f( 0.1, 0.86);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(255, 255, 255);
glVertex2f( 0.44, 0.78);
glVertex2f(0.42, 0.75);
glVertex2f( 0.47, 0.75);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(255, 255, 255);
glVertex2f( 0.48, 0.8);
glVertex2f(0.45, 0.75);
glVertex2f( 0.51, 0.75);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(255, 255, 255);
glVertex2f( 0.7, 0.94);
glVertex2f(0.68, 0.92);
glVertex2f(0.72, 0.92);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(255, 255, 255);
glVertex2f(0.72, 0.96);
glVertex2f(0.7, 0.92);
glVertex2f(0.76, 0.92);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(255, 255, 255);
glVertex2f(-0.68, 0.88);
glVertex2f(-0.7, 0.84);
glVertex2f(-0.64, 0.84);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(255, 255, 255);
glVertex2f(-0.64, 0.89);
glVertex2f(-0.67, 0.84);
glVertex2f(-0.62, 0.84);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(255, 255, 255);
glVertex2f(-0.24, 0.92);
glVertex2f(-0.26, 0.88);
glVertex2f(-0.2, 0.88);
glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(255, 255, 255);
glVertex2f(-0.2, 0.94);
glVertex2f(-0.23, 0.88);
glVertex2f(-0.16, 0.88);
glEnd();


glPopMatrix();
glEnd();
glEnd();


//background_buildings

glBegin(GL_QUADS);
glColor3ub(204, 245, 255);
glVertex2f( -1, 0.55 );
glVertex2f( -1, 0.25 );
glVertex2f( -0.9, 0.25);
glVertex2f( -0.9, 0.55);
glEnd();

glBegin(GL_QUADS);
glColor3ub(204, 245, 255);
glVertex2f( -0.9, 0.25 );
glVertex2f( -0.9, 0.7 );
glVertex2f( -0.8, 0.7);
glVertex2f( -0.8, 0.25);
glEnd();

glBegin(GL_QUADS);
glColor3ub(204, 245, 255);
glVertex2f( -0.8, 0.5 );
glVertex2f( -0.8, 0.25);
glVertex2f( -0.7, 0.25);
glVertex2f( -0.7, 0.5);
glEnd();


glBegin(GL_QUADS);
glColor3ub(204, 245, 255);
glVertex2f( -0.7, 0.45);
glVertex2f( -0.7, 0.25);
glVertex2f( -0.6, 0.25);
glVertex2f( -0.6, 0.45);
glEnd();


glBegin(GL_QUADS);
glColor3ub(204, 245, 255);
glVertex2f( -0.6, 0.6 );
glVertex2f( -0.6, 0.25);
glVertex2f( -0.55, 0.25);
glVertex2f( -0.55, 0.6);
glEnd();

glBegin(GL_QUADS);
glColor3ub(204, 245, 255);
glVertex2f( -0.55, 0.55 );
glVertex2f( -0.55, 0.25);
glVertex2f( -0.48, 0.25);
glVertex2f( -0.48, 0.55);
glEnd();

glBegin(GL_QUADS);
glColor3ub(204, 245, 255);
glVertex2f( -0.35, 0.5 );
glVertex2f( -0.35, 0.25);
glVertex2f( -0.3, 0.25);
glVertex2f( -0.3, 0.5);
glEnd();

glBegin(GL_QUADS);
glColor3ub(204, 245, 255);
glVertex2f( -0.3, 0.7);
glVertex2f( -0.3, 0.25);
glVertex2f( -0.22, 0.25);
glVertex2f( -0.22, 0.7);
glEnd();

glBegin(GL_QUADS);
glColor3ub(204, 245, 255);
glVertex2f( -0.22, 0.6);
glVertex2f( -0.22, 0.25);
glVertex2f( -0.15, 0.25);
glVertex2f( -0.15, 0.6);
glEnd();

glBegin(GL_QUADS);
glColor3ub(204, 245, 255);
glVertex2f( -0.15, 0.65);
glVertex2f( -0.15, 0.25);
glVertex2f( -0.07, 0.25);
glVertex2f( -0.07, 0.65);
glEnd();


glBegin(GL_QUADS);
glColor3ub(204, 245, 255);
glVertex2f( -0.07, 0.6);
glVertex2f( -0.07, 0.25);
glVertex2f( 0.0, 0.25);
glVertex2f( 0.0, 0.6);
glEnd();


glBegin(GL_QUADS);
glColor3ub(204, 245, 255);
glVertex2f( 0.4, 0.6);
glVertex2f( 0.4, 0.25);
glVertex2f( 0.2, 0.25);
glVertex2f( 0.2, 0.6);
glEnd();

glBegin(GL_QUADS);
glColor3ub(204, 245, 255);
glVertex2f( 0.4, 0.5);
glVertex2f( 0.4, 0.25);
glVertex2f( 0.5, 0.25);
glVertex2f( 0.5, 0.5);
glEnd();
glBegin(GL_QUADS);
glColor3ub(204, 245, 255);
glVertex2f( 0.5, 0.65);
glVertex2f( 0.5, 0.25);
glVertex2f( 0.55, 0.25);
glVertex2f( 0.55, 0.65);
glEnd();

glBegin(GL_QUADS);
glColor3ub(204, 245, 255);
glVertex2f( 0.55, 0.56);
glVertex2f( 0.55, 0.25);
glVertex2f( 0.65, 0.25);
glVertex2f( 0.65, 0.56);
glEnd();

glBegin(GL_QUADS);
glColor3ub(204, 245, 255);
glVertex2f( 0.65, 0.46);
glVertex2f( 0.65, 0.25);
glVertex2f( 0.73, 0.25);
glVertex2f( 0.73, 0.46);
glEnd();

glBegin(GL_QUADS);
glColor3ub(204, 245, 255);
glVertex2f( 0.73, 0.5);
glVertex2f( 0.73, 0.25);
glVertex2f( 0.85, 0.25);
glVertex2f( 0.85, 0.5);
glEnd();

glBegin(GL_QUADS);
glColor3ub(204, 245, 255);
glVertex2f( 0.85, 0.7);
glVertex2f( 0.85, 0.25);
glVertex2f( 0.9, 0.25);
glVertex2f( 0.9, 0.7);
glEnd();

glBegin(GL_QUADS);
glColor3ub(204, 245, 255);
glVertex2f( 0.9, 0.55);
glVertex2f( 0.9, 0.25);
glVertex2f( 0.95, 0.25);
glVertex2f( 0.95, 0.55);
glEnd();

glBegin(GL_QUADS);
glColor3ub(204, 245, 255);
glVertex2f( 0.95, 0.5);
glVertex2f( 0.95, 0.25);
glVertex2f( 1.0, 0.25);
glVertex2f( 1.0, 0.5);
glEnd();




//road
glBegin(GL_QUADS);
glColor3ub(77,77,77);
glVertex2f( -1.0, -0.5 );
glVertex2f( -1.0, -1 );
glVertex2f( 1.0, -1 );
glVertex2f( 1.0, -0.5 );
glEnd();

//ROAD DOT
glBegin(GL_QUADS);
glColor3ub(255, 255, 51);
glVertex2f( -0.9, -0.7 );
glVertex2f( -0.85, -0.75 );
glVertex2f( -0.65, -0.75 );
glVertex2f( -.7f, -0.7f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 255, 51);
glVertex2f( -0.55, -0.7 );
glVertex2f( -0.5, -0.75 );
glVertex2f( -0.3, -0.75 );
glVertex2f( -0.35, -0.7);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 255, 51);
glVertex2f( -0.2, -0.7 );
glVertex2f( -0.15, -0.75 );
glVertex2f( 0.05, -0.75 );
glVertex2f( 0, -0.7);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 255, 51);
glVertex2f( 0.15, -0.7 );
glVertex2f( 0.2, -0.75);
glVertex2f( 0.4, -0.75 );
glVertex2f( 0.35, -0.7);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 255, 51);
glVertex2f( 0.5, -0.7 );
glVertex2f( 0.55, -0.75);
glVertex2f( 0.75, -0.75 );
glVertex2f( 0.7, -0.7);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 255, 51);
glVertex2f( 0.85, -0.7 );
glVertex2f( 0.9, -0.75);
glVertex2f( 1.1, -0.75 );
glVertex2f( 1.05, -0.7);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 255, 51);
glVertex2f( -1.25, -0.7 );
glVertex2f( -1.2, -0.75);
glVertex2f( -1, -0.75 );
glVertex2f( -1.05, -0.7);
glEnd();

//grass
glBegin(GL_QUADS);
glColor3ub(121, 210, 121);
glVertex2f(-1.39, -0.24 );
glVertex2f( -1.4, -0.5);
glVertex2f( 1.2, -0.5 );
glVertex2f( 1.2, -0.24);
glEnd();

//upper runway
glBegin(GL_QUADS);
glColor3ub(77,77,77);
glVertex2f(-1.4, 0.2 );
glVertex2f( -1.39, -0.24);
glVertex2f( 1.2, -0.24 );
glVertex2f( 1.2, 0.2);
glEnd();

//upper grass
glBegin(GL_QUADS);
glColor3ub(121, 210, 121);
glVertex2f(-1.0, 0.3 );
glVertex2f( -1.0, 0.165);
glVertex2f( 1.0, 0.165 );
glVertex2f( 1.0, 0.3);
glEnd();

//upper runway dot
glBegin(GL_QUADS);
glColor3ub(255, 255, 51);
glVertex2f( -1.23,-0.003 );
glVertex2f( -1.2, -0.1 );
glVertex2f( -1, -0.1 );
glVertex2f(-1.04, -0.003);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 255, 51);
glVertex2f( -0.94,-0.004 );
glVertex2f( -0.88, -0.05 );
glVertex2f( -0.67, -0.05 );
glVertex2f(-0.73,  -0.004);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 255, 51);
glVertex2f( -0.56,-0.004 );
glVertex2f( -0.49, -0.05 );
glVertex2f( -0.28, -0.05 );
glVertex2f(-0.35,  -0.004);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 255, 51);
glVertex2f( -0.2,-0.004 );
glVertex2f( -0.117, -0.05 );
glVertex2f( 0.099, -0.05 );
glVertex2f(0.011,  -0.004);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 255, 51);
glVertex2f( 0.16,-0.004 );
glVertex2f( 0.25, -0.05 );
glVertex2f( 0.46, -0.05 );
glVertex2f(0.37,  -0.004);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 255, 51);
glVertex2f( 0.53,-0.004 );
glVertex2f( 0.62, -0.05 );
glVertex2f( 0.83, -0.05 );
glVertex2f(0.74,  -0.004);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 255, 51);
glVertex2f( 0.88,-0.004 );
glVertex2f( 0.97, -0.05 );
glVertex2f( 1.2, -0.05 );
glVertex2f(1.06,  -0.004);
glEnd();

//upper_runway_line
glBegin(GL_QUADS);
glColor3ub(255, 255, 51);
glVertex2f(-1.4,-0.25 );
glVertex2f( -1.4, -0.24 );
glVertex2f( 1.2, -0.24 );
glVertex2f(1.2,  -0.25);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 255, 51);
glVertex2f(-1.4,0.17 );
glVertex2f( -1.4, 0.16 );
glVertex2f( 1.2, 0.16 );
glVertex2f(1.2,  0.17);
glEnd();
//lower_line_runway
glBegin(GL_QUADS);
glColor3ub(255, 255, 51);
glVertex2f(-1., -0.5 );
glVertex2f( -1., -0.49 );
glVertex2f( 1, -0.49 );
glVertex2f(1,  -0.5);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 255, 51);
glVertex2f(-1, -1 );
glVertex2f( -1, -0.98 );
glVertex2f( 1, -0.98 );
glVertex2f(1,  -1);
glEnd();


//cart

glBegin(GL_QUADS);
glColor3ub(255, 255, 26);
glVertex2f(0.75, -0.4);
glVertex2f( 0.75, -0.43);
glVertex2f( 0.92, -0.43 );
glVertex2f( 0.92, -0.4);
glEnd();

glBegin(GL_QUADS);
glColor3ub(224, 224, 209);
glVertex2f(0.751, -0.38);
glVertex2f( 0.751, -0.4);
glVertex2f( 0.78, -0.4);
glVertex2f( 0.78, -0.38);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 255, 26);
glVertex2f(0.78, -0.32);
glVertex2f( 0.76, -0.38);
glVertex2f( 0.766, -0.38 );
glVertex2f( 0.786, -0.32);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 0, 0);
glVertex2f(0.74, -0.31);
glVertex2f( 0.74, -0.32);
glVertex2f( 0.81, -0.32 );
glVertex2f( 0.81, -0.31);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 0, 0);
glVertex2f(0.81, -0.31);
glVertex2f( 0.81, -0.32);
glVertex2f( 0.88, -0.4 );
glVertex2f( 0.89, -0.4);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 255, 255);
glVertex2f(0.74, -0.28);
glVertex2f( 0.74, -0.31);
glVertex2f( 0.81, -0.31 );
glVertex2f( 0.819, -0.28);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 255, 255);
glVertex2f(0.818, -0.28);
glVertex2f( 0.81, -0.31);
glVertex2f( 0.89, -0.4 );
glVertex2f( 0.92, -0.4);
glEnd();

glBegin(GL_LINES);
glColor3ub(26, 26, 0);
glVertex2f(0.74, -0.268);
glVertex2f(0.818, -0.268);
glVertex2f(0.818, -0.268);
glVertex2f(0.935, -0.4);
glVertex2f(0.74, -0.268);
glVertex2f(0.74, -0.28);
glVertex2f(0.76, -0.268);
glVertex2f(0.76, -0.28);
glVertex2f(0.78, -0.268);
glVertex2f(0.78, -0.28);
glVertex2f(0.8, -0.268);
glVertex2f(0.8, -0.28);
glVertex2f(0.816, -0.268);
glVertex2f(0.816, -0.28);

glVertex2f(0.84, -0.29);
glVertex2f(0.835, -0.303);

glVertex2f(0.854, -0.303);
glVertex2f(0.847, -0.317);

glVertex2f(0.869, -0.32);
glVertex2f(0.86, -0.334);


glVertex2f(0.88, -0.339);
glVertex2f(0.875, -0.353);


glVertex2f(0.9, -0.353);
glVertex2f(0.89, -0.364);


glVertex2f(0.91, -0.37);
glVertex2f(0.9, -0.38);

glVertex2f(0.93, -0.389);
glVertex2f(0.92, -0.4);

glEnd();

glBegin(GL_POLYGON);
glColor3ub(255, 255, 255);
glVertex2f(0.773, -0.43);
glVertex2f( 0.7738, -0.436);
glVertex2f( 0.776, -0.439 );
glVertex2f( 0.779, -0.444);

glVertex2f(0.784, -0.446);
glVertex2f( 0.792, -0.444);
glVertex2f( 0.796, -0.439 );
glVertex2f( 0.797, -0.43);
glEnd();


glBegin(GL_POLYGON);
glColor3ub(255, 255, 255);
glVertex2f(0.872, -0.417);
glVertex2f( 0.863, -0.4207);
glVertex2f( 0.861, -0.431 );
glVertex2f( 0.863, -0.441);

glVertex2f(0.871, -0.446);
glVertex2f( 0.878, -0.442);
glVertex2f( 0.88, -0.432 );
glVertex2f( 0.878, -0.421);
glEnd();

glBegin(GL_QUADS);
glColor3ub(26, 26, 0);
glVertex2f(0.779, -0.43);
glVertex2f( 0.779, -0.437);
glVertex2f( 0.79, -0.437 );
glVertex2f( 0.79, -0.43);
glEnd();
glBegin(GL_QUADS);
glColor3ub(26, 26, 0);
glVertex2f(0.865, -0.426);
glVertex2f( 0.865, -0.437);
glVertex2f( 0.873, -0.437 );
glVertex2f( 0.873, -0.426);
glEnd();


//plane
glPushMatrix();
glTranslatef(position,0,position);
glBegin(GL_QUADS);//body
glColor3ub(242, 242, 242);
glVertex2f(-0.88,  -0.36 );
glVertex2f( -0.80, -0.60);
glVertex2f( -0.35, -0.60 );
glVertex2f( -0.35,  -0.36);
glEnd();

glBegin(GL_QUADS);//plane lower body line
glColor3f(1,0, 0);
glVertex2f(-0.83,-0.53 );
glVertex2f( -0.82, -0.54);
glVertex2f( -0.35, -0.54 );
glVertex2f( -0.35,  -0.53);
glEnd();
glBegin(GL_QUADS);//middle wing of plane
glColor3f(1,0, 0);
glVertex2f(-0.86, -0.4 );
glVertex2f( -0.93, -0.5);
glVertex2f( -0.89, -0.5 );
glVertex2f( -0.75,  -0.4);
glEnd();

glBegin(GL_QUADS);//upper back wing
glColor3ub(242, 242, 242);
glVertex2f(-0.88,  -0.18 );
glVertex2f( -0.88, -0.36);
glVertex2f( -0.716, -0.36 );
glVertex2f( -0.82,   -0.18);
glEnd();
glBegin(GL_QUADS);//middle wing of plane line
glColor3f(1,0, 0);
glVertex2f(-0.83, -0.18 );
glVertex2f( -0.73, -0.36);
glVertex2f( -0.71, -0.36 );
glVertex2f( -0.82,  -0.18);
glEnd();
glBegin(GL_QUADS);//middle wing of plane line
glColor3f(1,0, 0);
glVertex2f(-0.88, -0.18 );
glVertex2f( -0.88, -0.2);
glVertex2f( -0.81, -0.2 );
glVertex2f( -0.82,  -0.18);
glEnd();

glBegin(GL_QUADS);//middle wing of plane
glColor3f(1,0, 0);
glVertex2f(-0.72, -0.2 );
glVertex2f( -0.62, -0.36);
glVertex2f( -0.49, -0.36 );
glVertex2f( -0.67,  -0.2);
glEnd();

glBegin(GL_QUADS);//middle wing lower of plane
glColor3f(1,0, 0);
glVertex2f(-0.68, -0.51 );
glVertex2f( -0.65,  -0.55);
glVertex2f( -0.52,  -0.55 );
glVertex2f( -0.48,  -0.51);
glEnd();

glBegin(GL_QUADS);//middle wing lower of plane
glColor3f(1,0, 0);
glVertex2f(-0.65, -0.55 );
glVertex2f( -0.73, -0.71);
glVertex2f( -0.68,  -0.71 );
glVertex2f( -0.52,  -0.55);
glEnd();

glBegin(GL_LINES);//gate plane
glColor3f(1,0, 0);
glVertex2f(-0.7,-0.40 );
glVertex2f( -0.74,  -0.40);
glVertex2f( -0.74, -0.5);
glVertex2f( -0.7, -0.5);
glVertex2f( -0.7, -0.5);
glVertex2f(-0.7,-0.40);
glVertex2f( -0.74, -0.5);
glVertex2f( -0.74,  -0.40);
glEnd();

glBegin(GL_QUADS);//window plane
glColor3ub(0, 51, 102);
glVertex2f(-0.68, -0.45 );
glVertex2f( -0.68, -0.5);
glVertex2f( -0.65, -0.5 );
glVertex2f( -0.65,  -0.45);
glEnd();

glBegin(GL_QUADS);//window plane
glColor3ub(0, 51, 102);
glVertex2f(-0.62, -0.45 );
glVertex2f( -0.62, -0.5);
glVertex2f( -0.59, -0.5 );
glVertex2f( -0.59,  -0.45);
glEnd();

glBegin(GL_QUADS);//window plane
glColor3ub(0, 51, 102);
glVertex2f(-0.56, -0.45 );
glVertex2f( -0.56, -0.5);
glVertex2f( -0.53, -0.5 );
glVertex2f( -0.53,  -0.45);
glEnd();

glBegin(GL_QUADS);//window plane
glColor3ub(0, 51, 102);
glVertex2f(-0.50, -0.45 );
glVertex2f( -0.50, -0.5);
glVertex2f( -0.47, -0.5 );
glVertex2f( -0.47,  -0.45);
glEnd();

glBegin(GL_QUADS);//window plane
glColor3ub(0, 51, 102);
glVertex2f(-0.44, -0.45 );
glVertex2f( -0.44, -0.5);
glVertex2f( -0.41, -0.5 );
glVertex2f( -0.41,  -0.45);
glEnd();

glBegin(GL_QUADS);//window plane
glColor3ub(0, 51, 102);
glVertex2f(-0.38, -0.45 );
glVertex2f( -0.38, -0.5);
glVertex2f( -0.35, -0.5 );
glVertex2f( -0.35,  -0.45);
glEnd();

glBegin(GL_QUADS);//place face upper
glColor3ub(242, 242, 242);
glVertex2f(-0.35,  -0.36 );
glVertex2f( -0.35, -0.48);
glVertex2f( -0.17, -0.48 );
glVertex2f( -0.26,  -0.36);
glEnd();

glBegin(GL_QUADS);//window front plane
glColor3ub(0, 51, 102);
glVertex2f(-0.32, -0.39 );
glVertex2f( -0.29, -0.48);
glVertex2f( -0.169, -0.48);
glVertex2f( -0.238,  -0.39);
glEnd();
glBegin(GL_QUADS);//place face lower
glColor3ub(242, 242, 242);
glVertex2f(-0.35,  -0.48 );
glVertex2f( -0.35, -0.6);
glVertex2f( -0.26, -0.6 );
glVertex2f( -0.17,   -0.48);
glEnd();

glBegin(GL_QUADS);//place weel stand lower
glColor3f(0, 0, 0);
glVertex2f(-0.36,  -0.6);
glVertex2f( -0.36, -0.64);
glVertex2f( -0.35, -0.64);
glVertex2f( -0.35,   -0.6);
glEnd();

int j;//wheel
    GLfloat x=-.357f; GLfloat y=-0.64f; GLfloat radius =.015f;
	int triangleAmount1 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi1 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(242, 242, 242); //
		glVertex2f(x, y); // center of circle
		for(j = 0; j <= triangleAmount1;j++) {
			glVertex2f(
		            x + (radius * cos(j *  twicePi1 / triangleAmount1)),
			    y + (radius * sin(j * twicePi1 / triangleAmount1))
			);
		}
	glEnd();
	glPopMatrix();





//tower
glBegin(GL_QUADS);
glColor3ub(0, 107, 179);
glVertex2f(0.59, 0.43 );
glVertex2f( 0.59, 0.4);
glVertex2f( 0.95, 0.4 );
glVertex2f( 0.95, 0.43);
glEnd();



glBegin(GL_QUADS);
glColor3ub(224, 224, 210);
glVertex2f(0.65, 0.4 );
glVertex2f( 0.65, 0.2);
glVertex2f( 0.89, 0.2 );
glVertex2f( 0.89, 0.4);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 107, 179);
glVertex2f(0.74, 0.32);
glVertex2f( 0.74, 0.3);
glVertex2f( 0.82, 0.3 );
glVertex2f( 0.82, 0.32);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 255, 255);
glVertex2f(0.75, 0.30);
glVertex2f( 0.75, 0.2);
glVertex2f( 0.81, 0.2 );
glVertex2f( 0.81, 0.30);
glEnd();
glBegin(GL_QUADS);
glColor3ub(224, 224, 210);
glVertex2f(0.81, 0.55 );
glVertex2f( 0.81, 0.43);
glVertex2f( 0.87, 0.43 );
glVertex2f( 0.87, 0.55);
glEnd();
glBegin(GL_QUADS);
glColor3ub(0, 107, 179);
glVertex2f(0.81, 0.56);
glVertex2f( 0.81, 0.55);
glVertex2f( 0.87, 0.55 );
glVertex2f( 0.87, 0.56);
glEnd();

glBegin(GL_QUADS);
glColor3ub(128, 204, 255);
glVertex2f(0.79, 0.6);
glVertex2f( 0.81, 0.56);
glVertex2f( 0.87, 0.56 );
glVertex2f( 0.89, 0.6);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 107, 179);
glVertex2f(0.78, 0.62);
glVertex2f(0.78, 0.6);
glVertex2f( 0.9, 0.6 );
glVertex2f( 0.9, 0.62);
glEnd();
glBegin(GL_QUADS);
glColor3ub(128, 204, 255);
glVertex2f(0.77, 0.7);
glVertex2f( 0.78, 0.62);
glVertex2f( 0.9, 0.62);
glVertex2f( 0.91, 0.7);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 107, 179);
glVertex2f(0.77, 0.72);
glVertex2f(0.77, 0.7);
glVertex2f( 0.91, 0.7 );
glVertex2f( 0.91, 0.72);
glEnd();

glBegin(GL_QUADS);
glColor3ub(128, 204, 255);
glVertex2f(0.8, 0.84);
glVertex2f( 0.81, 0.72);
glVertex2f( 0.87, 0.72);
glVertex2f( 0.883, 0.84);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 107, 179);
glVertex2f(0.8, 0.86);
glVertex2f(0.8, 0.84);
glVertex2f( 0.883, 0.84 );
glVertex2f( 0.883, 0.86);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 107, 179);
glVertex2f(0.84, 0.96);
glVertex2f(0.84, 0.86);
glVertex2f( 0.85, 0.86 );
glVertex2f( 0.85, 0.96);
glEnd();
//antenna_tower
glPushMatrix();
glTranslatef(0.8445,0.94,0.0);
glRotatef(l,0.0,1.01,0.0);
glBegin(GL_QUADS);
glColor3ub(0, 107, 179);
glVertex2f(0.0, 0.0);
glVertex2f(0.005, -0.007);
glVertex2f( 0.047,  0.041);
glVertex2f( 0.042, 0.05);
glEnd();
glPopMatrix();
l+=0.099f;
glLoadIdentity();

glBegin(GL_LINES);
glColor3ub(204, 242, 255);
glVertex2f(0.81, 0.84);
glVertex2f(0.82, 0.72);
glVertex2f(0.84, 0.84 );
glVertex2f( 0.84, 0.72);
glVertex2f(0.87, 0.84 );
glVertex2f( 0.86, 0.72);
glVertex2f(0.8, 0.8 );
glVertex2f( 0.88, 0.8);
glVertex2f(0.805, 0.74 );
glVertex2f( 0.875, 0.74);
glVertex2f(0.79, 0.699 );
glVertex2f( 0.806, 0.621);
glVertex2f(0.84, 0.699 );
glVertex2f( 0.84, 0.621);
glVertex2f(0.89, 0.699 );
glVertex2f( 0.875, 0.621);
glVertex2f(0.77, 0.66 );
glVertex2f( 0.91, 0.66);
glVertex2f(0.825, 0.6 );
glVertex2f( 0.825, 0.56);
glVertex2f(0.855, 0.6 );
glVertex2f( 0.855, 0.56);
glVertex2f(0.8, 0.58 );
glVertex2f( 0.88, 0.58);
glEnd();


//building

glBegin(GL_QUADS);
glColor3ub(102, 102, 153);
glVertex2f(-0.2, 0.55);
glVertex2f(-0.2, 0.5);
glVertex2f( 0.4,  0.5 );
glVertex2f( 0.4, 0.55);
glEnd();



glBegin(GL_QUADS);
glColor3ub(224, 224, 210);
glVertex2f(-0.17, 0.5);
glVertex2f(-0.17, 0.27);
glVertex2f( 0.37,  0.27 );
glVertex2f( 0.37, 0.5);
glEnd();

glBegin(GL_LINES);
glColor3ub(242, 242, 242);
glVertex2f(-0.17, 0.5 );
glVertex2f( 0.37, 0.5);
glVertex2f(-0.17, 0.27 );
glVertex2f( 0.37, 0.27);
glVertex2f(-0.06, 0.5);
glVertex2f(-0.06, 0.27);
glVertex2f(0.05, 0.5);
glVertex2f(0.05, 0.27);
glVertex2f(0.16, 0.5);
glVertex2f(0.16, 0.27);
glVertex2f(0.27, 0.5);
glVertex2f(0.27, 0.27);
glVertex2f(-0.17, 0.44);
glVertex2f(0.37, 0.44);
glVertex2f(-0.17, 0.37);
glVertex2f(0.37, 0.37);
glVertex2f(-0.17, 0.3);
glVertex2f(0.37, 0.3);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255,255, 255);
glVertex2f(0.006, 0.33 );
glVertex2f( 0.006, 0.27);
glVertex2f( 0.21, 0.27 );
glVertex2f( 0.21, 0.33);
glEnd();

glBegin(GL_QUADS);
glColor3ub(102, 102, 153);
glVertex2f(-0.07, 0.4);
glVertex2f(-0.07, 0.38);
glVertex2f( 0.28, 0.38 );
glVertex2f( 0.28, 0.4);
glEnd();

glBegin(GL_QUADS);
glColor3ub(122, 0, 153);
glVertex2f(-0.065, 0.38 );
glVertex2f( -0.065, 0.27);
glVertex2f( -0.06, 0.27 );
glVertex2f( -0.06, 0.38);
glEnd();

glBegin(GL_QUADS);
glColor3ub(122, 0, 153);
glVertex2f(0.019, 0.38 );
glVertex2f( 0.019, 0.27);
glVertex2f( 0.025, 0.27 );
glVertex2f( 0.025, 0.38);
glEnd();

glBegin(GL_QUADS);
glColor3ub(122, 0, 153);
glVertex2f(0.098, 0.38 );
glVertex2f( 0.098, 0.27);
glVertex2f( 0.104, 0.27 );
glVertex2f( 0.104, 0.38);
glEnd();

glBegin(GL_QUADS);
glColor3ub(122, 0, 153);
glVertex2f(0.187, 0.38 );
glVertex2f( 0.187, 0.27);
glVertex2f( 0.194, 0.27 );
glVertex2f( 0.194, 0.38);
glEnd();

glBegin(GL_QUADS);
glColor3ub(122, 0, 153);
glVertex2f(0.257, 0.38 );
glVertex2f( 0.257, 0.27);
glVertex2f( 0.265, 0.27 );
glVertex2f( 0.265, 0.38);
glEnd();

//tree
glBegin(GL_QUADS);
glColor3ub(204, 51, 0);
glVertex2f(0.46, 0.38 );
glVertex2f( 0.46, 0.27);
glVertex2f( 0.47, 0.27 );
glVertex2f( 0.47, 0.38);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(51, 153, 51);
glVertex2f(0.46, 0.48 );
glVertex2f( 0.43, 0.37);
glVertex2f( 0.5, 0.37 );
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(51, 153, 51);
glVertex2f(0.46, 0.48 );
glVertex2f( 0.43, 0.39);
glVertex2f( 0.5, 0.39);
glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(51, 153, 51);
glVertex2f(0.46, 0.48 );
glVertex2f( 0.43, 0.41);
glVertex2f( 0.5, 0.41 );
glEnd();



//tree
glBegin(GL_QUADS);
glColor3ub(204, 51, 0);
glVertex2f(-0.26, 0.38 );
glVertex2f( -0.26, 0.27);
glVertex2f( -0.27, 0.27 );
glVertex2f( -0.27, 0.38);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(51, 153, 51);
glVertex2f(-0.26, 0.48 );
glVertex2f( -0.23, 0.37);
glVertex2f( -0.3, 0.37 );
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(51, 153, 51);
glVertex2f(-0.26, 0.48 );
glVertex2f( -0.23, 0.39);
glVertex2f( -0.3, 0.39 );
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(51, 153, 51);
glVertex2f(-0.26, 0.48 );
glVertex2f( -0.23, 0.41);
glVertex2f( -0.3, 0.41 );
glEnd();



    //windmill
glBegin(GL_LINES);
glColor3ub(26, 26, 0);
glVertex2f(-0.75, 0.5 );
glVertex2f(-0.8, 0.27 );
glVertex2f(-0.75, 0.5 );
glVertex2f(-0.7, 0.27 );
glVertex2f(-0.75, 0.5 );
glVertex2f(-0.75, 0.27 );
glVertex2f(-0.75, 0.5 );

glVertex2f(-0.736, 0.436 );
glVertex2f(-0.763, 0.436 );
glVertex2f(-0.736, 0.436 );
glVertex2f(-0.75, 0.41 );
glVertex2f(-0.736, 0.436 );
glVertex2f(-0.763, 0.436 );
glVertex2f(-0.75, 0.41 );


glVertex2f(-0.730, 0.407 );
glVertex2f(-0.769, 0.407 );
glVertex2f(-0.730, 0.407 );
glVertex2f(-0.75, 0.36 );
glVertex2f(-0.769, 0.407 );
glVertex2f(-0.730, 0.407 );
glVertex2f(-0.769, 0.407 );
glVertex2f(-0.75, 0.36 );

glVertex2f(-0.721, 0.36 );
glVertex2f(-0.78, 0.36 );
glVertex2f(-0.721, 0.36 );
glVertex2f(-0.75, 0.30 );
glVertex2f(-0.78, 0.36 );
glVertex2f(-0.721, 0.36);
glVertex2f(-0.78, 0.36);
glVertex2f(-0.75, 0.30 );

glEnd();


        glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack,
glTranslatef(-0.75,0.51,0);
glRotatef(o,0.0,0.0,1.0);//i=how many degree you want to rotate around an axis




glBegin(GL_TRIANGLES);
glColor3ub(153, 153, 102);
glVertex2f(0.0, 0.0 );
glVertex2f(0.087, 0.0007);
glVertex2f(0.078, 0.047 );


glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(153, 153, 102);
glVertex2f(0, 0 );
glVertex2f(-0.05, 0.08);
glVertex2f(-0.0005, 0.095 );




glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(153, 153, 102);
glVertex2f(0.0, 0.0 );
glVertex2f(-0.091, -0.0003 );
glVertex2f(-0.081, -0.05 );
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(153, 153, 102);
glVertex2f(0.0, 0.0 );
glVertex2f(0.0003, -0.088 );
glVertex2f(0.052, -0.07 );
glEnd();


glEnd();
glPopMatrix();//glPopMatrix pops the top matrix off the stack
    o+=0.1f;//i=i+.1=.2
glEnd();

int z;//windmill
    GLfloat c=-.75f; GLfloat d=.51f; GLfloat radius2 =.015f;
	int triangleAmount2 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(77, 0, 0);
		glVertex2f(c, d); // center of circle
		for(z = 0; z <= triangleAmount2;z++) {
			glVertex2f(
		            c+ (radius2 * cos(z *  twicePi2 / triangleAmount2)),
			    d+ (radius2 * sin(z * twicePi2 / triangleAmount2))
			);
		}
	glEnd();

//clock_tower
glBegin(GL_QUADS);
glColor3ub(217, 179, 140);
glVertex2f(-0.48, 0.68);
glVertex2f(-0.48, 0.29);
glVertex2f( -0.36, 0.29 );
glVertex2f( -0.36, 0.68);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 235, 153);
glVertex2f(-0.49, 0.82);
glVertex2f(-0.49, 0.65);
glVertex2f( -0.345, 0.65 );
glVertex2f(-0.345, 0.82);
glEnd();
glBegin(GL_QUADS);
glColor3ub(198, 140, 83);
glVertex2f(-0.52, 0.84);
glVertex2f(-0.52, 0.82);
glVertex2f( -0.32, 0.82 );
glVertex2f(-0.32, 0.84);
glEnd();

glBegin(GL_QUADS);
glColor3ub(198, 140, 83);
glVertex2f(-0.49, 0.86);
glVertex2f(-0.49, 0.84);
glVertex2f( -0.345, 0.84 );
glVertex2f(-0.345, 0.86);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(164, 193, 193);
glVertex2f(-0.42, 0.9 );
glVertex2f(-0.49, 0.86 );
glVertex2f(-0.345, 0.86);
glEnd();

//design_clock
glBegin(GL_QUADS);
glColor3ub(198, 140, 83);
glVertex2f(-0.48, 0.64);
glVertex2f(-0.48, 0.61);
glVertex2f( -0.36, 0.61 );
glVertex2f(-0.36, 0.64);
glEnd();

glBegin(GL_QUADS);
glColor3ub(198, 140, 83);
glVertex2f(-0.47, 0.6);
glVertex2f(-0.47, 0.5);
glVertex2f( -0.46, 0.5 );
glVertex2f(-0.46, 0.6);
glEnd();

glBegin(GL_QUADS);
glColor3ub(198, 140, 83);
glVertex2f(-0.45, 0.6);
glVertex2f(-0.45, 0.5);
glVertex2f( -0.44, 0.5 );
glVertex2f(-0.44, 0.6);
glEnd();

glBegin(GL_QUADS);
glColor3ub(198, 140, 83);
glVertex2f(-0.43, 0.6);
glVertex2f(-0.43, 0.5);
glVertex2f( -0.41, 0.5 );
glVertex2f(-0.41, 0.6);
glEnd();

glBegin(GL_QUADS);
glColor3ub(198, 140, 83);
glVertex2f(-0.4, 0.6);
glVertex2f(-0.4, 0.5);
glVertex2f( -0.39, 0.5 );
glVertex2f(-0.39, 0.6);
glEnd();

glBegin(GL_QUADS);
glColor3ub(198, 140, 83);
glVertex2f(-0.38, 0.6);
glVertex2f(-0.38, 0.5);
glVertex2f( -0.37, 0.5 );
glVertex2f(-0.37, 0.6);
glEnd();

glBegin(GL_QUADS);
glColor3ub(198, 140, 83);
glVertex2f(-0.47, 0.48);
glVertex2f(-0.47, 0.44);
glVertex2f( -0.46, 0.44 );
glVertex2f(-0.46, 0.48);
glEnd();

glBegin(GL_QUADS);
glColor3ub(198, 140, 83);
glVertex2f(-0.45, 0.48);
glVertex2f(-0.45, 0.44);
glVertex2f( -0.44, 0.44 );
glVertex2f(-0.44, 0.48);
glEnd();

glBegin(GL_QUADS);
glColor3ub(198, 140, 83);
glVertex2f(-0.4, 0.48);
glVertex2f(-0.4, 0.44);
glVertex2f( -0.39, 0.44 );
glVertex2f(-0.39, 0.48);
glEnd();

glBegin(GL_QUADS);
glColor3ub(198, 140, 83);
glVertex2f(-0.38, 0.48);
glVertex2f(-0.38, 0.44);
glVertex2f( -0.37, 0.44 );
glVertex2f(-0.37, 0.48);
glEnd();

glBegin(GL_QUADS);
glColor3ub(198, 140, 83);
glVertex2f(-0.47, 0.42);
glVertex2f(-0.47, 0.34);
glVertex2f( -0.46, 0.34 );
glVertex2f(-0.46, 0.42);
glEnd();

glBegin(GL_QUADS);
glColor3ub(198, 140, 83);
glVertex2f(-0.45, 0.42);
glVertex2f(-0.45, 0.34);
glVertex2f( -0.44, 0.34 );
glVertex2f(-0.44, 0.42);
glEnd();

glBegin(GL_QUADS);
glColor3ub(198, 140, 83);
glVertex2f(-0.43, 0.42);
glVertex2f(-0.43, 0.34);
glVertex2f( -0.41, 0.34 );
glVertex2f(-0.41, 0.42);
glEnd();

glBegin(GL_QUADS);
glColor3ub(198, 140, 83);
glVertex2f(-0.4, 0.42);
glVertex2f(-0.4, 0.34);
glVertex2f( -0.39, 0.34 );
glVertex2f(-0.39, 0.42);
glEnd();

glBegin(GL_QUADS);
glColor3ub(198, 140, 83);
glVertex2f(-0.38, 0.42);
glVertex2f(-0.38, 0.34);
glVertex2f( -0.37, 0.34 );
glVertex2f(-0.37, 0.42);
glEnd();

glBegin(GL_QUADS);
glColor3ub(198, 140, 83);
glVertex2f(-0.48, 0.32);
glVertex2f(-0.48, 0.29);
glVertex2f( -0.36, 0.29 );
glVertex2f(-0.36, 0.32);
glEnd();

int f;//clock
    GLfloat e=-.419f; GLfloat g=0.73f; GLfloat radius3 =.065f;
	int triangleAmount3 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi3 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 235, 230); // clock
		glVertex2f(e, g); // center of circle
		for(f = 0; f <= triangleAmount3;f++) {
			glVertex2f(
		            e + (radius3 * cos(f *  twicePi3 / triangleAmount3)),
			    g + (radius3 * sin(f * twicePi3 / triangleAmount3))
			);
		}
	glEnd();

glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0);
glVertex2f(-0.42, 0.794);
glVertex2f(-0.42,0.78);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0);
glVertex2f(-0.42, 0.68);
glVertex2f(-0.42,0.668);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0);
glVertex2f(-0.365, 0.73);
glVertex2f(-0.356,0.73);
glEnd();

glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0);
glVertex2f(-0.48, 0.73);
glVertex2f(-0.47,0.73);

glVertex2f(-0.39, 0.788);
glVertex2f(-0.395,0.772);
glVertex2f(-0.37, 0.77);
glVertex2f(-0.378,0.759);
glVertex2f(-0.377, 0.706);
glVertex2f(-0.369,0.6966);
glVertex2f(-0.394, 0.69);
glVertex2f(-0.3887,0.6759);
glVertex2f(-0.447, 0.69);
glVertex2f(-0.451,0.6759);
glVertex2f(-0.4634, 0.706);
glVertex2f(-0.4703,0.6966);
glVertex2f(-0.45, 0.788);
glVertex2f(-0.447,0.773);
glVertex2f(-0.47, 0.77);
glVertex2f(-0.46,0.76);
glEnd();

//min_sec_stick
glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack,
glTranslatef(-0.419, 0.73,0);
glRotatef(m,0.0,0.0,-0.1);//i=how many degree you want to rotate around an axis

	glBegin(GL_TRIANGLES);
    glColor3ub(51, 51, 0);
    glVertex2f(0.0, 0.0);
    glVertex2f(0.0, 0.011 );
    glVertex2f(0.04, 0.04);
    glEnd();
glEnd();
glPopMatrix();//glPopMatrix pops the top matrix off the stack
m+=0.1f;//i=i+.1=.2
glLoadIdentity();
glEnd();

glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack,
glTranslatef(-0.419, 0.73,0);
glRotatef(n,0.0,0.0,-0.1);
    glBegin(GL_TRIANGLES);
    glColor3ub(51, 51, 0);
    glVertex2f(0.0, 0.0 );
    glVertex2f(-0.02, 0.029 );
    glVertex2f(-0.0082, -0.0048);
    glEnd();
glPopMatrix();//glPopMatrix pops the top matrix off the stack
n+=0.009f;//i=i+.1=.2
glLoadIdentity();
glEnd();


glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack,
glTranslatef(-0.419, 0.73,0);
glRotatef(v,0.0,0.0,-0.1);
    glBegin(GL_LINES);
    glColor3ub(51, 51, 0);
    glVertex2f(0,0 );
    glVertex2f(0.04, -0.05 );
    glEnd();
glPopMatrix();//glPopMatrix pops the top matrix off the stack
v+=0.3f;//i=i+.1=.2
glLoadIdentity();

	int w;//clock
    GLfloat r=-.419f; GLfloat p=0.73f; GLfloat radius4 =.009f;
	int triangleAmount4 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi4 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(190, 65, 130); // clock
		glVertex2f(r, p); // center of circle
		for(w = 0; w <= triangleAmount4;w++) {
			glVertex2f(
		            r + (radius4 * cos(w *  twicePi4 / triangleAmount4)),
			    p+ (radius4 * sin(w * twicePi4 / triangleAmount4))
			);
		}
	glEnd();

	//luggage_car
	glPushMatrix();
glTranslatef(position1,0,position1);
	glBegin(GL_QUADS);
    glColor3ub(255, 0, 0);
    glVertex2f(-0.45, 0.02);
    glVertex2f(-0.45, -0.01);
    glVertex2f(-0.24, -0.01);
    glVertex2f(-0.24, 0.02);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255, 0, 0);
    glVertex2f(-0.45, 0.13);
    glVertex2f(-0.45, 0.02);
    glVertex2f(-0.44, 0.02);
    glVertex2f(-0.44, 0.13);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255, 0, 0);
    glVertex2f(-0.25, 0.13);
    glVertex2f(-0.25, 0.02);
    glVertex2f(-0.24, 0.02);
    glVertex2f(-0.24, 0.13);
    glEnd();
    //luggage_bag
    glBegin(GL_QUADS);
    glColor3ub(255, 187, 153);
    glVertex2f(-0.44, 0.065);
    glVertex2f(-0.44, 0.02);
    glVertex2f(-0.42, 0.02);
    glVertex2f(-0.42, 0.065);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(204, 0, 255);
    glVertex2f(-0.41, 0.09);
    glVertex2f(-0.41, 0.02);
    glVertex2f(-0.387, 0.02);
    glVertex2f(-0.387, 0.09);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(26, 198, 255);
    glVertex2f(-0.37, 0.09);
    glVertex2f(-0.37, 0.02);
    glVertex2f(-0.34, 0.02);
    glVertex2f(-0.34, 0.09);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0, 255, 0);
    glVertex2f(-0.387, 0.07);
    glVertex2f(-0.387, 0.02);
    glVertex2f(-0.36, 0.02);
    glVertex2f(-0.36, 0.07);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(179, 128, 255);
    glVertex2f(-0.335, 0.07);
    glVertex2f(-0.335, 0.02);
    glVertex2f(-0.31, 0.02);
    glVertex2f(-0.31, 0.07);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(204, 102, 0);
    glVertex2f(-0.31, 0.05);
    glVertex2f(-0.31, 0.02);
    glVertex2f(-0.28, 0.02);
    glVertex2f(-0.28, 0.05);
    glEnd();
     glBegin(GL_QUADS);
    glColor3ub(255, 153, 179);
    glVertex2f(-0.28, 0.1);
    glVertex2f(-0.28, 0.02);
    glVertex2f(-0.25, 0.02);
    glVertex2f(-0.25, 0.1);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.435, 0.08);
    glVertex2f(-0.435, 0.065);
    glVertex2f(-0.435, 0.08);
    glVertex2f(-0.425, 0.08);
    glVertex2f(-0.425, 0.08);
    glVertex2f(-0.425, 0.065);
    glVertex2f(-0.405, 0.1);
    glVertex2f(-0.405, 0.09);
    glVertex2f(-0.405, 0.1);
    glVertex2f(-0.39, 0.1);
    glVertex2f(-0.39, 0.1);
    glVertex2f(-0.39, 0.09);
    glVertex2f(-0.38, 0.08);
    glVertex2f(-0.38, 0.07);
    glVertex2f(-0.38, 0.08);
    glVertex2f(-0.365, 0.08);
    glVertex2f(-0.365, 0.08);
    glVertex2f(-0.365, 0.07);
    glVertex2f(-0.365, 0.1);
    glVertex2f(-0.365, 0.09);
    glVertex2f(-0.365, 0.1);
    glVertex2f(-0.345, 0.1);
    glVertex2f(-0.345, 0.1);
    glVertex2f(-0.345, 0.09);
    glVertex2f(-0.33, 0.08);
    glVertex2f(-0.33, 0.07);
    glVertex2f(-0.33, 0.08);
    glVertex2f(-0.315, 0.08);
    glVertex2f(-0.315, 0.08);
    glVertex2f(-0.315, 0.07);
    glVertex2f(-0.302, 0.065);
    glVertex2f(-0.302, 0.05);
    glVertex2f(-0.302, 0.065);
    glVertex2f(-0.288, 0.065);
    glVertex2f(-0.288, 0.065);
    glVertex2f(-0.288, 0.05);
    glVertex2f(-0.275, 0.12);
    glVertex2f(-0.275, 0.1);
    glVertex2f(-0.275, 0.12);
    glVertex2f(-0.255, 0.12);
    glVertex2f(-0.255, 0.12);
    glVertex2f(-0.255, 0.1);

    glEnd();
    //car_front
    	glBegin(GL_QUADS);
    glColor3ub(255,0,0);
    glVertex2f(-0.24, 0.015);
    glVertex2f(-0.24, 0.0);
    glVertex2f(-0.22, 0.0);
    glVertex2f(-0.22, 0.015);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.22, 0.14);
    glVertex2f(-0.22, -0.01);
    glVertex2f(-0.2, -0.01);
    glVertex2f(-0.2, 0.14);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.2, 0.14);
    glVertex2f(-0.2, 0.06);
    glVertex2f(-0.135, 0.06);
    glVertex2f(-0.16, 0.14);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.2, 0.06);
    glVertex2f(-0.2, -0.01);
    glVertex2f(-0.135, -0.01);
    glVertex2f(-0.135, 0.06);
    glEnd();
     glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.135, 0.06);
    glVertex2f(-0.135, -0.01);
    glVertex2f(-0.095, -0.01);
    glVertex2f(-0.095, 0.04);
    glEnd();
    //car_glass
     glBegin(GL_QUADS);
    glColor3ub(26, 13, 0);
    glVertex2f(-0.216, 0.13);
    glVertex2f(-0.216, 0.06);
    glVertex2f(-0.204, 0.06);
    glVertex2f(-0.204, 0.13);
    glEnd();
        glBegin(GL_QUADS);
    glColor3ub(26, 13, 0);
    glVertex2f(-0.195, 0.13);
    glVertex2f(-0.195, 0.07);
    glVertex2f(-0.145, 0.07);
    glVertex2f(-0.165, 0.13);
    glEnd();
         glBegin(GL_TRIANGLES);
    glColor3ub(193, 193, 164);
    glVertex2f(-0.133, 0.054);
    glVertex2f(-0.13295, 0.0403);
    glVertex2f(-0.105, 0.04);

    glEnd();
    //car_light
    glBegin(GL_QUADS);
    glColor3ub(255, 102, 0);
    glVertex2f(-0.175, 0.16);
    glVertex2f(-0.175, 0.14);
    glVertex2f(-0.165, 0.14);
    glVertex2f(-0.165, 0.16);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255, 102, 0);
    glVertex2f(-0.108, 0.03);
    glVertex2f(-0.108, 0.022);
    glVertex2f(-0.098, 0.022);
    glVertex2f(-0.098, 0.03);
    glEnd();
    //car_lines
    glBegin(GL_LINES);
    glColor3ub(77, 77, 77);
    glVertex2f(-0.135, 0.06);
    glVertex2f(-0.135, 0.036);
    glVertex2f(-0.135, 0.036);
    glVertex2f(-0.095, 0.036);
    glVertex2f(-0.197, 0.135);
    glVertex2f(-0.19714, 0.04418);
    glVertex2f(-0.197, 0.135);
    glVertex2f(-0.162, 0.135);
    glVertex2f(-0.162, 0.135);
    glVertex2f(-0.138, 0.06);
    glVertex2f(-0.138, 0.06);
    glVertex2f(-0.138, 0);
    glVertex2f(-0.138, 0);
    glVertex2f(-0.16, 0);
    glVertex2f(-0.19714, 0.04418);
    glVertex2f(-0.19069, 0.04535);
    glVertex2f(-0.19069, 0.04535);
    glVertex2f(-0.18527, 0.04515);
    glVertex2f(-0.18527, 0.04515);
    glVertex2f(-0.17865, 0.04195);
    glVertex2f(-0.17865, 0.04195);
    glVertex2f(-0.17287, 0.03634);
    glVertex2f(-0.17287, 0.03634);
    glVertex2f(-0.16917, 0.02974);
    glVertex2f(-0.16917, 0.02974);
    glVertex2f(-0.16607, 0.02269);
    glVertex2f(-0.16607, 0.02269);
    glVertex2f(-0.16411, 0.01591);
    glVertex2f(-0.16411, 0.01591);
    glVertex2f(-0.16264, 0.01007);
    glVertex2f(-0.16264, 0.01007);
    glVertex2f(-0.16199, -0.0000);



    glEnd();

    int w1;//clock
    GLfloat r1=-.192f; GLfloat p1=0.008f; GLfloat radius41 =.024f;
	int triangleAmount41 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi41 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 0, 0); // wheel_car
		glVertex2f(r1, p1); // center of circle
		for(w1 = 0; w1 <= triangleAmount41;w1++) {
			glVertex2f(
		            r1 + (radius41 * cos(w1 *  twicePi41 / triangleAmount41)),
			    p1+ (radius41 * sin(w1 * twicePi41 / triangleAmount41))
			);
		}
	glEnd();

    int w2;//wheel
    GLfloat r2=-.192f; GLfloat p2=0.008f; GLfloat radius42 =.009f;
	int triangleAmount42 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi42 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255); // wheel_car
		glVertex2f(r2, p2); // center of circle
		for(w2 = 0; w2 <= triangleAmount42;w2++) {
			glVertex2f(
		            r2 + (radius42 * cos(w2 *  twicePi42 / triangleAmount42)),
			    p2+ (radius42 * sin(w2 * twicePi42 / triangleAmount42))
			);
		}
	glEnd();

	int w3;//wheel
    GLfloat r3=-.12f; GLfloat p3=0.003f; GLfloat radius43 =.016f;
	int triangleAmount43 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi43 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 0, 0); // wheel_car
		glVertex2f(r3, p3); // center of circle
		for(w3 = 0; w3 <= triangleAmount43;w3++) {
			glVertex2f(
		            r3 + (radius43 * cos(w3 *  twicePi43 / triangleAmount43)),
			    p3+ (radius43 * sin(w3 * twicePi43/ triangleAmount43))
			);
		}
	glEnd();


    int w4;//wheel
    GLfloat r4=-.12f; GLfloat p4=0.003f; GLfloat radius44 =.005f;
	int triangleAmount44 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi44 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255); // wheel_car
		glVertex2f(r4, p4); // center of circle
		for(w4 = 0; w4 <= triangleAmount44;w4++) {
			glVertex2f(
		            r4 + (radius44 * cos(w4 *  twicePi44 / triangleAmount44)),
			    p4+ (radius44 * sin(w4 * twicePi44/ triangleAmount44))
			);
		}
	glEnd();

    int w5;//wheel
    GLfloat r5=-.31f; GLfloat p5=-0.001f; GLfloat radius45 =.0125f;
	int triangleAmount45 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi45 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 0, 0); // wheel_car
		glVertex2f(r5, p5); // center of circle
		for(w5 = 0; w5 <= triangleAmount45;w5++) {
			glVertex2f(
		            r5 + (radius45 * cos(w5 *  twicePi45 / triangleAmount45)),
			    p5+ (radius45 * sin(w5 * twicePi45/ triangleAmount45))
			);
		}
	glEnd();

	int w6;//wheel
    GLfloat r6=-.31f; GLfloat p6=-0.001f; GLfloat radius46 =.005f;
	int triangleAmount46 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi46 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255); // wheel_car
		glVertex2f(r6, p6); // center of circle
		for(w6 = 0; w6 <= triangleAmount46;w6++) {
			glVertex2f(
		            r6 + (radius46* cos(w6 *  twicePi46 / triangleAmount46)),
			    p6+ (radius46 * sin(w6 * twicePi46/ triangleAmount46))
			);
		}
	glEnd();
	int w7;//wheel
    GLfloat r7=-.41f; GLfloat p7=-0.001f; GLfloat radius47 =.0125f;
	int triangleAmount47 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi47 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0); // wheel_car
		glVertex2f(r7, p7); // center of circle
		for(w7 = 0; w7 <= triangleAmount47;w7++) {
			glVertex2f(
		            r7 + (radius47* cos(w7 *  twicePi47 / triangleAmount47)),
			    p7+ (radius47* sin(w7 * twicePi47/ triangleAmount47))
			);
		}
	glEnd();
	int w8;//wheel
    GLfloat r8=-.41f; GLfloat p8=-0.001f; GLfloat radius48 =.005f;
	int triangleAmount48 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi48 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255); // wheel_car
		glVertex2f(r8, p8); // center of circle
		for(w8 = 0; w8 <= triangleAmount48;w8++) {
			glVertex2f(
		            r8 + (radius48* cos(w8 *  twicePi48 / triangleAmount48)),
			    p8+ (radius48* sin(w8 * twicePi48/ triangleAmount48))
			);
		}
	glEnd();
	glPopMatrix();
    glEnd();

//light

glBegin(GL_QUADS);
glColor3ub(204, 204, 0);
glVertex2f(0.47, 0.42 );
glVertex2f( 0.47, 0.4 );
glVertex2f( 0.5, 0.4 );
glVertex2f(0.5, 0.42);
glEnd();
glBegin(GL_QUADS);
glColor3ub(71, 71, 107);
glVertex2f(0.48, 0.4);
glVertex2f(0.48, 0.2);
glVertex2f(0.49, 0.2 );
glVertex2f(0.49, 0.4);
glEnd();
glBegin(GL_QUADS);
glColor3ub(204, 204, 0);
glVertex2f(-0.19, 0.42 );
glVertex2f( -0.19, 0.4 );
glVertex2f( -0.22, 0.4 );
glVertex2f(-0.22, 0.42);
glEnd();
glBegin(GL_QUADS);
glColor3ub(71, 71, 107);
glVertex2f(-0.21, 0.4);
glVertex2f(-0.21, 0.2);
glVertex2f(-0.204, 0.2);
glVertex2f(-0.204, 0.4);
glEnd();
glutTimerFunc(2600,night_demo,0);
glFlush();
}



void day(int val) {

 glutDisplayFunc(night);
 glLoadIdentity();
 sound();

}
   /*void handleKeypress(unsigned char key, int x, int y) {
        switch (key) {
    case 'p':
         glutDisplayFunc(day);
         sound();
         glutPostRedisplay();
        break;
    case 'r':
        glutDisplayFunc(late_night);
            sound2();
         glutPostRedisplay();
        break;
        glutPostRedisplay();
        }
   }*/


int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("Test");
	glutInitWindowSize(320, 320);
	glutDisplayFunc(day);
	glutIdleFunc(Idle);
	//screen();
	glutTimerFunc(100, update, 0);
	glutTimerFunc(100, update1, 0);
	glutTimerFunc(100, update2, 0);
	glutMouseFunc(handleMouse);
	//glutKeyboardFunc(handleKeypress);
	glutMainLoop();
	return 0;

}



