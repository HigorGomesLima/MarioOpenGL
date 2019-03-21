#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdio.h>
#include <stdlib.h>
#include<cmath>

double x=0, y=0; // x e y para trabalhar a rotação

void specialKeys( int key, int xi, int yi )
{
    // Seta direita - aumenta rotação em 5 graus
    // Seta para esquerda - diminui a rotação por 5 graus
    if (key == GLUT_KEY_RIGHT) y += 5;
    else if (key == GLUT_KEY_LEFT) y -= 5;
    else if (key == GLUT_KEY_UP ) x += 5;
    else if (key == GLUT_KEY_DOWN) x -= 5;
    // Requisitar atualização do display
    glutPostRedisplay();
}

void marioRosto(void)
{
    // Reinicia transformações
    glLoadIdentity();
    // Rotaciona quando o usuário muda x e y
    glRotatef( x, 1.0, 0.0, 0.0 );
    glRotatef( y, 0.0, 1.0, 0.0 );
    glBegin(GL_POLYGON);


// Lado frente rosto
glBegin(GL_LINE_LOOP);
glColor3f( 0.0, 0.0, 1.0 );
glVertex3f( 0.5, 0.2, -0.5 );
glVertex3f( 0.5, 1.2, -0.5 );
glVertex3f( 0.5, 1.2, 0.5 );
glVertex3f( 0.5, 0.2, 0.5 );

glEnd();

// Lado rosto direita
glBegin(GL_LINE_LOOP);
glColor3f( 0.0, 0.0, 1.0 );
glVertex3f( -0.5, 0.2, 0.5 );
glVertex3f( -0.5, 1.2, 0.5 );
glVertex3f( 0.5, 1.2, 0.5 );
glVertex3f( 0.5, 0.2, 0.5 );

glEnd();

// Lado rosto esquerda
glBegin(GL_LINE_LOOP);
glColor3f( 0.0, 0.0, 1.0 );
glVertex3f( 0.5, 0.2, -0.5 );
glVertex3f( 0.5, 1.2, -0.5 );
glVertex3f( -0.5, 1.2, -0.5 );
glVertex3f( -0.5, 0.2, -0.5 );

glEnd();

// Lado rosto trás
glBegin(GL_LINE_LOOP);
glColor3f( 0.0, 0.0, 1.0 );
glVertex3f( -0.5, 0.2, 0.5 );
glVertex3f( -0.5, 1.2, 0.5 );
glVertex3f( -0.5, 1.2, -0.5 );
glVertex3f( -0.5, 0.2, -0.5 );

glEnd();

// Lado rosto topo
glBegin(GL_LINE_LOOP);
glColor3f( 0.0, 0.0, 1.0 );
glVertex3f( -0.5, 1.2, 0.5 );
glVertex3f( -0.5, 1.2, -0.5 );
glVertex3f( 0.5, 1.2, -0.5 );
glVertex3f( 0.5, 1.2, 0.5 );

glEnd();

// Lado rosto topo
glBegin(GL_LINE_LOOP);
glColor3f( 0.0, 0.0, 1.0 );
glVertex3f( -0.5, 0.2, 0.5 );
glVertex3f( -0.5, 0.2, -0.5 );
glVertex3f( 0.5, 0.2, -0.5 );
glVertex3f( 0.5, 0.2, 0.5 );

glEnd();

// Lado amarelo - ESQUERDA
glBegin(GL_LINE_LOOP);
glColor3f( 0.0, 0.0, 1.0 );
glVertex3f( -0.5, -0.5, -0.5 );
glVertex3f( 0.5, -0.5, -0.5 );
glVertex3f(0.0, 0.5, 0.0);
glEnd();

// Boné
glBegin(GL_LINE_LOOP);
glColor3f( 0.0, 0.0, 1.0 );
glVertex3f( 0.7, 0.95, 0.5 );
glVertex3f( 0.7, 0.95, -0.5 );
glVertex3f( 0.5, 0.95, -0.5);
glVertex3f( 0.5, 0.95, 0.5);
glEnd();

}

void marioCorpo(void)
{
    // Reinicia transformações
    glLoadIdentity();
    // Rotaciona quando o usuário muda x e y
    glRotatef( x, 1.0, 0.0, 0.0 );
    glRotatef( y, 0.0, 1.0, 0.0 );
    glBegin(GL_POLYGON);


// Lado frente rosto
glBegin(GL_LINE_LOOP);
glColor3f( 0.0, 0.0, 1.0 );
glVertex3f( 0.2, -0.4, -0.2 );
glVertex3f( 0.2, 0.2, -0.2 );
glVertex3f( 0.2, 0.2, 0.2 );
glVertex3f( 0.2, -0.4, 0.2 );

glEnd();

// Lado rosto direita
glBegin(GL_LINE_LOOP);
glColor3f( 0.0, 0.0, 1.0 );
glVertex3f( -0.2, -0.4, 0.2 );
glVertex3f( -0.2, 0.2, 0.2 );
glVertex3f( 0.2, 0.2, 0.2 );
glVertex3f( 0.2, -0.4, 0.2 );

glEnd();

// Lado rosto esquerda
glBegin(GL_LINE_LOOP);
glColor3f( 0.0, 0.0, 1.0 );
glVertex3f( 0.2, -0.4, -0.2 );
glVertex3f( 0.2, 0.2, -0.2 );
glVertex3f( -0.2, 0.2, -0.2 );
glVertex3f( -0.2, -0.4, -0.2 );

glEnd();

// Lado rosto trás
glBegin(GL_LINE_LOOP);
glColor3f( 0.0, 0.0, 1.0 );
glVertex3f( -0.2, -0.4, 0.2 );
glVertex3f( -0.2, 0.2, 0.2 );
glVertex3f( -0.2, 0.2, -0.2 );
glVertex3f( -0.2, -0.4, -0.2 );

glEnd();

// Lado rosto topo
glBegin(GL_LINE_LOOP);
glColor3f( 0.0, 0.0, 1.0 );
glVertex3f( -0.2, 0.2, 0.2 );
glVertex3f( -0.2, 0.2, -0.2 );
glVertex3f( 0.2, 0.2, -0.2 );
glVertex3f( 0.2, 0.2, 0.2 );

glEnd();

// Lado rosto topo
glBegin(GL_LINE_LOOP);
glColor3f( 0.0, 0.0, 1.0 );
glVertex3f( -0.2, -0.4, 0.2 );
glVertex3f( -0.2, -0.4, -0.2 );
glVertex3f( 0.2, -0.4, -0.2 );
glVertex3f( 0.2, -0.4, 0.2 );

glEnd();

// Lado amarelo - ESQUERDA
glBegin(GL_LINE_LOOP);
glColor3f( 0.0, 0.0, 1.0 );
glVertex3f( -0.2, -0.2, -0.2 );
glVertex3f( 0.2, -0.2, -0.2 );
glVertex3f(0.0, 0.2, 0.0);
glEnd();

}

static void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    marioRosto(); //função entrada do polígono
    marioCorpo();
    glFlush();
    glutSwapBuffers();
}


int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(600,480);
    glutInitWindowPosition(10,10);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("Piramide");
    glEnable(GL_DEPTH_TEST);
    glutDisplayFunc(display);
    glutSpecialFunc(specialKeys);
    glClearColor(1,1,1,1);
    glutMainLoop();
    return EXIT_SUCCESS;
}
