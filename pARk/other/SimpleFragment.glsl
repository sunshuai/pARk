
varying lowp vec4 DestinationColour;// 1

varying mediump vec2 TexCoordOut; // New
uniform sampler2D Texture; // New

void main(void) {
    gl_FragColor = DestinationColour * texture2D(Texture, TexCoordOut); // 3

}


