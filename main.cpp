//Anggota Kelompok Wanita Selalu Benar :
//Natalia Mega Hapsari  (672019051)
//Ragil Nike Pratistha  (672019052)
//Gabriela Desira Louis (672019059)

#include <Windows.h>
#include <GL/glut.h>
#include <GL/freeglut.h>
#include <math.h>
#include <iostream>

void init(void);
void tampil(void);
void keyboard(unsigned char, int, int);
void ukuran(int, int);

int is_depth;

int main (int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(800, 1000);
    glutInitWindowPosition(250, 80);
    glutCreateWindow("Tugas Rancang - Wanita Selalu Benar- Hongkong");
    init();
	glutDisplayFunc(tampil);
    glutKeyboardFunc(keyboard);
    glutReshapeFunc(ukuran);
    glutMainLoop();
    return 0;
}

void init(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glEnable(GL_DEPTH_TEST);
	//glEnable(GL_LIGHTING);
    is_depth = 1;
    glMatrixMode(GL_MODELVIEW);
    glPointSize(9.0);
    glLineWidth(6.0f);

}

void tampil(void)
{
	if (is_depth)
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    else
    glClear(GL_COLOR_BUFFER_BIT);

	// g 1 Depan
	glBegin(GL_QUADS);
	glColor3f(0.5, 0.0, 0.0);
	glVertex3f(-20.0,-45.0, 10.0);//kiri bwh 1
	glVertex3f(-20.0, 20.0, 10.0);//kiri atas 1
	glVertex3f(20.0, 20.0, 10.0);
    glVertex3f(20.0,-45.0, 10.0);
	glEnd();

	// g 1 Belakang
	glBegin(GL_QUADS);
	glColor3f(0.5, 0.0, 0.0);
	glVertex3f(-20.0,-45.0, -5.0);
	glVertex3f(-20.0, 20.0, -5.0);
	glVertex3f(20.0, 20.0, -5.0);
    glVertex3f(20.0,-45.0, -5.0);
	glEnd();

	// g 1 Kiri
	glBegin(GL_QUADS);
	glColor3f(0.5, 0.0, 0.0);
	glVertex3f(-20.0,-45.0, 10.0);
	glVertex3f(-20.0, 20.0, 10.0);
	glVertex3f(-20.0, 20.0, -5.0);
    glVertex3f(-20.0,-45.0, -5.0);
	glEnd();

	// g 1 Kanan
	glBegin(GL_QUADS);
	glColor3f(0.5, 0.0, 0.0);
	glVertex3f(20.0,-45.0, 10.0);
	glVertex3f(20.0, 20.0, 10.0);
	glVertex3f(20.0, 20.0, -5.0);
    glVertex3f(20.0,-45.0, -5.0);
	glEnd();

	// Bawah
	glBegin(GL_QUADS);
	glColor3f(1.0,1.1,0.4);
	glVertex3f(-50.0,-45.0, 25.0);
	glVertex3f(50.0, -45.0, 25.0);
	glVertex3f(50.0, -45.0,-120.0);
    glVertex3f(-50.0,-45.0,-120.0);
	glEnd();

	// Atap Kiri
	glBegin(GL_QUADS);
	glColor3f(0.5, 0.2, 0.0);
	glVertex3f(-20.0,20.0, 10.0);
	glVertex3f(-10.0, 40.0, 2.5);
	glVertex3f(-10.0, 40.0, 2.5);
	glVertex3f(-20.0,20.0, -5.0);
	glEnd();

	// Atap Kanan
	glBegin(GL_QUADS);
	glColor3f(0.5, 0.2, 0.0);
	glVertex3f(10.0,40.0, 2.5);
	glVertex3f(20.0, 20.0, 10.0);
	glVertex3f(20.0, 20.0, -5.0);
    glVertex3f(10.0,40.0, 2.5);
	glEnd();

	// Atap Depan
	glBegin(GL_QUADS);
	glColor3f(0.5, 0.2, 0.0);
	glVertex3f(-10.0,40.0, 2.5);
	glVertex3f(-20.0, 20.0, 10.0);
	glVertex3f(20.0, 20.0, 10.0);
    glVertex3f(10.0,40.0, 2.5);
	glEnd();

	// Atap Belakang
	glBegin(GL_QUADS);
	glColor3f(0.5, 0.2, 0.0);
	glVertex3f(10.0,40.0,2.5);
	glVertex3f(-10.0,40.0,2.5);
	glVertex3f(-20.0,20.0,-5.0);
	glVertex3f(20.0,20.0,-5.0);
	glEnd();

	// g 2 Depan
	glBegin(GL_QUADS);
	glColor3f(0.5, 0.0, 0.0);
	glVertex3f(-40.0,-45.0, -5.2);
	glVertex3f(-40.0, 10.0, -5.2);
	glVertex3f(40.0, 10.0, -5.2);
    glVertex3f(40.0,-45.0, -5.2);
	glEnd();

	// g 2 Belakang
	glBegin(GL_QUADS);
	glColor3f(0.5, 0.0, 0.0);
	glVertex3f(-40.0,-45.0, -100.0);
	glVertex3f(-40.0, 10.0, -100.0);
	glVertex3f(40.0, 10.0, -100.0);
    glVertex3f(40.0,-45.0, -100.0);
	glEnd();

	// g 2 Kanan
	glBegin(GL_QUADS);
	glColor3f(0.5, 0.0, 0.0);
	glVertex3f(40.0,-45.0, -100.0);
	glVertex3f(40.0, 10.0, -100.0);
	glVertex3f(40.0, 10.0, -5.0);
    glVertex3f(40.0,-45.0, -5.0);
	glEnd();

	// g 2 Kiri
	glBegin(GL_QUADS);
	glColor3f(0.5, 0.0, 0.0);
	glVertex3f(-40.0,-45.0, -100.0);
	glVertex3f(-40.0, 10.0, -100.0);
	glVertex3f(-40.0, 10.0, -5.0);
    glVertex3f(-40.0,-45.0, -5.0);
	glEnd();

	// atap g 2
	glBegin(GL_QUADS);
	glColor3f(0.5, 0.2, 0.0);
	glVertex3f(40.0, 10.0, -100.0);
	glVertex3f(40.0, 10.0, -5.0);
	glVertex3f( -40.0, 10.0, -5.0);
    glVertex3f( -40.0, 10.0, -100.0);
	glEnd();


	// Tower 1a
	glBegin(GL_QUADS);
	glColor3f(0.5, 0.0, 0.0);
	glVertex3f(20.0,-45.0, 10.0);
	glVertex3f(20.0, 40.0, 10.0);
	glVertex3f(30.0, 40.0, 10.0);
    glVertex3f(30.0,-45.0, 10.0);
	glEnd();

	// Tower 1a.1 belakang
	glBegin(GL_QUADS);
	glColor3f(0.5, 0.0, 0.0);
	glVertex3f(20.0,-45.0, -5.0);
	glVertex3f(20.0, 40.0, -5.0);
	glVertex3f(30.0, 40.0, -5.0);
    glVertex3f(30.0,-45.0, -5.0);
	glEnd();

	// Tower 1a.2 Kiri
	glBegin(GL_QUADS);
	glColor3f(0.5, 0.0, 0.0);
	glVertex3f(20.0,-45.0, 10.0);
	glVertex3f(20.0, 40.0, 10.0);
	glVertex3f(20.0, 40.0, -5.0);
    glVertex3f(20.0,-45.0, -5.0);
	glEnd();

	// Tower 1a.3 kanan
	glBegin(GL_QUADS);
	glColor3f(0.5, 0.0, 0.0);
	glVertex3f(30.0,-45.0, 10.0);
	glVertex3f(30.0, 40.0, 10.0);
	glVertex3f(30.0, 40.0, -5.0);
    glVertex3f(30.0,-45.0, -5.0);
	glEnd();

	// Tower 2a depan
	glBegin(GL_QUADS);
	glColor3f(0.5, 0.0, 0.0);
	glVertex3f(40.0,-45.0, 10.0);
	glVertex3f(40.0, 10.0, 10.0);
	glVertex3f(30.0, 10.0, 10.0);
    glVertex3f(30.0,-45.0, 10.0);
	glEnd();

	// Tower 2a.1 belakang
	glBegin(GL_QUADS);
	glColor3f(0.5, 0.0, 0.0);
	glVertex3f(40.0,-45.0, -5.0);
	glVertex3f(40.0, 10.0, -5.0);
	glVertex3f(30.0, 10.0, -5.0);
    glVertex3f(30.0,-45.0, -5.0);
	glEnd();

	// Tower 2a.2 Kiri
	glBegin(GL_QUADS);
	glColor3f(0.5, 0.0, 0.0);
	glVertex3f(30.0,-45.0, 10.0);
	glVertex3f(30.0, 10.0, 10.0);
	glVertex3f(30.0, 10.0, -5.0);
    glVertex3f(30.0,-45.0, -5.0);
	glEnd();

	// Tower 2a.3 kanan
	glBegin(GL_QUADS);
	glColor3f(0.5, 0.0, 0.0);
	glVertex3f(40.0,-45.0, 10.0);
	glVertex3f(40.0, 10.0, 10.0);
	glVertex3f(40.0, 10.0, -5.0);
    glVertex3f(40.0,-45.0, -5.0);
	glEnd();

	// Tower 1b depan
	glBegin(GL_QUADS);
	glColor3f(0.5, 0.0, 0.0);
	glVertex3f(-30.0,-45.0, 10.0);
	glVertex3f(-30.0, 40.0, 10.0);
	glVertex3f(-20.0, 40.0, 10.0);
    glVertex3f(-20.0,-45.0, 10.0);
	glEnd();

	// Tower 1b.1 belakang
	glBegin(GL_QUADS);
	glColor3f(0.5, 0.0, 0.0);
	glVertex3f(-30.0,-45.0, -5.0);
	glVertex3f(-30.0, 40.0, -5.0);
	glVertex3f(-20.0, 40.0, -5.0);
    glVertex3f(-20.0,-45.0, -5.0);
	glEnd();

	// Tower 1b.2 kanan
	glBegin(GL_QUADS);
	glColor3f(0.5, 0.0, 0.0);
	glVertex3f(-20.0,-45.0, 10.0);
	glVertex3f(-20.0, 40.0, 10.0);
	glVertex3f(-20.0, 40.0, -5.0);
    glVertex3f(-20.0,-45.0, -5.0);
	glEnd();

	// Tower 1b.3 kiri
	glBegin(GL_QUADS);
	glColor3f(0.5, 0.0, 0.0);
	glVertex3f(-30.0,-45.0, 10.0);
	glVertex3f(-30.0, 40.0, 10.0);
	glVertex3f(-30.0, 40.0, -5.0);
	glVertex3f(-30.0,-45.0, -5.0);
	glEnd();

	// Tower 2a depan
	glBegin(GL_QUADS);
	glColor3f(0.5, 0.0, 0.0);
	glVertex3f(-40.0,-45.0, 10.0);
	glVertex3f(-40.0, 10.0, 10.0);
	glVertex3f(-30.0, 10.0, 10.0);
    glVertex3f(-30.0,-45.0, 10.0);
	glEnd();

	// Tower 2a.1 belakang
	glBegin(GL_QUADS);
	glColor3f(0.5, 0.0, 0.0);
	glVertex3f(-40.0,-45.0, -5.0);
	glVertex3f(-40.0, 10.0, -5.0);
	glVertex3f(-30.0, 10.0, -5.0);
    glVertex3f(-30.0,-45.0, -5.0);
	glEnd();

	// Tower 2a.2 kanan
	glBegin(GL_QUADS);
	glColor3f(0.5, 0.0, 0.0);
	glVertex3f(-30.0,-45.0, 10.0);
	glVertex3f(-30.0, 10.0, 10.0);
	glVertex3f(-30.0, 10.0, -5.0);
    glVertex3f(-30.0,-45.0, -5.0);
	glEnd();

	// Tower 2a.3 kiri
	glBegin(GL_QUADS);
	glColor3f(0.5, 0.0, 0.0);
	glVertex3f(-40.0,-45.0, 10.0);
	glVertex3f(-40.0, 10.0, 10.0);
	glVertex3f(-40.0, 10.0, -5.0);
    glVertex3f(-40.0,-45.0, -5.0);
	glEnd();


	// pintu depan
	glBegin(GL_QUADS);
	glColor3f(1.0,0.8,0.3);
	glVertex3f(5.0,-45.0, 10.2);
	glVertex3f(5.0, -22.0, 10.2);
	glVertex3f(-5.0, -22.0, 10.2);
    glVertex3f(-5.0,-45.0, 10.2);
	glEnd();

	//pintu depan s
	glBegin(GL_QUADS);
	glColor3f(1.0,0.8,0.3);
	glVertex3f(5.0,-22.0, 10.2);
	glVertex3f(2.0, -19.0, 10.2);
	glVertex3f(-2.0, -19.0, 10.2);
    glVertex3f(-5.0,-22.0, 10.2);
	glEnd();

	//pintu depan t
	glBegin(GL_QUADS);
	glColor3f(0.0,0.0,0.0);
	glVertex3f(0.1,-45.0, 10.3);
	glVertex3f(0.1, -19.0, 10.3);
	glVertex3f(-0.1, -19.0, 10.3);
    glVertex3f(-0.1,-45.0, 10.3);
	glEnd();


	//JENDELA
	//Depan
	//j1
	glBegin(GL_QUADS);
	glColor3f(1.0,1.0,0.6);
	glVertex3f(37.0,-30.0, 10.2);
	glVertex3f(37.0, -20.0, 10.2);
	glVertex3f(32.0, -20.0, 10.2);
    glVertex3f(32.0,-30.0, 10.2);
	glEnd();

	//j1
	glBegin(GL_QUADS);
	glColor3f(1.0,1.0,0.6);
	glVertex3f(37.0,-10.0, 10.2);
	glVertex3f(37.0, 0.0, 10.2);
	glVertex3f(32.0, 0.0, 10.2);
    glVertex3f(32.0,-10.0, 10.2);
	glEnd();

	//j2 a
	glBegin(GL_QUADS);
	glColor3f(1.0,1.0,0.6);
	glVertex3f(27.0,-30.0, 10.2);
	glVertex3f(27.0, -20.0, 10.2);
	glVertex3f(23.0, -20.0, 10.2);
    glVertex3f(23.0,-30.0, 10.2);
	glEnd();

	//j2 b
	glBegin(GL_QUADS);
	glColor3f(1.0,1.0,0.6);
	glVertex3f(27.0, -10.0, 10.2);
	glVertex3f(27.0, 0.0, 10.2);
	glVertex3f(23.0, 0.0, 10.2);
    glVertex3f(23.0, -10.0, 10.2);
	glEnd();

	//j2 c
	glBegin(GL_QUADS);
	glColor3f(1.0,1.0,0.6);
	glVertex3f(27.0, 10.0, 10.2);
	glVertex3f(27.0, 20.0, 10.2);
	glVertex3f(23.0, 20.0, 10.2);
    glVertex3f(23.0, 10.0, 10.2);
	glEnd();

	//j2 d
	glBegin(GL_QUADS);
	glColor3f(1.0,1.0,0.6);
	glVertex3f(27.0, 35.0, 10.2);
	glVertex3f(27.0, 30.0, 10.2);
	glVertex3f(23.0, 30.0, 10.2);
    glVertex3f(23.0, 35.0, 10.2);
	glEnd();

	//j2 e
	glBegin(GL_QUADS);
	glColor3f(1.0,1.0,0.6);
	glVertex3f(27.0, 35.0, -5.2);
	glVertex3f(27.0, 30.0, -5.2);
	glVertex3f(23.0, 30.0, -5.2);
    glVertex3f(23.0, 35.0, -5.2);
	glEnd();


	//j3 a
	glBegin(GL_QUADS);
	glColor3f(1.0,1.0,0.6);
	glVertex3f(-27.0,-30.0, 10.2);
	glVertex3f(-27.0, -20.0, 10.2);
	glVertex3f(-23.0, -20.0, 10.2);
    glVertex3f(-23.0,-30.0, 10.2);
	glEnd();

	//j3 b
	glBegin(GL_QUADS);
	glColor3f(1.0,1.0,0.6);
	glVertex3f(-27.0, -10.0, 10.2);
	glVertex3f(-27.0, 0.0, 10.2);
	glVertex3f(-23.0, 0.0, 10.2);
    glVertex3f(-23.0, -10.0, 10.2);
	glEnd();

	//j3 c
	glBegin(GL_QUADS);
	glColor3f(1.0,1.0,0.6);
	glVertex3f(-27.0, 10.0, 10.2);
	glVertex3f(-27.0, 20.0, 10.2);
	glVertex3f(-23.0, 20.0, 10.2);
    glVertex3f(-23.0, 10.0, 10.2);
	glEnd();

	//j3 d
	glBegin(GL_QUADS);
	glColor3f(1.0,1.0,0.6);
	glVertex3f(-27.0, 35.0, 10.2);
	glVertex3f(-27.0, 30.0, 10.2);
	glVertex3f(-23.0, 30.0, 10.2);
    glVertex3f(-23.0, 35.0, 10.2);
	glEnd();

	//j3 e
	glBegin(GL_QUADS);
	glColor3f(1.0,1.0,0.6);
	glVertex3f(-27.0, 35.0, -5.2);
	glVertex3f(-27.0, 30.0, -5.2);
	glVertex3f(-23.0, 30.0, -5.2);
    glVertex3f(-23.0, 35.0, -5.2);
	glEnd();

	//j4
	glBegin(GL_QUADS);
	glColor3f(1.0,1.0,0.6);
	glVertex3f(-37.0,-30.0, 10.2);
	glVertex3f(-37.0, -20.0, 10.2);
	glVertex3f(-32.0, -20.0,10.2);
    glVertex3f(-32.0,-30.0, 10.2);
	glEnd();

	//j4
	glBegin(GL_QUADS);
	glColor3f(1.0,1.0,0.6);
	glVertex3f(-37.0,-10.0, 10.2);
	glVertex3f(-37.0, 0.0, 10.2);
	glVertex3f(-32.0, 0.0, 10.2);
    glVertex3f(-32.0,-10.0, 10.2);
	glEnd();


	//j6 a
	glBegin(GL_QUADS);
	glColor3f(1.0,1.0,0.6);
	glVertex3f(-6.0, -10.0, 10.2);
	glVertex3f(-6.0, 0.0, 10.2);
	glVertex3f(-4.0, 0.0, 10.2);
    glVertex3f(-4.0, -10.0, 10.2);
	glEnd();

	//j6 b
	glBegin(GL_QUADS);
	glColor3f(1.0,1.0,0.6);
	glVertex3f(-2.0, -10.0, 10.2);
	glVertex3f(-2.0, 0.0, 10.2);
	glVertex3f(2.0, 0.0, 10.2);
    glVertex3f(2.0, -10.0, 10.2);
	glEnd();

	//j6 c
	glBegin(GL_QUADS);
	glColor3f(1.0,1.0,0.6);
	glVertex3f(6.0, -10.0, 10.2);
	glVertex3f(6.0, 0.0, 10.2);
	glVertex3f(4.0, 0.0, 10.2);
    glVertex3f(4.0, -10.0, 10.2);
	glEnd();

	//j6 b 1
	glBegin(GL_QUADS);
	glColor3f(1.0,1.0,0.6);
	glVertex3f(-2.0, 10.0, 10.2);
	glVertex3f(-2.0, 13.0, 10.2);
	glVertex3f(2.0, 13.0, 10.2);
    glVertex3f(2.0, 10.0, 10.2);
	glEnd();

	//j6 b 1 s
	glBegin(GL_QUADS);
	glColor3f(1.0,1.0,0.6);
	glVertex3f(-2.0, 13.0, 10.2);
	glVertex3f(0.0, 15.0, 10.2);
	glVertex3f(0.0, 15.0, 10.2);
    glVertex3f(2.0, 13.0, 10.2);
	glEnd();

	//j6 b 2
	glBegin(GL_QUADS);
	glColor3f(1.0,1.0,0.6);
	glVertex3f(5.0, 10.0, 10.2);
	glVertex3f(5.0, 13.0, 10.2);
	glVertex3f(9.0, 13.0, 10.2);
    glVertex3f(9.0, 10.0, 10.2);
	glEnd();

	//j6 b 3
	glBegin(GL_QUADS);
	glColor3f(1.0,1.0,0.6);
	glVertex3f(12.0, 10.0, 10.2);
	glVertex3f(12.0, 13.0, 10.2);
	glVertex3f(16.0, 13.0, 10.2);
    glVertex3f(16.0, 10.0, 10.2);
	glEnd();

	//j6 b 4
	glBegin(GL_QUADS);
	glColor3f(1.0,1.0,0.6);
	glVertex3f(-5.0, 10.0, 10.2);
	glVertex3f(-5.0, 13.0, 10.2);
	glVertex3f(-9.0, 13.0, 10.2);
    glVertex3f(-9.0, 10.0, 10.2);
	glEnd();

	//j6 b 5
	glBegin(GL_QUADS);
	glColor3f(1.0,1.0,0.6);
	glVertex3f(-12.0, 10.0, 10.2);
	glVertex3f(-12.0, 13.0, 10.2);
	glVertex3f(-16.0, 13.0, 10.2);
    glVertex3f(-16.0, 10.0, 10.2);
	glEnd();


	//Jendela KIRI
	//ja 1
	glBegin(GL_QUADS);
	glColor3f(1.0,1.0,0.6);
	glVertex3f(-40.1,-10.0, 5.0);
	glVertex3f(-40.1, 0.0, 5.0);
	glVertex3f(-40.1, 0.0, 0.0);
    glVertex3f(-40.1,-10.0, 0.0);
	glEnd();

	//ja 2
	glBegin(GL_QUADS);
	glColor3f(1.0,1.0,0.6);
	glVertex3f(-40.1,-10.0, -10.0);
	glVertex3f(-40.1, 0.0, -10.0);
	glVertex3f(-40.1, 0.0, -15.0);
    glVertex3f(-40.1,-10.0, -15.0);
	glEnd();

	//ja 3
	glBegin(GL_QUADS);
	glColor3f(1.0,1.0,0.6);
	glVertex3f(-40.1,-10.0, -20.0);
	glVertex3f(-40.1, 0.0, -20.0);
	glVertex3f(-40.1, 0.0, -25.0);
    glVertex3f(-40.1,-10.0, -25.0);
	glEnd();

	//ja 4
	glBegin(GL_QUADS);
	glColor3f(1.0,1.0,0.6);
	glVertex3f(-40.1,-10.0, -30.0);
	glVertex3f(-40.1, 0.0, -30.0);
	glVertex3f(-40.1, 0.0, -35.0);
    glVertex3f(-40.1,-10.0, -35.0);
	glEnd();

	//ja 5
	glBegin(GL_QUADS);
	glColor3f(1.0,1.0,0.6);
	glVertex3f(-40.1,-10.0, -40.0);
	glVertex3f(-40.1, 0.0, -40.0);
	glVertex3f(-40.1, 0.0, -45.0);
    glVertex3f(-40.1,-10.0, -45.0);
	glEnd();

	//ja 6
	glBegin(GL_QUADS);
	glColor3f(1.0,1.0,0.6);
	glVertex3f(-40.1,-10.0, -50.0);
	glVertex3f(-40.1, 0.0, -50.0);
	glVertex3f(-40.1, 0.0, -55.0);
    glVertex3f(-40.1,-10.0, -55.0);
	glEnd();

	//ja 7
	glBegin(GL_QUADS);
	glColor3f(1.0,1.0,0.6);
	glVertex3f(-40.1,-10.0, -60.0);
	glVertex3f(-40.1, 0.0, -60.0);
	glVertex3f(-40.1, 0.0, -65.0);
    glVertex3f(-40.1,-10.0, -65.0);
	glEnd();

	//ja 8
	glBegin(GL_QUADS);
	glColor3f(1.0,1.0,0.6);
	glVertex3f(-40.1,-10.0, -70.0);
	glVertex3f(-40.1, 0.0, -70.0);
	glVertex3f(-40.1, 0.0, -75.0);
    glVertex3f(-40.1,-10.0, -75.0);
	glEnd();

	//ja 9
	glBegin(GL_QUADS);
	glColor3f(1.0,1.0,0.6);
	glVertex3f(-40.1,-10.0, -80.0);
	glVertex3f(-40.1, 0.0, -80.0);
	glVertex3f(-40.1, 0.0, -85.0);
    glVertex3f(-40.1,-10.0, -85.0);
	glEnd();

	//ja 10
	glBegin(GL_QUADS);
	glColor3f(1.0,1.0,0.6);
	glVertex3f(-40.1,-10.0, -90.0);
	glVertex3f(-40.1, 0.0, -90.0);
	glVertex3f(-40.1, 0.0, -95.0);
    glVertex3f(-40.1,-10.0, -95.0);
	glEnd();


	// jb 1
	glBegin(GL_QUADS);
	glColor3f(1.0,1.0,0.6);
	glVertex3f(-40.1,-30.0, 5.0);
	glVertex3f(-40.1, -20.0, 5.0);
	glVertex3f(-40.1, -20.0, 0.0);
    glVertex3f(-40.1,-30.0, 0.0);
	glEnd();

	// jb 2
	glBegin(GL_QUADS);
	glColor3f(1.0,1.0,0.6);
	glVertex3f(-40.1,-30.0, -10.0);
	glVertex3f(-40.1, -20.0, -10.0);
	glVertex3f(-40.1, -20.0, -15.0);
    glVertex3f(-40.1,-30.0, -15.0);
	glEnd();

	// jb 3
	glBegin(GL_QUADS);
	glColor3f(1.0,1.0,0.6);
	glVertex3f(-40.1,-30.0, -20.0);
	glVertex3f(-40.1, -20.0, -20.0);
	glVertex3f(-40.1, -20.0, -25.0);
    glVertex3f(-40.1,-30.0, -25.0);
	glEnd();

	// jb 4
	glBegin(GL_QUADS);
	glColor3f(1.0,1.0,0.6);
	glVertex3f(-40.1,-30.0, -30.0);
	glVertex3f(-40.1, -20.0, -30.0);
	glVertex3f(-40.1, -20.0, -35.0);
    glVertex3f(-40.1,-30.0, -35.0);
	glEnd();

	// jb 5
	glBegin(GL_QUADS);
	glColor3f(1.0,1.0,0.6);
	glVertex3f(-40.1,-30.0, -40.0);
	glVertex3f(-40.1, -20.0, -40.0);
	glVertex3f(-40.1, -20.0, -45.0);
    glVertex3f(-40.1,-30.0, -45.0);
	glEnd();

	// jb 6
	glBegin(GL_QUADS);
	glColor3f(1.0,1.0,0.6);
	glVertex3f(-40.1,-30.0, -50.0);
	glVertex3f(-40.1, -20.0, -50.0);
	glVertex3f(-40.1, -20.0, -55.0);
    glVertex3f(-40.1,-30.0, -55.0);
	glEnd();

	// jb 7
	glBegin(GL_QUADS);
	glColor3f(1.0,1.0,0.6);
	glVertex3f(-40.1,-30.0, -60.0);
	glVertex3f(-40.1, -20.0, -60.0);
	glVertex3f(-40.1, -20.0, -65.0);
    glVertex3f(-40.1,-30.0, -65.0);
	glEnd();

	// jb 8
	glBegin(GL_QUADS);
	glColor3f(1.0,1.0,0.6);
	glVertex3f(-40.1,-30.0, -70.0);
	glVertex3f(-40.1, -20.0, -70.0);
	glVertex3f(-40.1, -20.0, -75.0);
    glVertex3f(-40.1,-30.0, -75.0);
	glEnd();

	// jb 9
	glBegin(GL_QUADS);
	glColor3f(1.0,1.0,0.6);
	glVertex3f(-40.1,-30.0, -80.0);
	glVertex3f(-40.1, -20.0, -80.0);
	glVertex3f(-40.1, -20.0, -85.0);
    glVertex3f(-40.1,-30.0, -85.0);
	glEnd();

	// jb 10
	glBegin(GL_QUADS);
	glColor3f(1.0,1.0,0.6);
	glVertex3f(-40.1,-30.0, -90.0);
	glVertex3f(-40.1, -20.0, -90.0);
	glVertex3f(-40.1, -20.0, -95.0);
    glVertex3f(-40.1,-30.0, -95.0);
	glEnd();



	//Jendela KANAN
	//jc 1
	glBegin(GL_QUADS);
	glColor3f(1.0,1.0,0.6);
	glVertex3f(40.1,-10.0, 5.0);
	glVertex3f(40.1, 0.0, 5.0);
	glVertex3f(40.1, 0.0, 0.0);
    glVertex3f(40.1,-10.0, 0.0);
	glEnd();

	//jc 2
	glBegin(GL_QUADS);
	glColor3f(1.0,1.0,0.6);
	glVertex3f(40.1,-10.0, -10.0);
	glVertex3f(40.1, 0.0, -10.0);
	glVertex3f(40.1, 0.0, -15.0);
    glVertex3f(40.1,-10.0, -15.0);
	glEnd();

	//jc 3
	glBegin(GL_QUADS);
	glColor3f(1.0,1.0,0.6);
	glVertex3f(40.1,-10.0, -20.0);
	glVertex3f(40.1, 0.0, -20.0);
	glVertex3f(40.1, 0.0, -25.0);
    glVertex3f(40.1,-10.0, -25.0);
	glEnd();

	//jc 4
	glBegin(GL_QUADS);
	glColor3f(1.0,1.0,0.6);
	glVertex3f(40.1,-10.0, -30.0);
	glVertex3f(40.1, 0.0, -30.0);
	glVertex3f(40.1, 0.0, -35.0);
    glVertex3f(40.1,-10.0, -35.0);
	glEnd();

	//jc 5
	glBegin(GL_QUADS);
	glColor3f(1.0,1.0,0.6);
	glVertex3f(40.1,-10.0, -40.0);
	glVertex3f(40.1, 0.0, -40.0);
	glVertex3f(40.1, 0.0, -45.0);
    glVertex3f(40.1,-10.0, -45.0);
	glEnd();

	//jc 6
	glBegin(GL_QUADS);
	glColor3f(1.0,1.0,0.6);
	glVertex3f(40.1,-10.0, -50.0);
	glVertex3f(40.1, 0.0, -50.0);
	glVertex3f(40.1, 0.0, -55.0);
    glVertex3f(40.1,-10.0, -55.0);
	glEnd();

	//jc 7
	glBegin(GL_QUADS);
	glColor3f(1.0,1.0,0.6);
	glVertex3f(40.1,-10.0, -60.0);
	glVertex3f(40.1, 0.0, -60.0);
	glVertex3f(40.1, 0.0, -65.0);
    glVertex3f(40.1,-10.0, -65.0);
	glEnd();

	//jc 8
	glBegin(GL_QUADS);
	glColor3f(1.0,1.0,0.6);
	glVertex3f(40.1,-10.0, -70.0);
	glVertex3f(40.1, 0.0, -70.0);
	glVertex3f(40.1, 0.0, -75.0);
    glVertex3f(40.1,-10.0, -75.0);
	glEnd();

	//jc 9
	glBegin(GL_QUADS);
	glColor3f(1.0,1.0,0.6);
	glVertex3f(40.1,-10.0, -80.0);
	glVertex3f(40.1, 0.0, -80.0);
	glVertex3f(40.1, 0.0, -85.0);
    glVertex3f(40.1,-10.0, -85.0);
	glEnd();

	//jc 10
	glBegin(GL_QUADS);
	glColor3f(1.0,1.0,0.6);
	glVertex3f(40.1,-10.0, -90.0);
	glVertex3f(40.1, 0.0, -90.0);
	glVertex3f(40.1, 0.0, -95.0);
    glVertex3f(40.1,-10.0, -95.0);
	glEnd();



	// jd 1
	glBegin(GL_QUADS);
	glColor3f(1.0,1.0,0.6);
	glVertex3f(40.1,-30.0, 5.0);
	glVertex3f(40.1, -20.0, 5.0);
	glVertex3f(40.1, -20.0, 0.0);
    glVertex3f(40.1,-30.0, 0.0);
	glEnd();

	// jd 2
	glBegin(GL_QUADS);
	glColor3f(1.0,1.0,0.6);
	glVertex3f(40.1,-30.0, -10.0);
	glVertex3f(40.1, -20.0, -10.0);
	glVertex3f(40.1, -20.0, -15.0);
    glVertex3f(40.1,-30.0, -15.0);
	glEnd();

	// jd 3
	glBegin(GL_QUADS);
	glColor3f(1.0,1.0,0.6);
	glVertex3f(40.1,-30.0, -20.0);
	glVertex3f(40.1, -20.0, -20.0);
	glVertex3f(40.1, -20.0, -25.0);
    glVertex3f(40.1,-30.0, -25.0);
	glEnd();

	// jd 4
	glBegin(GL_QUADS);
	glColor3f(1.0,1.0,0.6);
	glVertex3f(40.1,-30.0, -30.0);
	glVertex3f(40.1, -20.0, -30.0);
	glVertex3f(40.1, -20.0, -35.0);
    glVertex3f(40.1,-30.0, -35.0);
	glEnd();

	// jd 5
	glBegin(GL_QUADS);
	glColor3f(1.0,1.0,0.6);
	glVertex3f(40.1,-30.0, -40.0);
	glVertex3f(40.1, -20.0, -40.0);
	glVertex3f(40.1, -20.0, -45.0);
    glVertex3f(40.1,-30.0, -45.0);
	glEnd();

	// jd 6
	glBegin(GL_QUADS);
	glColor3f(1.0,1.0,0.6);
	glVertex3f(40.1,-30.0, -50.0);
	glVertex3f(40.1, -20.0, -50.0);
	glVertex3f(40.1, -20.0, -55.0);
    glVertex3f(40.1,-30.0, -55.0);
	glEnd();

	// jd 7
	glBegin(GL_QUADS);
	glColor3f(1.0,1.0,0.6);
	glVertex3f(40.1,-30.0, -60.0);
	glVertex3f(40.1, -20.0, -60.0);
	glVertex3f(40.1, -20.0, -65.0);
    glVertex3f(40.1,-30.0, -65.0);
	glEnd();

	// jd 8
	glBegin(GL_QUADS);
	glColor3f(1.0,1.0,0.6);
	glVertex3f(40.1,-30.0, -70.0);
	glVertex3f(40.1, -20.0, -70.0);
	glVertex3f(40.1, -20.0, -75.0);
    glVertex3f(40.1,-30.0, -75.0);
	glEnd();

	// jd 9
	glBegin(GL_QUADS);
	glColor3f(1.0,1.0,0.6);
	glVertex3f(40.1,-30.0, -80.0);
	glVertex3f(40.1, -20.0, -80.0);
	glVertex3f(40.1, -20.0, -85.0);
    glVertex3f(40.1,-30.0, -85.0);
	glEnd();

	// jd 10
	glBegin(GL_QUADS);
	glColor3f(1.0,1.0,0.6);
	glVertex3f(40.1,-30.0, -90.0);
	glVertex3f(40.1, -20.0, -90.0);
	glVertex3f(40.1, -20.0, -95.0);
    glVertex3f(40.1,-30.0, -95.0);
	glEnd();


	//glColor3f(1.0,1.0,0.6);

	glPushMatrix();
	glPopMatrix();
	glutSwapBuffers();
	}

