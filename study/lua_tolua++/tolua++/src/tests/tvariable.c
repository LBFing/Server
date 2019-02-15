#include "lualib.h"
#include "lauxlib.h"

#include "tvariable.h"

int i = 1;
float f = 2.0f;;
double d = 3.0;
char* s = "Hello world";
void* v = (void*)1;
char n[64] = "Hi there";

A a = {11,12.0f,13.0,"Hello world from class",(void*)1,"Hi there from class"};
B* b;
U u;

int mi = 21;
float mf = 22.0f;
double md = 23.0;
char* ms = "Hello world in module";
void* mv = NULL;
char mn[64] = "Hi there in module";
A ma = {31,32.0f,33.0,"Hello world from class in module",
	       NULL,"Hi there from class in module"};
B* mb;

int main (void)
{
	int retcode = 0;
	int  tolua_tvariable_open (lua_State*);
	lua_State* L = luaL_newstate();

	B bb = {a,NULL};
	B bbb = {ma,&bb};
	b = &bb;
	mb = &bbb;


	luaL_openlibs(L);
	tolua_tvariable_open(L);

	if (luaL_dofile(L,"tvariable.lua") != 0) {
		fprintf(stderr, "%s\n", lua_tostring(L, 1));
		retcode = 1;
	}

	lua_close(L);
	return retcode;
}

