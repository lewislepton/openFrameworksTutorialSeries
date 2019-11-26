#version 150

out vec4 outputColor;

void main(){
	float red = 0.3;
	float green = 0.6;
	float blue = 0.3;
	float alpha = 1.0;
	outputColor = vec4(red, green, blue, alpha);
}