#include "musicgenre.h"

MusicGenre::MusicGenre() {
    stamp = 0;
    input = 0;

}

void MusicGenre::insertInput(double input) {
    this->input = input;
}

double MusicGenre::getStamp() {
    return stamp;
}

void MusicGenre::clear() {
    stamp = 0;
    input = 0;
}
