#include <iostream>

#include <string>

#include "jukebox.hpp"
#include "song.hpp"

using namespace std;

int main() {
	cout << "Jukebox:))" << endl;

	try{
		Jukebox jukebox;
		Song kedvenc("Metallica", "Nothing else matters");
		kedvenc.rate(5);
		kedvenc.rate(1);
		kedvenc.setGenre("rock");
		cout << "rating of '" << kedvenc.getArtist() << ": " << kedvenc.getTitle()
				<< "' = " << kedvenc.getAverageRating() << endl;

		jukebox.addSong(kedvenc);

	}catch(char const* ex){
		cout << "some error occured: '" << ex << "'" << endl;
	}

	cout << "end" << endl;

	return 0;
}
