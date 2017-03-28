#version 410

layout(vertices=4) out;

//in gl_in[];		//Struct containing gl_Position, gl_PointSize, and something else you'll probably never use
//out gl_out[];

void main()
{
	if(gl_InvocationID == 0)
	{
		gl_TessLevelOuter[0] = 64;
		gl_TessLevelOuter[1] = 64;		//Change this
	}

	gl_out[gl_InvocationID].gl_Position = gl_in[gl_InvocationID].gl_Position;
}