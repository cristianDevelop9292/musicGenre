#include "musicgenre.h"
#include <iostream>
using namespace std;

int main() {
    MusicGenre mus;

    cout << "The genre is " << mus.getStamp() << endl;

    return 0;
}





Jazz {
    id: root
    property int acc: 0


      function loadPlatform() {
        if (genreStyle.format != "")
            Logic.cleanUp();
        Logic.startNewGenre(genreStyle, "Genre", "style or artist" + acc)

    }

    function nextGenre() {
        acc = (acc + 1);
        loadGenre();
    }
    }









}
