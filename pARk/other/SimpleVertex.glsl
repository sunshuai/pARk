
attribute vec4 Position; // 1
attribute vec4 SourceColour; // 2

varying vec4 DestinationColour; // 3 

uniform mat4 Projection; // 4
uniform mat4 Modelview; // Add right after the Projection uniform

attribute vec2 TexCoordIn;
varying vec2 TexCoordOut;

void main(void) // 5
{
    DestinationColour = SourceColour; // 6
    gl_Position = Projection * Modelview * Position; // 7
    TexCoordOut = TexCoordIn;
}
