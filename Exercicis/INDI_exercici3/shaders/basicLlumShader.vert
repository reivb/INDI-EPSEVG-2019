#version 330 core

in vec3 vertex;
in vec3 normal;

in vec3 matamb;
in vec3 matdiff;
in vec3 matspec;
in float matshin;

out vec3 fmatamb;
out vec3 fmatdiff;
out vec3 fmatspec;
out float fmatshin;

out vec3 fvertex;
out vec3 fnormal;

uniform mat4 proj;
uniform mat4 view;
uniform mat4 TG;

void main(){
fmatamb = matamb;
fmatdiff = matdiff;
fmatspec = matspec;
fmatshin = matshin;
fvertex = vertex;
fnormal = normal;
gl_Position = proj * view * TG * vec4 (vertex, 1.0);
}
