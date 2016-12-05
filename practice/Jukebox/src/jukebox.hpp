#ifndef JUKEBOX_H
#define JUKEBOX_H

#include <string>
#include <vector>
#include "song.hpp"

using namespace std;

class Jukebox {

private:
	vector<Song> songs;

public:
	Jukebox();
	void addSong(Song song);
	bool rate(string title, string artist, int rate);
	float getArtistRating(string artist);
	float getGenreRating(string genre);
	string getTopRatedTitle();
	string getTopRatedGenre();
	~Jukebox();

};


#endif
