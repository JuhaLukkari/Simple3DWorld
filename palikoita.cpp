/*
///////////////////////
Osa opengl-ohjelmaa.Hyödyllisiä palasia 
pää-ohjelman käyttöön.

Juharts (c) 2007


////////////////////
*/

#include "peli.h"





void DrawCharacter(float x,float y,float z)
{

glBegin(GL_QUADS);

		glVertex3f( x, y,-z);			// Top Right Of The Quad (Top)
		glVertex3f(-1.0f+x, 1.0f+y,-1.0f+z);			// Top Left Of The Quad (Top)
		glVertex3f(-1.0f+x, 1.0f+y, 1.0f+z);			// Bottom Left Of The Quad (Top)
		glVertex3f( 1.0f+x, 1.0f+y, 1.0f+z);			// Bottom Right Of The Quad (Top)
	
		glVertex3f( 1.0f+x,-1.0f+y, 1.0f+z);			// Top Right Of The Quad (Bottom)
		glVertex3f(-1.0f+x,-1.0f+y, 1.0f+z);			// Top Left Of The Quad (Bottom)
		glVertex3f(-1.0f+x,-1.0f+y,-1.0f+z);			// Bottom Left Of The Quad (Bottom)
		glVertex3f( x,-y,-z);			// Bottom Right Of The Quad (Bottom)
	
		glVertex3f( 1.0f+x, 1.0f+y, 1.0f+z);			// Top Right Of The Quad (Front)
		glVertex3f(-1.0f+x, 1.0f+y, 1.0f+z);			// Top Left Of The Quad (Front)
		glVertex3f(-1.0f+x,-1.0f+y, 1.0f+z);			// Bottom Left Of The Quad (Front)
		glVertex3f( x,-y, z);			// Bottom Right Of The Quad (Front)
	
		glVertex3f( x,-y,-z);			// Bottom Left Of The Quad (Back)
		glVertex3f(-x,-y,-z);			// Bottom Right Of The Quad (Back)
		glVertex3f(-x, y,-z);			// Top Right Of The Quad (Back)
		glVertex3f( x, y,-z);			// Top Left Of The Quad (Back)
		
		glVertex3f(-x, y, z);			// Top Right Of The Quad (Left)
		glVertex3f(-x, y,-z);			// Top Left Of The Quad (Left)
		glVertex3f(-x,-y,-z);			// Bottom Left Of The Quad (Left)
		glVertex3f(-x,-y, z);			// Bottom Right Of The Quad (Left)
	
		glVertex3f( x, y,-z);			// Top Right Of The Quad (Right)
		glVertex3f( x, y, z);			// Top Left Of The Quad (Right)
		glVertex3f( x,-y, z);			// Bottom Left Of The Quad (Right)
		glVertex3f( x,-y,-z);			// Bottom Right Of The Quad (Right)
	glEnd();						// Done Drawing The Quad



}