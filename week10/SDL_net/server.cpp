/*
 * server.cpp
 *
 *  Created on: 2017. jan. 3.
 *      Author: Judo
 */
#include <iostream>
#include <ctime>
#include "SDL2/SDL.h"
#include "SDL2/SDL_net.h"
#include <cstdio>
#include <sstream>

union Ptr {
	char* asChar;
	unsigned char* asUChar;
	int* asInt;
	unsigned int* asUInt;
	float* asFloat;
	double* asDouble;
	bool* asBool;
	void* asVoid;
};

int main(int argc, char *argv[]) {
    SDL_Init(SDL_INIT_EVERYTHING);
    SDLNet_Init();
    IPaddress ip;
    int success = SDLNet_ResolveHost(&ip, NULL, 1234);
    TCPsocket server = SDLNet_TCP_Open(&ip);

    TCPsocket client;
    const char* send_text = "Hello Client!\n";
    while (1) {
        client = SDLNet_TCP_Accept(server);
        if (client) {
        	char text[100];
        	success = SDLNet_TCP_Recv(client, text, 100);
			if (success >= 0) {
				std::cout << text;
			}
            SDLNet_TCP_Send(client, text, 100);
            SDLNet_TCP_Close(client);
            break;
        }
    }
	SDLNet_TCP_Close(client);
	SDLNet_TCP_Close(server);
	SDLNet_Quit();
	SDL_Quit();
	return 0;
}
