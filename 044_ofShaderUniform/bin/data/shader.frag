#version 150

out vec4 outputColor;

uniform float u_red;

void main(){
	float red = u_red;
	float green = 0.5;
	float blue = 0.3;
	float alpha = 1.0;
	outputColor = vec4(red, green, blue, alpha);
}