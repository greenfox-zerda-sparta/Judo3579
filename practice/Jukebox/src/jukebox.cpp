#include "jukebox.hpp"

Jukebox::Jukebox() {

}

bool Jukebox::rate(string artist, string title, int rate) {
	bool success = false;
	for (unsigned int i = 0; i < songs.size(); i++) {
		if (songs[i].getTitle() == title && songs[i].getArtist() == artist) {
			songs[i].rate(rate);
			success = true;
		}
	}
	return success;
}

float Jukebox::getArtistRating(string artist) {
	int sumOfRating = 0;
	int countOfRating = 0;
	for (unsigned int i = 0; i < songs.size(); i++) {
		if (songs[i].getArtist() == artist) {
			sumOfRating += songs[i].getAverageRating();
			++countOfRating;
		}
	}
	if (countOfRating == 0) {
		return 0;
	}

	return sumOfRating / countOfRating;
}

float Jukebox::getGenreRating(string genre) {
	int sumOfRating = 0;
	int countOfRating = 0;
	for (unsigned int i = 0; i < songs.size(); i++) {
		if (songs[i].getGenre() == genre) {
			sumOfRating += songs[i].getAverageRating();
			++countOfRating;
		}
	}
	if (countOfRating == 0) {
		return 0;
	}

	return sumOfRating / countOfRating;
}

string Jukebox::getTopRatedTitle() {
	float max;
	int index;

	if (songs.size() > 0) {
		max = songs[0].getAverageRating();
		index = 0;
		for (unsigned int i = 1; i > songs.size(); i++) {
			if (songs[i].getAverageRating() > max) {
				max = songs[i].getAverageRating();
				index = i;
			}
		}

		return songs[index].getTitle();

	} else {
		return "<<>>";
	}
}

string Jukebox::getTopRatedGenre() {
	float rock = getGenreRating("rock");
	float raggie = getGenreRating("raggie");
	float pop = getGenreRating("pop");

	if (rock >= raggie && rock >= pop) {
		return "rock";
	}
	if (raggie >= rock && raggie >= pop) {
		return "raggie";
	}
	if (pop >= rock && pop >= raggie) {
		return "pop";
	}

	return "<<>>";
}

void Jukebox::addSong(Song song) {
	songs.push_back(song);
}

Jukebox::~Jukebox() {

}
