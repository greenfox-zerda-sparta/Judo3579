/*
 * client.cpp
 *
 *  Created on: 2017. jan. 3.
 *      Author: Judo
 */
#include <iostream>
#include <time.h>
#include "SDL2/SDL.h"
#include "SDL2/SDL_net.h"
#include <stdio.h>
#include <windows.h>

using namespace std;

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
    ip.host = atoi("127.0.0.1");
    ip.port = 1234;
    int success = SDLNet_ResolveHost(&ip, "127.0.0.1", 1234);
    TCPsocket client = SDLNet_TCP_Open(&ip);

    char text[100];
    SDLNet_TCP_Recv(client, text, 100);
    const char* send_text = "Hello Server \n";
    std::cout << text;

	while (1) {
		success = SDLNet_TCP_Send(client, send_text, strlen(send_text) + 1);
		std::cout << "sent to server: " << send_text;
		Sleep(100);
	}

    SDLNet_TCP_Close(client);
    SDL_Quit();
    SDL_Quit();
    return 0;
    }
