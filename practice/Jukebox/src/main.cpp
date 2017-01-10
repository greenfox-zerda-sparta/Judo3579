#include <iostream>

#include <string>

#include "jukebox.hpp"
#include "song.hpp"

using namespace std;

int main() {
	cout << "Jukebox:))" << endl;

	try {
		Jukebox jukebox;

		Song kedvenc("Metallica", "Nothing else matters");
		kedvenc.setGenre("rock");
		kedvenc.rate(5);
		kedvenc.rate(1);
		jukebox.addSong(kedvenc);

		cout << "rating of '" << kedvenc.getArtist() << ": " << kedvenc.getTitle()
				<< "' = " << kedvenc.getAverageRating()
				<< endl;


		Song one("Metallica", "One");
		one.setGenre("rock");
		one.rate(5);
		one.rate(5);
		jukebox.addSong(one);


		Song korn("Korn", "Hahah");
		korn.setGenre("rock");
		korn.rate(3);
		korn.rate(1);
		jukebox.addSong(korn);

		Song nsync("N'Sync", "I want you");
		nsync.setGenre("pop");
		nsync.rate(1);
		nsync.rate(2);
		jukebox.addSong(nsync);

		Song bobm("Bob Marley", "Lalala");
		bobm.setGenre("raggie");
		bobm.rate(5);
		bobm.rate(4);
		jukebox.addSong(bobm);

		jukebox.rate("Metallica", "One", 4);

		cout << "Metallica artistRating: " << jukebox.getArtistRating("Metallica") << endl;
		cout << "GenreRating(rock): " << jukebox.getGenreRating("rock") << endl;
		cout << "GenreRating(pop): " << jukebox.getGenreRating("pop") << endl;
		cout << "GenreRating(raggie): " << jukebox.getGenreRating("raggie") << endl;
		cout << "getTopRatedGenre: " << jukebox.getTopRatedGenre() << endl;
		cout << "getTopRatedTitle: " << jukebox.getTopRatedTitle() << endl;

	} catch (char const* ex) {
		cout << "some error occured: '" << ex << "'" << endl;
	}

	cout << "end" << endl;

	return 0;
}
