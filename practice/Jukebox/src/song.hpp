/*
 * song.hpp
 *
 *  Created on: Dec 5, 2016
 *      Author: hello
 */

#ifndef SONG_HPP_
#define SONG_HPP_

#include <string>

using namespace std;

class Song {

private:
	int sumOfRating;
	int countofRating;

protected:
	string title;
	string artist;
	string genre;

public:
	Song(string artist, string title);

	string getGenre();
	void setGenre(string genre);
	string getTitle();
	string getArtist();

	bool rate(int rate);
	float getAverageRating();

	~Song();

};

#endif /* SONG_HPP_ */
