/*
 * song.cpp
 *
 *  Created on: Dec 5, 2016
 *      Author: hello
 */

#include "song.hpp"

Song::Song(string artist, string title) {
	//ennek az osztálynak a title-je = a konstruktor paraméterével
	this->title = title;
	this->artist = artist;
	sumOfRating = 0;
	countofRating = 0;
}

void Song::setGenre(string genre) {
	this->genre = genre;
}

string Song::getGenre() {
	return genre;
}

string Song::getTitle() {
	return title;
}

string Song::getArtist() {
	return artist;
}

bool Song::rate(int rate) {
	bool accept = true;
	if ((genre == "rock" && rate == 1) || (genre == "reggie" && rate == 5)) {
		accept = false;
	}

	if (accept) {
		sumOfRating += rate;
		++countofRating;
	}

	return accept;
}

float Song::getAverageRating() {
	if (countofRating == 0) {
		// throw "divisionByZero";
		return 0;
	}
	return ((float) sumOfRating) / ((float) countofRating);
}

Song::~Song() {

}
