#include <windows.h>		// Header File For Windows
#include <windowsx.h>         //hyödyllisiä windows juttuja
#include <mmsystem.h>
#include <math.h>			// Math Library Header File
#include <stdio.h>			// Header File For Standard Input/Output
#include <gl\gl.h>			// Header File For The OpenGL32 Library
#include <gl\glu.h>			// Header File For The GLu32 Library
#include <gl\glaux.h>		// Header File For The Glaux Library
#include <vector>           //vähän c++
#include <string.h>  
#include "MilkshapeModel.h"
#include "Model.h"
#include "MS3DFile.h"

void DrawCharacter(float x,float y,float z);   
GLuint LoadGLTexture( const char *filename );
