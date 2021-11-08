#version 430
precision mediump float;

in vec2 v_texcoord;

out vec4 frag_color;

uniform vec2 u_c;
uniform int u_max_iterations;

void main()
{
	vec2 number = v_texcoord;
	vec2 temp;
	int i = 0;

	while (length(number) < 2 && i < u_max_iterations)
	{
		temp = number;
		number.x = temp.x * temp.x - temp.y * temp.y + u_c.x;
		number.y = 2. * temp.x * temp.y + u_c.y;
		i++;
	}

	if (i == u_max_iterations)
		frag_color = vec4(0., 0., 0., 1.);
	else
		frag_color = vec4(1., 1., 1., 1.);
}