void keyboard(unsigned char key, int x, int y)
{
    switch (key)
    {
	case 'w':
    case 'W':
        glTranslatef(0.0, 0.0, -3.0);
        break;
    case 'd':
    case 'D':
        glTranslatef(3.0, 0.0, 0.0);
        break;
	case 's':
    case 'S':
		glTranslatef(0.0, 0.0, 3.0);
        break;
    case 'a':
    case 'A':
        glTranslatef(-3.0, 0.0, 0.0);
        break;
	case 'q':
	case 'Q':
        glTranslatef(0.0, 3.0, 0.0);
        break;
	case 'e':
	case 'E':
        glTranslatef(0.0, -3.0, 0.0);
        break;
    case 'k':
	case 'K':
        glRotatef(2.0, 1.0, 0.0, 0.0);
        break;
    case 'i':
	case 'I':
        glRotatef(-2.0, 1.0, 0.0, 0.0);
        break;
	case 'l':
	case 'L':
        glRotatef(2.0, 0.0, 1.0, 0.0);
        break;
    case 'j':
	case 'J':
        glRotatef(-2.0, 0.0, 1.0, 0.0);
        break;
    case 'c':
	case 'C':
        glRotatef(2.0, 0.0, 0.0, 1.0);
        break;
    case 'n':
	case 'N':
        glRotatef(-2.0, 0.0, 0.0, 1.0);
        break;
    case 'F':
	case 'f':
        if (is_depth)
        {
            is_depth = 0;
            glDisable(GL_DEPTH_TEST);
        }
        else
        {
            is_depth = 1;
            glEnable(GL_DEPTH_TEST);
        }
    }
    tampil();
}

void ukuran(int lebar, int tinggi)
{
    if (tinggi == 0) tinggi = 1;

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(50.0, lebar / tinggi, 6.0, 500.0);
    glTranslatef(0.0, -5.0, -150.0);
    glMatrixMode(GL_MODELVIEW);
}
